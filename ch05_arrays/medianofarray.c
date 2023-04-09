#include<stdio.h>
int main(){
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("enetr elements of array: ");
    int i,ar[n];
    for(i=0;i<n;i++){
        scanf("%d",ar[i]);
    }
    int median=0;
    if(n%2!=0){
        median = ar[n/2];
    }
    else{
        median = (ar[n/2]+ar[n/2-1])/2;
    }
    printf("%d",median);
}