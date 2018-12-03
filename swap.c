#include <stdio.h>
void swap(int *i, int *j) {
    *i = *i + *j;
    *j = *i - *j;
    *i = *i - *j;

    // XOR Version
    //*i = *i ^ *j;
    //*j = *i ^ *j;
    //*i = *i ^ *j;
}

int main () {
    int i = 2;
    int j = 5;
    swap(&i,&j);
    printf("i = %d; j = %d\n",i,j);
    return 0;
}