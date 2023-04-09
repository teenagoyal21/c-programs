#include<stdio.h>
int main(){
    int a[5],b[5];
    int i;
    printf("enter the ticket price");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the number of ticket ssold");
    for(i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    int total_rev = 0;
    int m;
    for(m=0;m<5;m++){
        total_rev += a[i]*b[i];
    }
    printf("%d",total_rev);

}