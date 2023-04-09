#include<stdio.h>
#include<math.h>
int main(){
    int num,original_num,remainder,result=0,count=0;
    printf("enter a three digit number");
    scanf("%d",&num);
    original_num=num;
    
    while(original_num!=0){
        remainder=original_num%10;
        result+=pow(remainder,count);
        original_num/=10;

    }
    if(result==num){
        printf("armstrong number");
    }
    else{
        printf("not");
    }
}