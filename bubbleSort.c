#include <stdio.h>
#include <string.h>


void bubbleSortString (char *str) {
    int i, j;
    char temp;
    int l = strlen(str);
    /* Loop over all character pairs*/
    for(i = 0;i < l ; i++) {
        for (j = 0; j < l - 1; j++) {
            /* If char at j is smaller than char at i switch them */
            if (str[j] > str[j + 1]) {     
                temp = str[j]; 
                str[j] = str[j+1]; 
                str[j+1] = temp; 
            } 
        }
    }
    /* Print result in console */
    printf("%s\n",str);
}

int main () {
    /* Define variables */
    char myString[100];
    printf( "Enter a value :");
    /* Read input from console */
    scanf("%99s",myString);

    bubbleSortString(myString);
    return 0;
}
