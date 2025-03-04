#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void printB(int n) {
  for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
    printf("%d", (n >> i) & 1);
  }
  printf("\n");
}

int main() {
  int a, b;
  printf("a and b: ");
  scanf("%d %d", &a, &b);

  int bitsOfB = b == 0 ? 0 : log2(abs(b)) + 1;

  a = (unsigned int)((abs(a) << (bitsOfB + 2)) |
                     (a > 0 ? (b > 0 ? 0 : 1) : (b > 0 ? 2 : 3)));
  b = (unsigned int)(a | (abs(b) << 2));

  int ones = pow(2, bitsOfB + 2) - 1;

  a = (b & ones) >> 2;
  a = (b & 1) == 0 ? a : -a;
  b = (b & 2) < 1 ? b >> (bitsOfB + 2) : -(b >> (bitsOfB + 2));

  printf("a = %d, b = %d\n", a, b);

  return 0;
}