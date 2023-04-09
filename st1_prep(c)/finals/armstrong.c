#include<stdio.h>
#include<math.h>
int main(){
    int n,num,rev,rem;
    rev = 0;
    scanf("%d",&n);
    n = num;
    while(n!=0){
        rem=num%10;
        rev = rev + pow(rem,3);
        num/=10;
    }
    if(n == rev){
        printf("armstrong");
    }
    else{
        printf("not");
    }
}