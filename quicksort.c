#include <stdio.h>
#include <string.h>

int main () {
    int myArray[] = {56,4232,57,268,2523,8653,356,13,425,24543};

    printf("%lu\n", sizeof(myArray) / sizeof(int));

    int myCounter = (sizeof(myArray) / sizeof(int)) -1;

    printf("%d\n", myCounter);

    return 0;
}
