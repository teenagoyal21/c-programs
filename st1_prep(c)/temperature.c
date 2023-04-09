#include<stdio.h>
int main(){
    int temp;
    scanf("%d",&temp);
    if(temp<=0){
        printf("its freezing");
    }
    else if(temp>0 && temp<=10){
        printf("vry cold");
    }
    else if(temp>10 && temp<=20){
        printf("cold");
    }
    else if(temp>20 && temp <30){
        printf("normal");
    }
    else{
        printf("bkwass");
    }
}