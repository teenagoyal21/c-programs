#include<stdio.h>
int fib(int n){
    int fibi[100];
    fibi[0] = 0;
    fibi[1] = 1;
    for(int i=2;i<n;i++){
        fibi[i] = fibi[i-1] + fibi[i-2];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=fibi[i];
    }
    printf("%d",sum);
}

int main(){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("%d",0);
    }
    else{
        fib(n);
    }
}