#include <stdio.h>
#include <stdbool.h>
int main(){
    int counter = 0;
    unsigned int n;
    if (1 != scanf("%d", &n)) {
        return 1;
    }
    for (unsigned int i=2; counter < n;i++){
        bool i_is_prime = true;
        for(unsigned int j = 2; j < i; j++) {
            if(i % j == 0){
                i_is_prime = false;
                break;
            }
        }
        if (i_is_prime) {
            printf("%i\n", i);
            counter++;
        }
    }
    return 0;
}