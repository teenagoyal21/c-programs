#include<stdio.h>
void evensum(int arr[],int n);
void oddsum(int arr[],int m);

int main(){
    int n;
    scanf("%d",&n);
    int i,arr[100];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    if(m==1){
        evensum(arr,n);
    }
    else if(m==2){
        oddsum(arr,n);
    }

}

void evensum(int arr[],int n){
     int sum = 0;
    for(int i=0;i<=n;i=i+2){
        sum += arr[i];
    }

    printf(" %d",sum);
}
void oddsum(int arr[],int m){
    int sum = 0;
    for(int j=1;j<=m;j=j+2){
        sum+=arr[j];
    }
    printf("%d",sum);
}