#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        int flag =1;
        int j =2;
        for(j;j<i;j++){
            if(i%j==0){
                flag = 0;
            }
        }
        if(flag){
            printf("%d\n",i);
        }
    }
    /*int n;
    scanf("%d",&n);
    int f =1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            f = 0;
        }
        
    }
    if(f){
            printf("%d is a prime number \n",n);
        }
    else{
        printf(" it is not prime");
    }
*/
}