#include<stdio.h>
int main(){
    int ndays,y,m,d;
    printf("enter number of days: ");
    scanf("%d",&ndays);
    y = ndays/365;
    m = ndays/30;
    d = ndays-(m*30);
    printf("days to years is %d\n",y);
    printf("days to months is %d\n",m);
    printf("days are %d\n",d);
}