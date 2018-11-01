#include <stdio.h>
#define TYPE signed char
int main(){
    int ret = getchar();
    TYPE c = (TYPE) ret;
    fprintf (stdout,"%d\n",(EOF == c));
    return 0;
}