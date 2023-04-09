#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if(year%400==0){
        printf("leap");
    }
    else if(year%100==0){
        printf("not ");
    }
    else if(year%4==0){
        printf("leap ");
    }
    else{
        printf("not a leap year");
    }
}
