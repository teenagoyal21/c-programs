#include<stdio.h>
int sum(int x, int y);

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    sum(x,y);
    return 0;
}

int sum(int x , int y){
    int c;
    c = x+y;
    printf("%d",c);
}