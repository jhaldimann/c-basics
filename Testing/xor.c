#include <stdio.h>

void testing(int *i, int *j) {
    *i = *j ^ *i;
    printf("%d %d \n",*i, *j);
}

int main () {
    int i = 2;
    int j = 5;
    testing(&i,&j);
    return 0;
}