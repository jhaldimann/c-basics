#include <stdio.h>
int main() {
    char x[30];
    char y[30];
    
    printf("Enter two values:\n");
    scanf("%s\n", x);
    scanf("%s", y);
    printf("%s - %s\n",x,y);
    return 0;
}