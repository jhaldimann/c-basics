#include <stdio.h>

#define LOGIC(i,j) i*j+(2 * i)

int main () {
    printf("%d \n",LOGIC(LOGIC(3,LOGIC(3,4)),LOGIC(3,4)));
    return 0;
}