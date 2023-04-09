#include<stdio.h>
int main(){
    int n,fd,ld,sum;
    scanf("%d",&n);
    fd=n;
    ld=n%10;
    while(fd>=10){
        fd=fd/10;
    }
    sum=fd+ld;
    printf("%d",sum);
}