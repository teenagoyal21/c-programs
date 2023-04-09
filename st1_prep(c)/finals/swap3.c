#include<stdio.h>
void swap(int *a,int *b,int *c);
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    swap(&a,&b,&c);
    printf("%d %d %d",a,b,c);
}

void swap(int *a,int *b,int *c){
    
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;

}
/*
temp = a
a= b
b=c
c=temp
*/