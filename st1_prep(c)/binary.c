#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rev=0;
    while(n>0){
        int a = n&1;
        rev = a+ rev*10 ;
        n=n>>1;
    }
    
    rev=rev*10;
    printf("%d ",rev);
}