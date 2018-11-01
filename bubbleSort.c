#include <stdio.h>
#include <string.h>


void bubbleSortString (char *str) {
    int i, j;
    char temp;
    /* Loop over all character pairs*/
    for(i = 0;i < str[i] ; i++) {
        for (j = i+1; j < str[j]; j++) {
            /* If char at j is smaller than char at i switch them */
            if (str[j] < str[i]) {     
                temp = str[j]; 
                str[j] = str[i]; 
                str[i] = temp; 
            } 
        }
    }
    /* Print result in console */
    printf("%s\n",str);
}

int main () {
    /* Define variables */
    char *myString;
    printf( "Enter a value :");
    /* Read input from console */
    scanf("%s",myString);

    bubbleSortString(myString);
    return 0;
}
