/* null.c */
#include<stdio.h>

int main(void){
    int n = 0;
    char Str = "ぬるぬるぬる";
    if (n)
        printf("ぬ\n");
    if (NULL)
        printf("ぬる\n");
    if (!NULL)
        printf("ぬるぬる\n");
    if (Str)
        printf("ぬるぬるぬる\n");
    return 0;
}