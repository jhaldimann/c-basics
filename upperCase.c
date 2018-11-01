#include <stdio.h>
#include <ctype.h>

int main() {
    int c;
    FILE *file;
    file = fopen("abc.txt", "r");
    if (file) {
        while ((c = getc(file)) != EOF){
            putchar(toupper(c));
        }
        fclose(file);
    } else {
        printf("File not found");
    }
}