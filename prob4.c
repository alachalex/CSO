#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]){
    int c = getchar();
    for (;;){
        if(islower(c)){
            putchar('L');
        }
        else if (isupper(c)){
            int lower = tolower(c);
            putchar(lower);
        }
        else if (isdigit(c)){
            putchar('D');
            putchar ('I');
            putchar ('G');
            putchar ('I');
            putchar ('T');
        }else{
            putchar('E');
            putchar('R');
            putchar('R');
            putchar('O');
            putchar('R');
            break;
        }
    }
}