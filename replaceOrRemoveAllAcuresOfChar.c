//ASSembler to function removeAllOcuresOfCharFromStringA
	.text
	.type removeAllOcuresOfCharFromStringA, @function
	.global removeAllOcuresOfCharFromStringA
removeAllOcuresOfCharFromStringA:	
        pushq   %rbp
        movq    %rsp, %rbp
        movq    %rdi, -24(%rbp)
        movl    %esi, %eax
        movb    %al, -28(%rbp)
        movq    -24(%rbp), %rax
        movq    %rax, -16(%rbp)
        movq    -16(%rbp), %rax
        movq    %rax, -8(%rbp)
.L3:
        movq    -8(%rbp), %rax
        movzbl  (%rax), %edx
        movq    -16(%rbp), %rax
        movb    %dl, (%rax)
        movq    -16(%rbp), %rax
        movzbl  (%rax), %eax
        testb   %al, %al
        setne   %al
        testb   %al, %al
        je      .L2
        movq    -8(%rbp), %rax
        leaq    1(%rax), %rdx
        movq    %rdx, -8(%rbp)
        movzbl  (%rax), %eax
        cmpb    %al, -28(%rbp)
        setne   %al
        movzbl  %al, %eax
        addq    %rax, -16(%rbp)
        jmp     .L3
.L2:
        movq    -24(%rbp), %rax
        popq    %rbp
        ret
        

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
