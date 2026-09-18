#include<stdio.h>

int sum(int *a,int *b);
int sum(int *a,int *b){
    *a = 6;
    return *a + *b;
}
int main(){
    int x=2,y=8;
    printf("The sum is %d\n",sum(&x,&y));
    return 0;
}