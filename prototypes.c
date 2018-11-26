#include <stdio.h>
int funcA(void);
int funcB(void);
int funcC(void);

int funcA(void) {
    printf("A\n");
    return 0;
}

int funcB(void) {
    printf("B\n");
    funcA();
    return 0;
}

int funcC(void) {
    printf("C\n");
    funcB();
    return 0;
}

int main()
{
    funcC();
    return 0;
}
