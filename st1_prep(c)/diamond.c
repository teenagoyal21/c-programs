#include<stdio.h>
//
int main(){
    int n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        int j = 1;
        for(int s=1;s<=n-i;s++){
            printf(" ");
        }
        for (j;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }

    for(int i =2;i<=n;i++){
        int j = n;
        for(int s =0;s<=i-1;s++){
            printf(" ");
        }
        for (j;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
}