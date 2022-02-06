/* kokai.c
初めての高階関数*/
#include<stdio.h>

void enumerate(int* arr, int n, void (*func)(int)){
    for (int i = 0; i < n; i++){
        func(arr[i]);
    }
}

void print(int m){
    printf("%d\n", m);
}

static int sum = 0;
void sigma(int m){
    sum += m;
}

int main(void){
    int array[] = {1, 2, 3, 4, 5};

    enumerate(array, 5, print);

    enumerate(array, 5, sigma);
    printf("sum = %d\n", sum);

    return 0;
}