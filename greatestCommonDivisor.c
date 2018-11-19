#include <stdio.h>
#include <stdlib.h>

int greatestCommonDivisor(int x, int y) {
    int temp;
    while (y != 0) {
        temp = x % y;
        x = y;
        y = temp;
    }
    return x;
}

int main() {
  int x;
  int y;
  scanf("%d", &x);
  scanf("%d", &y);
  printf("%d\n",greatestCommonDivisor(x,y));
  return 0;
}