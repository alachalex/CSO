#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> 

int main(int argc, char *argv[]){
    char *str = argv[0];
    char *except = argv[1];
    if (islower(str)){
        while (*str != '\0'){
            bool appears = false;
            while( *except != '\0'){
                if (*str == *except){
                    appears = true;
                }
            }
            if (appears){
                putchar(*str);
            }
        }
    }
    else{
        printf("Error");
        exit(1);
    }
}
