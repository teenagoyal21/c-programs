#include<stdio.h>
int gcd(int a,int b);

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",gcd(a,b));
}

int gcd(int a,int b){
    int i,gcd=1;
    if(a>b){
        for(i=1;i<=b;i++){
            if(a%i==0 && b%i==0)
            gcd = i;
        }
    }
    else{
        for(i=1;i<=a;i++){
            if(a%i==0 && b%i==0)
            gcd = i;
        }
    }
    return(gcd);
}