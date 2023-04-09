#include<stdio.h>
int main(){
    int pu,cu,u,i,amt=0;
    for(i=0;i<5;i++){
        scanf("%d%d",&pu,&cu);
        u = cu-pu;
        if(u<=200){
            amt = amt + 0;
        }
        else if(u<=300){
            amt = amt + u*3;
        }
        else if(u<=500){
            int t = u-300;
            amt = amt + 300*3+t*5;
        }
        else {
            int t = u-500;
            amt = amt + 300*3 + 200*5 + t*7;
        }
    }
    printf("%d",amt);
}