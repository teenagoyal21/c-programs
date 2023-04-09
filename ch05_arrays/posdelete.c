#include<stdio.h>
int main(){
    int n;
    int arr[30],i,pos;
    printf("enter the number of elemnts");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the position to deleted: ");
    scanf("%d",&pos);
    while(pos<n){
        arr[pos-1]= arr[pos];
        pos++;
    }
    n--;
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}