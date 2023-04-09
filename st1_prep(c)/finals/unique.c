#include<stdio.h>
int main(){
    int arr[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }int a=0;
    int count;
    for(int i=0;i<n;i++){
        a = a^arr[i];
        count = a;
    }
    printf("%d",count);
}