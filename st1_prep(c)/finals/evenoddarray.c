#include<stdio.h>
int checkeven(int e);
int checkodd(int o);
int main(){
    int i,n,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++){
        checkeven(arr[i]);
        }
        printf("\n");
        for(i=0;i<n;i++){
        checkodd(arr[i]);
    }
}

int checkeven(int e){
    if(e%2==0){
        printf("%d ",e);
    }
}
int checkodd(int o){
    if(o%2!=0){
        printf("%d ",o);
    }
}