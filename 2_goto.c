#include<stdio.h>

int main(void){
    int x = 100;
    int mult = 0;
    for (int y = 0; y < 100; y++){
        mult = x * y;
        if (mult > 1000){
            printf("x = %d, y = %d\n", x, y);
            goto quit;
        }
        x--;
    }

    quit:
    return 0;
    }