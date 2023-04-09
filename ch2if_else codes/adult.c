#include<stdio.h>
int main(){
    int age;
    printf("enter age: ");
    scanf("%d",&age);

    if(age>18){
        printf("you are an adult...\n");
    }
    else{
        printf("you r not an adult now..bt in %d year you'll be adult\n",18-age);
    }
    printf("thank you :)");
}