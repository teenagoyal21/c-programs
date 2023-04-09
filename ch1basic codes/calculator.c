#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);

    int x;
    x = pow(a,b);


    printf("the addition of a and b is: %d\n",a+b);
    printf("the subtraction of a and b is: %d\n",a-b);
    printf("the multiplication of a and b is: %d\n",a*b);
    printf("the division of a and b is: %d\n",a/b);
    printf("the remainder of a and b is: %d\n",a%b);
    printf("the power of a on b is: %d",x);
}