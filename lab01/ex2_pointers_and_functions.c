#include <stdio.h>

void add_one(int input){
    input += 1;
}

void add_one_pointer (int* input){
    *input +=1;
}

int main(){
    int x = 5;
    add_one(x);
    printf("add_one: %d\n", x);
    add_one_pointer(&x);
    printf("add_one_pointer: %d\n",x);
    return 0;
}

