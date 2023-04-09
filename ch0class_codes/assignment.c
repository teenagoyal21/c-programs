#include<stdio.h>
int main(){
    int a;
    printf("enter any number: ");
    scanf("%d",&a);
    a+=5;
    printf("a after addition is: %d\n",a);
    a-=5;
    printf("a after subtraction  is: %d\n",a);
    a*=5;
    printf("a after multiplication is: %d\n",a);
    a/=5;
    printf("a after division is: %d\n",a);
    a%=5;
    printf("a after modulo is: %d\n",a);

}