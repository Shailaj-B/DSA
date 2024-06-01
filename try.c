#include <stdio.h>


void check();
void check2();
int main(){
    check();
    


    return 0;
}

void check(){
    check2();
}
void check2(){
    printf("hello");
}
