#include<stdio.h>
int main(){
    /*char var = 'a';
    printf("var: %d\n",var);
    printf("address of var: %p",&var);*/

    float a,*p;
    scanf("%f",&a);
    p=&a;
    printf("%f=%u\n",a,p);
    p++;
    printf("%f=%u",a,p);
}