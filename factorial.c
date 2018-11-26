#include <stdio.h>

long factorial(int input) {
    long result = 1;
    for(long i = 1; i <= input; i++){
        result *= i;
    }
    return result;
}

int main() {
    long input;
    scanf("%ld",&input);
    printf("%ld\n",factorial(input));
}