#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int i;
    int gcd = 1;
    if(n>m){
        for(i=1;i<=m;i++){
            if(m%i==0 && n%i==0){
                gcd = i;
            }
        }
    }
    else{
        for(i=1;i<=n;i++){
            if(m%i==0 && n%i==0){
                gcd=i;
            }
        }
    }
    printf("%d",gcd);
}