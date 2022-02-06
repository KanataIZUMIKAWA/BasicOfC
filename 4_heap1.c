/*heap1.c*/
#include<stdio.h>
#include<string.h> 
#include <stdlib.h>     // 文字列の型変換、ヒープ

int main(void){
    char* s = (char*) malloc(6);        // ヒープ上にポインタsを6バイト分定義
    // char* c = (char*) calloc(size_t cnt, size_t n);        // ヒープ上にポインタcをcnt × nバイト分定義
    strcpy(s, "INIAD");     // ポインタsに文字列INIADをコピー
    printf("%s\n", s);          

    char*t = strdup("iniad");       // 因数内の文字列を複製する
    printf("%s\n", t);  

    void free(void* s);     // メモリを開放する
    void free(void* t);
    return 0;
}