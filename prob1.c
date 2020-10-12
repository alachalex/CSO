#include <stdio.h>

void main(int argc, char* argv[]){
    int vowels(char* str);
}

int vowels(char* str){
    char* vows[10] = {"a","e","i","o","u","A","E","I","O","U"};
    int i, n, j;
    //use asii values 
    for (i=0; str != "\0"; i++){
        for (j=0; j <= 10; j++){
            if (str == vows[j]){
                n++;
                str[i] = '@';
            }
        }
    }
    return n;
}