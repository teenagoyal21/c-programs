#include<stdio.h>
int main(){
int n,i,count=0,rev=0;
scanf("%d",&n);
while(n!=0){
    i=n%10;
    count++;
    rev=(rev*10)+i;
    n=n/10;
}
printf("%d,%d",count,rev);
}