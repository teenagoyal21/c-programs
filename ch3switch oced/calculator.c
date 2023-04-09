#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("enter a and b: ");
    scanf("%d%d",&a,&b);
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    printf("press 5 for remainder\n");
    printf("press 6 for exponential\n");
    
    int c;
    printf("enter your choice of operation: ");
    scanf("%d",&c);

    int x;
    x = pow(a,b);
//if switch is removed, all the cases will run collectively
    switch(c){
        case 1:
        printf("the addition of a and b is :%d\n", a+b);
        break;
        case 2:
        printf("the subtraction of a and b is: %d\n",a-b);
        break;
        case 3:
        printf("the multiplication of a and b is: %d\n",a*b);
        break;
        case 4:
        printf("the division of a and b is: %d\n",a/b);
        break;
        case 5:
        printf("the remainder of a and b is: %d\n",a+b);
        break;
        case 6:
        printf("the exponential of a on b is: %d\n",x);
        break;
        default:
        printf("invalid operation picked...");
        break;
    }
}