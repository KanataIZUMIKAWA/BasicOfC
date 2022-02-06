/* fpoi.c 
初めての関数ポインタ */
#include<stdio.h>

int add(int x, int y){
    return x + y;
}

int mult(int x, int y){
    return x * y;
}

char hello(){
    char sentence[] = "Hello function pointer!";      /* charは1文字しか扱えないのでリストにする */
    return sentence;
}

char nullpo(){
    char sentence[] = "ガッ！！";
    return sentence;
}

int main(void){
    int x;
    int (*p)(int, int);   // 関数ポインタを宣言

    p = add;
    x = p(2, 3);
    printf("2 + 3 = %d\n", x);

    p = mult;
    x = p(2, 3);
    printf("2 * 3 = %d\n", x);

    char y;
    char (*chat)();

    chat = hello;
    y = chat();

    printf("『 %s 』\n", y);

    chat = nullpo;
    y = chat();

    printf("『 %s 』\n", y);

    return 0;
}