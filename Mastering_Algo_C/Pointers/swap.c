#include <stdio.h>

void swap(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
    return;
}

int main(){
    int a = 10, b = 20;
    printf("%i, %i\n", a, b);
    swap(&a, &b);
    printf("%i, %i", a, b);
    return 0;
}