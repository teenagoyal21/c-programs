#include<stdio.h>
int main(){
    int n,i,f;
    f = i =1;
    scanf("%d",&n);
    while(i<=n){
        f*=i;
        i++;
    }
    printf("%d",f);
}