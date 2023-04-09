#include<stdio.h>
int main(){
    int i,x,n;
    int a[20];
    printf("enter size of array: ");
    scanf("%d",&n);

    printf("enter elements of array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    

    printf("\nelement to search: ");
    scanf("%d",&x);

    for(i=0;i<n;i++){
        if(a[i]==x)
        break;
    }

    if(i<n){
        printf("element found at %d",i);}
    else{
    printf("element not found");}
}