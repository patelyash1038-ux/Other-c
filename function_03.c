#include<stdio.h>
int ten(int *a);
int ten(int *a){
    printf("The new value is %d\n",*a*10);
}
int main(){
    int i=2;
    int*j=&i;
    printf(" The original value is %d\n",i);
    ten(j);
    return 0;
}