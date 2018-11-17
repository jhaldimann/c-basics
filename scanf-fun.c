#include <stdio.h>
int main() {
    char x[30];
    char y[30];
    scanf ("%[^\n]", x);
    scanf ("%[^\n]", y);
    fprintf (stdout,"%s - %s\n",x,y);
    return 0;
}