#include <stdio.h>


void check();
void check2();
int main(){
    


    int *a;
    int b = 2;
    a = &b;
    printf("%p\n",a);
    printf("\n\n%p\n\n",&b);
    printf("%p\n",&a);
    printf("%d\n",*a);


    return 0;
}

void check(){
    check2();
}
void check2(){
    printf("hello");
}
