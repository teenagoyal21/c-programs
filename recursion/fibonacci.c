#include<stdio.h>
void fib(int n);

int main(){
    int n;
    scanf("%d",&n);
    printf("%d %d",0,1);
    fib(n-2);
    return 0;
}

void fib(int n){
    static int a=0,b=1,c;
    if(n>0){
        c=a+b;
        a=b;
        b=c;
        printf(" %d",c);
        fib(n-1);
    }
}