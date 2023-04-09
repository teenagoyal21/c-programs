#include<stdio.h>
int main(){
    char a;
    printf("enter a: ");
    scanf("%c",&a);
    if(a>='A' && a<='Z'){
        printf("its a upper case character");
    }
    else if(a>='a' && a<='z'){
        printf("its a lower case character");
    }
    else{
        printf("its not a alphabet..");
    }
}