#include<stdio.h>
int main(){
    int n,h,m;
    scanf("%d",&n);
    h = (n/3600);
    m = (n-(3600*h))/60;
    n = (n-(h*3600)-(m*60));
    printf("%dh %dm %ds",h,m,n);
}
