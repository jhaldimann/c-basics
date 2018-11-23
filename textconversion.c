#include <stdio.h> 
  
int main() 
{ 
    FILE *fp; 
  
    char filename[100], c; 
  
    printf("Enter the filename to open \n"); 
    scanf("%s", filename); 

    fp = fopen(filename, "r"); 
  
    c = fgetc(fp); 
    while (c != EOF) { 
        printf ("%c", c); 
        c = fgetc(fp); 
    } 
  
    fclose(fp); 
    return 0; 
}