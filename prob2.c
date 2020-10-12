#include <stdio.h>

void main(int argc, char* argv[]){
    int longer(char *s, char *t);
}

int longer(char *s, char *t){
    int cs, ct;
    while(*s++ != '\0'){
        cs ++;
    }
    while(*t++ != '\0'){
        ct ++;
    }
    if (cs > ct){
        printf("%s", s);
    }
    else if (ct > cs){
        printf("%s", t);
    }
    else{
        printf("Equal");
    }
    return (ct + cs);
}