#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("\nenter the size of 1st array: ");
    scanf("%d",&s1);
    printf("\nenter the size of 2nd array: ");
    scanf("%d",&s2);

    s3 = s1+s2;

    printf("\nenter elements of 1st array: ");
    int arr1[s1],arr2[s2],arr3[s3];
    for(int i = 0;i<s1;i++){
        scanf("%d",&arr1[i]);
        arr3[i]=arr1[i];
    }
    int k = s1;
    printf("\nenter the elemnets of 2nd array: " );
    for(int i=0;i<s2;i++){
        scanf("%d",&arr2[i]);
        arr3[k] = arr2[i];
        k++;
    }
    printf("\nthe merged array is: ");
    for(int i=0;i<s3;i++)
        printf("%d ",arr3[i]);
}