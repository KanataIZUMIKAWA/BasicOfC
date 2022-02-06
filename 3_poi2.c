/* poi.2 */
#include<stdio.h>

void func(int *l){
    printf("%d\n", *l);
    l[0] = l[1] = l[2] = -1;
}

int main(void){
    int lst[] = {1, 2, 3};
    func(lst);
    printf("(%d, %d, %d)\n", lst[0], lst[1], lst[2]);
    return 0;
}