#include<stdio.h>
int main(){
    int i,sum,n;
    scanf("%d",&n);
    i=1;
    sum=0;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("the sum is %d",sum);
}