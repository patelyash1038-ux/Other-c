#include<stdio.h>
int fun(int *a);
int fun(int *a){
     printf("The address of i using function is %d\n", a);
    }
int main(){
    int i=6;
    int* j=&i;
    printf("The address of i is %d\n", j);
    fun(j);
    return 0;
}