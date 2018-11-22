#include <stdio.h>
#include <stdlib.h>

double subfactorial(double n){
  if(n==1) {
    return 0;
  } else if (n==2) {
    return 1;
  } 
  return (subfactorial(n-1) + subfactorial(n-2)) * (n-1);
}

int main() {
    double n;
    printf("Enter a value: ");
    scanf("%lf", &n);
    double output = subfactorial(n);
    printf("%f\n", output);
}