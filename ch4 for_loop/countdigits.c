#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        n = n/10;
        count++;
    }
    printf("%d",count);

}