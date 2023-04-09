/*#include<stdio.h>
void fib(int n);

int main(){
    int n;
    scanf("%d",&n);
    printf("%d %d",0,1);
    fib(n-2);
    return 0;
}

void fib(int n){
    static int a=0,b=1,c;
    if(n>0){
        c=a+b;
        a=b;
        b=c;
        printf(" %d",c);
    }
    fib(n-1);
}*/


#include<stdio.h>
int checkfib(int n){
    int fib[100];
    fib[0] = 0;
    fib[1] = 1;
    
    for(int i=2;i<=n;i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    for(int i = 0;i<=n;i++){
        if(n==fib[i]){
            return 1;
        }
        
    }
    
}

int main(){
    int n;
    scanf("%d",&n);
    if(checkfib(n)==1){
        printf("true");
    }
    if(n==2||n==3){
        printf("true");
    }
    else{
        printf("false");
    }
}