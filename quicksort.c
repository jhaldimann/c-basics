#include <stdio.h>
#include <string.h>

static void printArray(int *myArray, int arrayLength) {
  // loop over the elements in array
  for(int i=0; i < arrayLength; i++) {
    // print element at position i
    printf("%d ", myArray[i]);
  }
  // print newline at the end
  printf("\n");
}
// small swap method for 2 params
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int createPartition(int *myArray, int left, int right) {
    // define pivot element --> here first element
    int pivot = left;
    // save pivot value in variable
    int pivotValue = myArray[pivot];
    while (left < right) {
        while (myArray[left] <= pivotValue) {
          left++;
        }   
        while (myArray[right] > pivotValue) {
          right--;
        }
        // check if we should swap the values
        if (left < right) {
          // swap two values 
          swap(&myArray[left], &myArray[right]);
        }  
    }
    // swap pivot value with end element in array
    swap(&myArray[pivot], &myArray[right]);
    return right;
}

void quicksort(int *target, int left, int right) {
    if (left >= right){
      return;
    }
    
    int split = createPartition(target, left, right);
    // call the function again two times until the array is sorted 
    quicksort(target, left, split - 1);
    quicksort(target, split + 1, right);
}

int main () {
  int myArray[] = { 2, 6, 3, 8, 5, 4, 1, 9, 7 };
  int arrayLength = sizeof(myArray)/sizeof(myArray[0]);
  // print values before sort
  printArray(myArray, arrayLength);
  // sort that stuff
  quicksort(myArray, 0, arrayLength-1);
  //  print the values again but now they are sorted
  printArray(myArray, arrayLength);
}
