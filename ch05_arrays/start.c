#include<stdio.h>
int main(){
    int x[4],i;
    for(i=0;i<4;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<4;i++){
        printf("x[%d] = %d\n",x[i],i);
    }
}