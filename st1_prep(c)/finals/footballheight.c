#include<stdio.h>
int main(){
    int i,n,arr[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }    
    int max = 0;
    for(i=1;i<=n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    printf("%d",max);
    

    
    
}