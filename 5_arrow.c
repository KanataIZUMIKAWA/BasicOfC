#include <stdio.h>
 
// 構造体
typedef struct {
    char *name;
    char sex;
    int age;
    char *add;
    char *job;
} person2;
 
int main(void) {
    person2 sato, *p1;
    p1 = &sato; // 実体のアドレス
    p1->age = 20; // ポインタを使ってメンバの初期化
    printf("%d\n", sato.age);
 
    person2 kato, *p2;
    p2 = &kato; // 実体のアドレス
    *p2 = *p1; // アドレス先の値を共有
    printf("%d\n", kato.age);
 
    return 0;
}