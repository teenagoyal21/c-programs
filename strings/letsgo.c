#include<stdio.h>
int p(char s[100]){
    int st=0;
    int e=4-1;
    while(st<=e){
        if(s[st]!=s[e]){
            return 0;
        }
        st++;
        e--;
    }
    return 1;
}

int main(){
    char ch[100];
    gets(ch);
    int r=p(ch);
    if(r){
        printf("Yes");
    }
    else{
        printf("no");
    }
}