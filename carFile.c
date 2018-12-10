#include <stdio.h>

struct Car { 
   char brand[50]; 
   char type[50]; 
   long id; 
   double price; 
};

int writeInFile(int i, struct Car *car) {
    FILE *fp;
    char* input = "string";
    int words = 2;

    fp=fopen("car.txt", "w");
    if(fp == NULL) {    
        return 1;
    }
    for(int j = 0; j < i; j++) {
        fprintf(fp,"\nBrand: %s Type: %s ID: %ld Price: %lf",car[j].brand, car[j].type, car[j].id, car[j].price);
    }
    fclose(fp);

    return 0;
}

int main(){
    struct Car car[10];
    int res;
    int i = 0;
    do{
        res = scanf("%s %s %ld %lf", car[i].brand,car[i].type,&car[i].id,&car[i].price);
        i++;
    }while(res != EOF);
    i--;

    writeInFile(i, car);
    
    return 0;
}
