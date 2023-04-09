#include<stdio.h>
#include<math.h>
int main(){
    int n,num,sum=0,rem;
    scanf("%d",&n);
    num=n;
    int k = n;
    int count=0;
    while(k>0){
        k=k%10;
        count++;
    }
    
    while(num>0){
        rem = num%10;
        int x = pow(rem,count);
        sum = sum +x;
        num/=10;
    }
    if(n==sum){
        printf("yes");
    }
    else{
        printf("not");
    }
}