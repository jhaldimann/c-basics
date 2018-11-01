#include <stdio.h>
#include <stdlib.h>

calcFactors(int input) {
    /* Begin with smallest primenumber*/
    int factor = 2;
    while(input > 1) {
        if(input % factor == 0) {
            printf("%d\n",factor);
            input = input / factor;
        } else {
            factor++;
        }
    }
}

int main () {
    int input = 0;
    scanf("%d",&input);

    calcFactors(input);
    return 0;
}

