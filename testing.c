#include <stdio.h>

int arrayLength(int *myArray) {
    return sizeof(myArray);
}

int main() {
    int array[] = {0,1,2,3,4,5};
    int length = sizeof(array)/sizeof(array[0]);
    printf("%d\n", length);
    printf("%d\n", arrayLength(array));
}