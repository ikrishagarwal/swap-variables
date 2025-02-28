#include <math.h>
#include <stdio.h>

int main() {
  int a, b;
  printf("a and b: ");
  scanf("%d %d", &a, &b);

  int bitsOfB = log2(b) + 1;

  a = a << bitsOfB;
  b = a | b;

  int ones = pow(2, bitsOfB) - 1;

  a = b & ones;
  b = b >> bitsOfB;

  printf("a = %d, b = %d\n", a, b);

  return 0;
}