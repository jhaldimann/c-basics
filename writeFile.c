#include <stdio.h>

int main() {
    FILE *fp;
    char* input = "string";
    int words = 2;

    fp=fopen("test.txt", "w");
    if(fp == NULL) {
        return 1;
    }
    fprintf(fp, "Hello World\n");
    fprintf(fp, "Words %d characters %s\n", words, input);
    fclose(fp);
    return 0;
}