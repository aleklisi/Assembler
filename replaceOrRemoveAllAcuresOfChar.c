#include <stdio.h>
#include <string.h>

char* removeAllOcuresOfCharFromString(char* str, char c) {
    char* s;
    char* d;
    for (s=d=str;*d=*s;d+=(*s++!=c));
    return str;
}
char* replaceAllOcuresOfCharFromString(char* str, char oldc, char newc) {
    char* s = str;
    while (*s != '0'){
        if (*s == oldc){
            *s = newc;
        }
        //printf("%s\n",str);
        s++;
    }
    return str;
}
