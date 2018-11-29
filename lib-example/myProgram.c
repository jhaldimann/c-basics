#include <stdio.h>
#include "myLib.h"

int main(){
  long i;
  puts("Please type a number:");
  if(1!=scanf(" %ld",&i)){
    puts("Error");
    return 1;
  }
  long logi = logarithm(i);
  long factoriali = factorial(logi);
  double exponentiali = exponential(logi);
  long squarei = square(i);
  long gcdi = greatestCommonDivisor(i,12);
  printf("log(%ld)=%ld and %ld! = %ld;\n e^%ld is %lf\n",i,logi,logi,factoriali,logi,exponentiali);
  printf("square of %ld is %ld\n",i,squarei);
  printf("gcd of %ld and 12 is %ld\n",i,gcdi);

  return 0;
}
