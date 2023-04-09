#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int dig = 0;
    int k = n;
    while(k>0){
        k = k/10;
        dig++;
    }
    int i;
    int sum = 0;
        if(dig%2==0){
            i = 1;
        }
        else{
            i = 0;
        }
    while(n>0){
        if(i%2==0){
            sum=sum+n%10;
        }
        else{
            sum = sum-n%10;
        }
        n=n/10;
        i++;
    }
    printf("%d",sum);
}