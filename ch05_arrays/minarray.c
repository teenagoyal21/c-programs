#include<stdio.h>
int main(){
    int x[4],i,min;
    for(i=0;i<4;i++){
        scanf("%d",&x[i]);
    }
    min = 99999;
    for(i=0;i<4;i++){
        if(x[i]<min){
            min = x[i];
        }}
        printf("it is %d",min);
    
}