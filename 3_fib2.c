/* fib.c */
#include<stdio.h>

int fib(int n){
    int f[n+1];
        if(n == 0){
        return 0;
    }
    f[1] = 1;
    for(int i = 2; i <= n; i++){
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}

int main(void){
    printf("これはフィボナッチ数列です☞");
    for(int N=0; N<20; N++){
        printf("%d ", fib(N));
    };
    printf("\n");
    return 0;
}