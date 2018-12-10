#include <stdlib.h> 
#include <stdio.h> 
#include <string.h> 

static int myCompare (const void * a, const void * b) { 
    return strcmp (*(const char **) a, *(const char **) b); 
} 
  
void sort(const char *arr[], int n) { 
    qsort (arr, n, sizeof (const char *), myCompare); 
} 
  
int main () 
{ 
    const char *arr[] = {"Gruetzi", "Hallo", "Hello","Bonjour"}; 
    int size = sizeof(arr)/sizeof(arr[0]);  
    for (int i = 0; i < size; i++) {
        printf("%s \n",arr[i]); 
    }

    sort(arr, size); 

    printf("------------------- \n");
    for (int i = 0; i < size; i++){
        printf("%s \n",arr[i]); 
    } 
    return 0; 
} 