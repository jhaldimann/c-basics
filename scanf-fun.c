#include <stdio.h>

/*
* Problem here is that you cannot insert a second input
* You will see just some random characters in the console
*
* Solution use a s for string in the scanf function
*

*/
int main() {
    char x[30];
    char y[30];
    scanf ("%29[^\n]", x);
    scanf ("%29[^\n]", y);
    fprintf (stdout,"%s - %s\n",x,y);
    return 0;
}