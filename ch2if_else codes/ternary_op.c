#include<stdio.h>
int main(){
    int age;
    printf("enter age: ");
    scanf("%d",&age);

    //ternary operator usage -- condition? doSomething if TRUE : soSomething if FALSE

    age>=18 ? printf("adult\n") : printf("not adult\n");
}