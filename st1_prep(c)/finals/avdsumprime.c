#include<stdio.h>
void checkprime(int n){
    int flag = 1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag = 0;
        }
    }
    
    if(flag){
        printf("prime");;
    }
    else{
        printf("not");
    }
}

int main(){
    int arr[100];
    for(int i = 0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    int avg;
    avg = sum/5;
    printf("%d\n",sum);
    printf("%d\n",avg);
    checkprime(avg);
}