#include<stdio.h>
int main(){
    int n,rev=0,num,rem;
    
    scanf("%d",&n);
    num=n;
    while(num!=0){
        rem = num%10;
        rev = rev*10 + rem;
        num/=10;
        
    }
    if(n==rev){
        printf("palindrome");
    }
    else{
        printf("not");
    }
}