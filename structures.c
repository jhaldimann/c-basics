#include <stdio.h>
#include <string.h>

struct Car { 
   char brand[50]; 
   char type[50]; 
   long id; 
   double price; 
};

int main(){
    struct Car car;

    strcpy( car.brand, "C Programming");
    strcpy( car.type, "Nuha Ali"); 
    strcpy( car.id, 12); 

    printf("%c",car.brand);
    return 0;
}
