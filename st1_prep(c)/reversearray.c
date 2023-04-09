#include<stdio.h>
int main(){
    int size,i;
    printf("enter size of array:");
    scanf("%d",&size);
    printf("array elements");
    int arr[size];
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("entered array is: \n");
    for(i=0;i<size;i++)
    printf("%d",arr[i]);
    int start = 0, end = size-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printf("reversed array is: \n");
    for(i=0;i<size;i++)
    printf("%d ",arr[i]);

}