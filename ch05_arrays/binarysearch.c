#include<stdio.h>
int main(){
    int a[20],i,n,x;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("enter element to search: ");
    scanf("%d",&x);

    int s = 0;
    int e = n-1;
    int m = (s+e)/2;
    for(int i = 0;i<n;i=i+2){
        if(a[m]==x){
            printf("element is at index %d",m);
        }
        else if(a[m]>x){
            e=m;
            m=(s+e)/2;
        }
        else if (a[m]<x){
            s=m;
            m=(s+e)/2;
        }
    }
}