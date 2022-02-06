/* switch.c
初めてのswitch構文 */
#include<stdio.h>

int main(void){
    int x;
    while (1){
        printf("値："); scanf("%d", &x);
        switch (x){
        case 0:
            printf("False\n");
            break;

        case 404:
            printf("NOT FOUND!!\n");
            /* FALLTHRU */

        default:
            printf("True\n");
            break;
        }            
    }
    
    return 0;
}