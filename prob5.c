#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char **argv){
    if (argc != 3){
        printf("Error: argc != 3");
        return;
    }
    int arg1 = atoi(argv[1]);
    int arg2 = atoi(argv[2]);
    if (arg1 > arg2){
        printf("Error: arg1>arg2");
        return;
    }
    int i;
    for (i=arg1; i<= arg2; i++){
        int isPrime(int i);
        if (isPrime(i) == 1){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }
}

int isPrime(int n){
    int i;
    if (n <= 1){
        return 0;
    }
    for (i=1; i < n; i++){
        if (i%n ==0){
            return 1;
        }
    }
    return 0;
}
