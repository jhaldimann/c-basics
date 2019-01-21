#include <stdio.h>

int main() {
    int i[2] = {8,9};
    int *j = i;
    printf("%d %d %d", *j, --(*(++j)), ++(*(--j)));
    return 0;
}