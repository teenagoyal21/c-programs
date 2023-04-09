#include<stdio.h>
int main(){
    int arr[10][10];
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0;i<m;i++){
        printf("\n");
        for(int j = 0;j<n;j++){
            printf("%d ",arr[j][i]);
        }
    }
}