#include<stdio.h>
int main(){
    //to check whether a character is alphabet,digit or special character

    char ch;
    printf("enter any character: ");
    scanf("%c",&ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("its a alphabet");
    }
    else if(ch>='0'&& ch<='9'){
        printf("its a number");
    }
    else{
        printf("its a special character");
    }
}