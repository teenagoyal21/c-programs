#include<stdio.h>
int palindrome(int n){
    int num,rem,rev;
    num = n;
    rev = 0;
    while(n!=0){
        rem = n%10;
        rev = rev*10 + rem;
        n/=10;
    }
    if(num==rev){
        return 1;
    }
}

int main(){
    int lower,upper;
    scanf("%d%d",&lower,&upper);
    for(int i=lower;i<=upper;i++){
        if(palindrome(i)==1){
            printf("%d ",i);
        }
    }
}