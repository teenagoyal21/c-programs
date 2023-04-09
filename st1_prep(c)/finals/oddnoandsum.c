#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    
    int sum = 0;
    for(i=1;i<=n;i++){
        printf("%d ",2*i-1);
        sum+=2*i-1;
    }
    printf("\nthe sum is %d",sum);
}