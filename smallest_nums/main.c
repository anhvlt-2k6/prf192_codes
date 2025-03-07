#include <stdio.h>
#include <limits.h>


int smI(int a, int b, int c) {
  int soMau = a;

  if (soMau < b) {
    if (soMau < c) return soMau;
  } else {
     soMau = b;
     if (soMau < c) {return soMau;} else {return c;}
  }
}

int main() {

  int a, b, c, nhoNhat;
  printf("Nhap vao 3 so nguyen: ");
  scanf("%d %d %d", &a, &b, &c);

  printf("So nho nhat la: %d\n", smI(a, b, c));

  return 0;
}
