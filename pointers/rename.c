#include<stdio.h>
int main(){
    float b;
    float *p;
    printf("enter the value of b\n");
    scanf("%f",&b);
    p=&b;
    printf("the address of %f is %p\n",b,p);
    printf("the value at address %p is %.2f",p,*p);
}