#include <stdio.h>

void main(int argc, char* argv[]){
    void interleave(char *ans, char *s, char *t, int n);
}

void interleave(char *ans, char *s, char *t, int n){
    int i, a;
    i = 0;
    a = 0;
    while(*s++ != '\0'){
        if (a>n){
            ans = "";
            printf("Error");
        }
        ans[a] = s[i];
        ans[a + 1] = t[i];
        i++;
        a+= 2;
    }
}
