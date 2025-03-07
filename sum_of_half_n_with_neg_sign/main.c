#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Please enter positive integer N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("\nAccept positive number only!\n");
    } else {
        for (int i = 0; i <= n; i++) {
            sum += -1.0/(i+1) * pow(-1.0, (double)i);
        }
        printf("The sum is S = %.6lf\n", sum);
    }

    return 0;
}
