#include <stdio.h>
#include <string.h>

//To compile&link: gcc -o lab_7b lab_7b.c lab_7b_asm.s
// To run:          ./lab_7b

char* removeAllOcuresOfCharFromStringA(char* str, char c);

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
int main(){
char test1 [] = "asdfafdsa";
char test2 [] = "asdfafdsa";
printf("%s\n",replaceAllOcuresOfCharFromString(test1,'a','z'));
printf("%s\n",removeAllOcuresOfCharFromString(test2,'a'));  
printf("%s\n",removeAllOcuresOfCharFromStringA(test1,'a'));  
return 0;
}
