# PRF192 Final Project

## Thành viên nhóm

Lê Tuấn Anh

Võ Lưu Tường Anh

Chí Hoàng Phí

Phạm Minh Đức Huy

Trương Vũ Bình

## Giải thích từng thành phần của code

### Global Initialization

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
```

Phân này bao gôm những header `.h` của C trong thư mục `include`, nhằm tiết kiệm thời gian viết code, cũng như dễ quản lý và sửa lỗi do các cá nhân khác trong nhóm có thể chỉ cần copy source code.

Ngoài `#include <..>`, có thể sử dụng `#include "..."`, với `"..."` là đường dẫn đến header, bắt đầu tính từ file `.c`

```c
#ifdef _WIN32
    #define CLEAR_SCREEN "cls"
#else
    #define CLEAR_SCREEN "clear"
#endif
```

`#ifdef` là kiểu Preprocessor, cho phép trình biên dịch có thể chạy các tùy chọn biên dịch để xuất thành file có thể chạy được, trong đó `#ifdef`, `#elif`, và `#else`. Ngoài ra, `#ifndef` được biểu diễn ở dạng phủ định điều kiện của `#ifdef`. Đặc biệt, nếu là điều kiện của Preprocessor thì phải kết thúc bằng `#endif`.

Thông thường, conditional pre-processor được dùng cho ứng dụng đa nền tảng (ví dụ như `gcc` trên Windows), hoặc để [viết chuẩn header dưới dạng chuẩn hóa](https://en.wikipedia.org/wiki/Include_guard).

Hàm trên có thể viết lại là:

```c
#ifndef _WIN32
    #define CLEAR_SCREEN "clear"
#else
    #define CLEAR_SCREEN "cls"
#endif
```

Ở trên Windows, xóa màn hình dòng lệnh là `cls`, trong khi ở trên các distro của Linux và
macOS (Unix), FreeBSD, thì nó sẽ `clear`

```c
#define MAX_NAME 50
#define SAVE_FILE "caro_save.txt"
#define SCORE_FILE "caro_scores.txt"
```

`#define` là một dạng định nghĩa cho một macro hoặc một chuỗi các kí tự có trong C, để có thể dễ dàng sử dụng trong các đoạn thực thi.

```c
int SIZE = 15;
char **board;
char player1[MAX_NAME], player2[MAX_NAME];
int score1 = 0, score2 = 0, turn = 0;
```

Global variable (các biến toàn cục, khác với biến cục bộ), là những biến có thể được truy cập ở bất cứ hàm nào, mà không cần phải yêu cầu truy xuất qua `main()` hay bất cứ hàm con khác. Trong đó:

- `int SIZE = 15; int score1 = 0, score2 = 0, turn = 0;` là biến kiểu `int`
- `char player1[MAX_NAME], player2[MAX_NAME]` là dạng một chuỗi kí tự.
- `char **board;` là biến con trỏ kiểu `char`. Kiểu dữ liệu này có thể giúp khởi tạo một mảng 2D với các tạo sau:

```c
char **board;
int n = <số lượng dòng>;
int m = <số lượng cột>;
board = malloc(n * sizeof(int *));

for (int i = 0; i < n; i++) {
    board[i] = malloc(m * sizeof(int));
}
```

### Hàm `free_board()`

Hàm này cho phép giải phóng bộ nhớ là một bảng hai chiều. Trong đó:

```c
for (int i = 0; i < SIZE; i++) {
        free(board[i]);
}
```

dùng để giải phóng bảng ở chiều thứ 2, theo trình tự như sau (giả sử như `SIZE=15` theo global variable)

```markdown
Bắt đầu với i = 0
board[0] -> giải phóng toàn bộ các phần tử của board[0][0], board[0][1], ...

i + 1 -> i = 1
board[1] -> giải phóng toàn bộ các phần tử của board[1][0], board[1][1], ...

...

i + 1 -> i = 14
board[14] -> giải phóng toàn bộ các phần tử của board[14][0], board[14][1], ...

i + 1 -> i = 15
Ngừng ở đây
```

Sau đó, `free(board);` sẽ giải phóng mọi phần tử từ 1 đến 15.

### Hàm `init_board()`

```c
board = (char **)malloc(SIZE * sizeof(char *));
    for (int i = 0; i < SIZE; i++) {
        board[i] = (char *)malloc(SIZE * sizeof(char));
        memset(board[i], '.', SIZE);
    }
```

Như đã đề cập về các khởi tạo mảng 2 chiều sử dụng `malloc()`. Tuy nhiên, nếu là môi trường kiểm soát chặt về bộ nhớ như MSVC hoặc C++ Compiler Standard 03 trở lên, thì cần casting `char **` và `char *`.

`memset()` dùng để "Đặt số byte đầu tiên của khối bộ nhớ được trỏ bởi ptr thành giá trị đã chỉ định" (cplusplus.com), với các tham số lần lượt là

- Một 1D array
- Ký tự cần đặt (chẳng hạn như '.' trong ví dụ, có thể thay thế bằng bất cứ ký tự nào khác, miễn là khác X để tránh gây lỗi tính toán)
- Số lương (dạng `size_t`, casting nếu cần)

### Hàm `print_board()`

```c
system(CLEAR_SCREEN);
printf("\n   ");
for (int i = 0; i < SIZE; i++) printf("%2d ", i);
printf("\n");

for (int i = 0; i < SIZE; i++) {
    printf("%2d ", i);
    for (int j = 0; j < SIZE; j++) printf(" %c ", board[i][j]);
    printf("\n");
}
```

Đoạn code này làm ba việc chính:

1. Gọi hàm `system(CLEAR_SCREEN)` để xóa màn hình.
2. In hàng tiêu đề với các số từ 0 đến SIZE-1 (đại diện cho cột).
3. Duyệt qua từng hàng của bảng: in số hàng rồi in các ký tự từ mảng board theo dạng lưới.

### Hàm `check_win()`

```c
int directions[4][2] = {{0, 1}, {1, 0}, {1, 1}, {1, -1}};
for (int d = 0; d < 4; d++) {
    int count = 1;
    for (int i = 1; i < 5; i++) {
        int r = row + directions[d][0] * i;
        int c = col + directions[d][1] * i;
        if (r >= 0 && r < SIZE && c >= 0 && c < SIZE && board[r][c] == symbol) count++;
        else break;
    }
    for (int i = 1; i < 5; i++) {
        int r = row - directions[d][0] * i;
        int c = col - directions[d][1] * i;
        if (r >= 0 && r < SIZE && c >= 0 && c < SIZE && board[r][c] == symbol) count++;
        else break;
    }
    if (count >= 5) return 1;
}
return 0;
```

Đoạn code này dùng để kiểm tra thắng cuộc trên bàn cờ theo 4 hướng: ngang, dọc, chéo xuống và chéo lên. Nó bắt đầu từ vị trí vừa đánh, duyệt theo từng hướng sang hai bên (tiến lùi) và đếm số ký tự giống nhau. Nếu tổng số liên tiếp đạt 5, nó báo thắng (trả về 1), nếu không, tiếp tục kiểm tra và cuối cùng trả về 0.

### Hàm `check_tie()`

```c
for (int i = 0; i < SIZE; i++)
    for (int j = 0; j < SIZE; j++)
        if (board[i][j] == '.') return 0;
return 1;
```

Đoạn code này duyệt qua toàn bộ bảng cờ. Nếu tìm thấy ô nào có ký tự '.', nghĩa là vẫn còn chỗ trống, nó trả về 0. Nếu không còn ô trống nào, nó trả về 1 – báo hiệu bàn cờ đã đầy. Không cần phải "đi kiểm tra từng góc", nó tự kiểm tra hết luôn!

### Hàm `show_winner()`

```c
printf("\n\nCongratulations, %s!\n", winner_name);
printf("You win the game!\n");
printf("=====================================\n");
printf("%s is the Winner!\n", winner_name);
printf("=====================================\n");
```

In ra kẻ chiến thắng. Có thể viết lại như sau để giảm số lượng `printf` và để formar dễ hơn:

```c
printf(
"\n\n"
"Congratulations, %s!\n"
"You win the game!\n"
"=====================================\n"
"%s is the Winner!\n"
"=====================================\n",
winner_name, winner_name
)
```

### Hàm `load_game()`

```c
FILE *f = fopen(SAVE_FILE, "w");
if (!f) {
    printf("Error saving game!\n");
    return;
}
fprintf(f, "%d %s %s %d\n", SIZE, player1, player2, turn);
for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) fprintf(f, "%c", board[i][j]);
    fprintf(f, "\n");
}
fclose(f);
printf("Game saved successfully!\n");
```

Đoạn code này mở một file để lưu trò chơi. Nó thử mở file với chế độ ghi ("w") và nếu không thành công thì in ra lỗi rồi dừng lại. Nếu mở được, nó sẽ ghi thông tin đầu tiên (kích thước bàn cờ, tên người chơi và lượt chơi) rồi duyệt qua từng dòng, ghi toàn bộ ký tự trong bảng cờ vào file. Cuối cùng, đóng file và in thông báo lưu thành công.

### Hàm `savesave_game()`

```c
    FILE *f = fopen(SAVE_FILE, "r");
    if (!f) {
        printf("No saved game found!\n");
        return;
    }
    fscanf(f, "%d %s %s %d", &SIZE, player1, player2, &turn);
    init_board();
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            fscanf(f, " %c", &board[i][j]);
    fclose(f);
    printf("Game loaded successfully!\n");
    play_game();
```

Đoạn code này dùng để load trò chơi từ file lưu. Nó mở file với chế độ đọc, nếu không mở được thì thông báo "No saved game found!" và kết thúc. Nếu mở được, nó đọc kích thước bàn cờ, tên người chơi và lượt chơi từ file, gọi hàm khởi tạo bảng, sau đó đọc toàn bộ ký tự của bảng từ file. Cuối cùng, đóng file, thông báo "Game loaded successfully!" và tiếp tục trò chơi bằng play_game().

### Hàm `save_score()`

```c
FILE *f = fopen(SCORE_FILE, "a");
if (!f) {
    printf("Error saving scores!\n");
    return;
}
fprintf(f, "%s (%d) - %s (%d) | Board size: %dx%d\n", player1, score1, player2, score2, SIZE, SIZE);
fclose(f);
```

Đoạn code này mở file để lưu điểm (ở chế độ "append" tức là thêm vào cuối file). Nếu mở file không thành, nó báo lỗi và dừng. Nếu mở được, nó ghi thông tin điểm số của hai người chơi kèm kích thước bảng rồi đóng file.

### Hàm `show_top_players()`

```c
FILE *f = fopen(SCORE_FILE, "r");
if (!f) {
    printf("No scores recorded yet.\n");
    return;
}
printf("Top Players:\n");
char line[100];
while (fgets(line, sizeof(line), f)) {
    printf("%s", line);
}
fclose(f);
```

Đoạn code này mở file SCORE_FILE để đọc bảng xếp hạng. Nếu mở file thất bại, nó báo "No scores recorded yet." và dừng. Nếu thành công, nó in tiêu đề "Top Players:" rồi đọc từng dòng từ file và in ra màn hình, sau đó đóng file.

### Hàm `show_instructions()`

```c
system(CLEAR_SCREEN);
printf(" == GAME INSTRUCTIONS == \n");
printf("1. Choose board size (15x15 or 19x19).\n");
printf("2. Players take turns entering row & column numbers.\n");
printf("3. The first player to align 5 symbols wins!\n");
printf("4. Press (-1) anytime to save & exit.\n");
printf("\nPress ENTER to return to the menu...");
while (getchar() != '\n');
getchar();
```

Đoạn code này làm ba việc chính:

1. Xóa màn hình bằng lệnh system(CLEAR_SCREEN).
2. In ra tiêu đề và các hướng dẫn chơi game, như chọn kích thước bàn cờ, lượt nhập hàng & cột, điều kiện thắng (liên tiếp 5 ký tự) và cách lưu game (nhấn -1).
3. Sau đó, in thông báo “Press ENTER to return to the menu…” và chờ người dùng nhấn phím ENTER để quay lại menu.

### Hàm `play_game()`

```c
    do {
        printf("Choose board size (15 or 19): ");
        int choice;
        if (scanf("%d", &choice) == 1 && (choice == 15 || choice == 19)) {
            SIZE = choice;
        } else {
            SIZE = 15;
            printf("Invalid input, using default board size: 15x15\n");
        }
        while (getchar() != '\n');
    } while (SIZE != 15 && SIZE != 19);

    init_board();
    printf("Enter player 1 name: ");
    scanf("%s", player1);
    printf("Enter player 2 name: ");
    scanf("%s", player2);

    int x, y;
    char symbols[2] = {'X', 'O'};
    turn = 0;

    while (1) {
        print_board();
        do {
            printf("%s (%c), enter row and column: ", turn == 0 ? player1 : player2, symbols[turn]);
            if (scanf("%d %d", &x, &y) != 2) {
                printf("Invalid input! Please try again.\n");
                while(getchar() != '\n');
                continue;
            }
            if (x == -1) {
                save_game();
                return;
            }
            if (x < 0 || x >= SIZE || y < 0 || y >= SIZE || board[x][y] != '.') {
                printf("Invalid move! Please try again.\n");
            } else {
                break;
            }
        } while (1);

        board[x][y] = symbols[turn];

        if (check_win(x, y, symbols[turn])) {
            print_board();
            save_score();
            show_winner(turn == 0 ? player1 : player2);
            return;
        }

        if (check_tie()) {
            print_board();
            printf("It's a tie!\n");
            return;
        }

        turn = 1 - turn;
    }
```

Đoạn code này thực hiện quy trình chính của trò chơi:

1. Người chơi chọn kích thước bàn cờ (15 hoặc 19). Nếu nhập sai, mặc định là 15.
2. Khởi tạo bàn cờ và nhập tên người chơi.
3. Vào vòng lặp game: in bàn cờ, yêu cầu người chơi nhập tọa độ di chuyển, kiểm tra tính hợp lệ của nước đi (bao gồm lưu game nếu nhập -1).
4. Cập nhật bàn cờ với nước đi, kiểm tra thắng hay hòa và chuyển lượt.

### Hàm `main()`

Hàm `main()` được sử dụng như là một cái menu điều hướng. Khi người dùng nhập 1, hay 2, nó sẽ chạy vào hàm tương ứng, để xử lý nhiệm vụ mà đã được lập trình sẵn.
