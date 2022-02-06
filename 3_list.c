/* list.c */
#include<stdio.h>

int main(void){
    /*
    int lst[] = {1, 2, 3, 4, 5};
    lst[0] = 0;
    */
    char lst[] = {'I', 'N', 'I', 'A', 'D',};
    lst[2] = 'i';
    

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%c%c ", lst[i], lst[j]);
        }
    }
    return 0;
}