#include<stdio.h>
int sum(int n);

int main(){
    int num;
    scanf("%d",&num);
    printf("%d",sum(num));
    return 0;
}

int sum(int n){
    if(n==1){
        return 1;
    }
    else{
        return sum(n-1)+n;
    }
}