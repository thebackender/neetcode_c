#include <stdio.h>

int def(int *a){
    a[1] = 2;
    return 12;
}

int main(){
    int a[10];
    printf("%i\n", a[1]);
    def(&a);
    printf("%i\n", a[1]);
    return 0;  
}