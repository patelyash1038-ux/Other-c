#include<stdio.h>

int main(){
    int i=72;
    int* j=&i; // j is pointing towards i
    printf("The address of i is %p\n ", j);
    printf("The value at address j is %d",*j);
    return 0;
}