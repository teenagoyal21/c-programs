#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    /*char cha;
    cha = tolower(ch);
    printf("%c",cha);*/
    if(isupper(ch)){
        printf("%c",tolower(ch));
    }
    else if(islower(ch)){
        printf("%c",toupper(ch));
    }
}