#include <stdio.h>
int main() {
  int ret = getchar();
  int c = ret;
  putchar(c);
  //fprintf (stdout,"%d\n",(EOF == c));
  return 0;
}