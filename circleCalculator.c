#include <stdio.h>
#include <stdlib.h>

double calculateArea (int radius,double pi) {
    return pi * (radius*radius);
}

double calculatePerimeter (int radius,double pi) {
    return pi * radius * 2;
}

int main () {

    int radius;
    const double PI = 3.14159265359;

    printf( "Enter a value :");

    scanf("%d",&radius);
    printf("%f\n",calculateArea(radius,PI));
    printf("%f\n",calculatePerimeter(radius,PI));
}

