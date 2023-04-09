#include<stdio.h>
int main(){
    int n,y,m,d;
    scanf("%d",&n);
    y = (n/365);
    m = (n-(365*y))/30;
    d = (n-(y*365)-(m*30));
    printf("%d %d %d",y,m,d);
}