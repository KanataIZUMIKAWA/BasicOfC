/* scope.c
スコープのお勉強 */
#include<stdio.h>

int counter1(void){
    int count1 = 0;
    count1++;
    return count1;
}

int count2 = 0;
int counter2(void){
    count2++;
    return count2;
}

int main(void){ 
    for (int i = 1; i <= 5; i++){
        printf("%d\n", counter1());
    }
    printf("\n");
    for (int j = 1; j <= 5; j++){
        printf("%d\n", counter2());
    }

    return 0;
}