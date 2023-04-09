#include<stdio.h>
int checksqr(int n);

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i =a;i<=b;i++){
        if(checksqr(i)==1){
            printf("%d ",i);
        }
    }
    return 0;
}

int checksqr(int n){
    for(int i =0;i<=n;i++){
        if(i*i==n){
            return 1;
        }
    }    
}

/*#include<math.h>
int main(){
    int a,b,i,n;
    float p;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
        p = sqrt(i);
        n = p;
        if(p==n){
            printf("%d ",i);
        }
    }
}*/