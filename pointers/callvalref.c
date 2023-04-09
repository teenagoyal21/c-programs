#include<stdio.h>
int swapbyvalue(int a,int b);
int swapbyref(int *a,int *b);
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    printf("befre swap: x=%d y=%d\n",x,y);
    swapbyvalue(x,y);
    printf("after swap by value: x=%d y=%d\n",x,y);
    swapbyref(&x,&y);
    printf("after swap by reference: x=%d y=%d\n",x,y);
}
int swapbyvalue(int a,int b){
    int temp = a; a=b; b=temp;
}
int swapbyref(int *a,int *b){
    int temp = *a; *a=*b;*b=temp;
}