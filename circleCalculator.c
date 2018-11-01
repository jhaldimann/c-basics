#include <stdio.h>
#include <stdlib.h>
/* like this. */
double calculateArea (int radius,double pi) {
    return pi * (radius*radius);
}
/* like this. */
double calculatePerimeter (int radius,double pi) {
    return pi * radius * 2;
}
/* Main methode program starts here */
int main () {
    /* Define variables */
    int radius;
    const double PI = 3.14159265359;

    printf( "Enter a value :");
    /* Read input from console */
    scanf("%d",&radius);
    printf("%f\n",calculateArea(radius,PI));
    printf("%f\n",calculatePerimeter(radius,PI));
}

