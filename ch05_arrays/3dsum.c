#include<stdio.h>
int main(){
    int arr[3][3][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    int sum = 0;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                sum+=arr[i][j][k];
            }
            
        }
        
    }
    printf("%d",sum);
}