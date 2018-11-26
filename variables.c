#include <stdio.h>
int counter (void) {
    static int i = 0;
    i++;
    return i;
}

int main() {
    for(int i = 0; i < 20; i++) {
        counter();
    }
    printf("%d\n", counter());
}