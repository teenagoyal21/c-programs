#include<stdio.h>
int main(){
    int pass;
    char name[20];
    printf("enter your name:\n ");
    scanf("%s",&name);
    printf("enter your password: \n");
    scanf("%d",&pass);

    if(pass==1234){
        printf("welcome to chitkara..Ms.%s",name);
    }
    else{
        printf("incorrect password,try another"); 
    }
}