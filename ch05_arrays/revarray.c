#include<stdio.h>
int main(){
    int n;
    printf("enter the no. of elements u need: ");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the reversed array is: ");
    for(i=n-1;i>=0;i--){
        
        printf("%d\n",arr[i]);
    }

}