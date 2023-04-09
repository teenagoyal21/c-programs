#include<stdio.h>
int main(){
    int i,n,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = 0;
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int min = 99999;
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("%d %d",max,min);
}