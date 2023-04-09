#include<stdio.h>
int main(){
    int arr[10];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }  
    }
    int max1=0;
    for(int i=0;i<n;i++){
        if(arr[i]<max && arr[i]>max1){
            max1 = arr[i];
        }
    }
    int min=99999;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int min1=99999;
    for(int i=0;i<n;i++){
        if(arr[i]>min && arr[i]<min1){
            min1 = arr[i];
        }
    }
    printf("%d %d",max1,min1);
    
}