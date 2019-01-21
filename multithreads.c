#include <stdio.h>
#include <pthread.h>

int res;

// calculate 
long factorial(int input) {
    long r = 1;
    for(long i = 1; i <= input; i++){
        r *= i;
    }
    return r;
}

void *calculate(void *res_void_ptr){
    int *res_ptr = (int *)res_void_ptr;
    res = factorial(*res_ptr);
    return NULL;
}

int main(){
    puts("Enter number:");
    scanf("%d", &res);
    pthread_t factorial_res_thread;

    if(pthread_create(&factorial_res_thread, NULL, calculate, &res)){
        fprintf(stderr, "Error creating thread\n");
        return 1;
    }
    if(pthread_join(factorial_res_thread, NULL)){
        fprintf(stderr, "Error joining thread\n");
        return 2;
    }
    printf("Factorial is: %d\n", res);
    return 0;
}