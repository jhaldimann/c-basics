#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool checkIfUpperCase(char character) {
    return (character >= 'A' && character <= 'Z');
}

int main() {
  int scoreA = 0;
  int scoreB = 0;
  int scoreC = 0;
  int scoreD = 0;
  int scoreE = 0;
  char myString[40];

  printf("Enter results :");
  scanf("%s",myString);

  for(int i = 0; i < strlen(myString); i++) {      
    char myCharacter = tolower(myString[i]);
    bool isUpper = checkIfUpperCase(myString[i]);
    printf("%c %d\n",myCharacter,isUpper);
    if(myCharacter == 'a') {
      if(isUpper == 1) {
        scoreA--;
      }
      scoreA++;
      printf("%d",scoreA);
    } else if(myCharacter == 'b') {
      if(isUpper == 1) {
        scoreB--;
      }
      scoreB++;
      printf("%d",scoreB);
    } else if(myCharacter == 'c') {
      if(isUpper == 1) {
        scoreC--;
      }
      scoreC++;
      printf("%d",scoreC);
    } else if(myCharacter == 'd') {
      if(isUpper == 1) {
        scoreD--;
      }
      scoreD++;
      printf("%d",scoreD);
    } else if(myCharacter == 'e') {
      if(isUpper == 1) {
        scoreE--;
      }
      scoreE++;
      printf("%d",scoreE);
    }
  }

  printf("a = %d, b = %d, c = %d, d = %d, e = %d",scoreA,scoreB,scoreC,scoreD, scoreE);
  return 0;
}