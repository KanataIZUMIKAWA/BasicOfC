/*strnlen.c*/
#include<stdio.h>
#include<string.h>

int main(void){
    char buf[20];
    printf("len: %ld\n", sizeof(buf));

    // バッファサイズを超えない範囲で文字列データを複製
    strncpy(buf, "Cats are very cute because they are very cute ,so they are very cute", sizeof(buf));

    printf("len: %ld\n", sizeof(buf));
    printf("len: %s\n\n", buf);

    // バッファ内に文字列が収まっているかどうかを検査
    if(buf[sizeof(buf) - 1] == '\0'){
        printf("%s\n", buf);
    } else {
        buf[sizeof(buf) - 1] = '\0';
        printf("cut!\n%s\n", buf);
    }
    return 0;
}