#include<stdio.h>
int main(){
    int x[4],i,max;
    for(i=0;i<4;i++){
        scanf("%d",&x[i]);
    }
    max = 0;
    for(i=0;i<4;i++){
        if(x[i]>max){
            max = x[i];
        }}
        printf("it is %d",max);
    
}