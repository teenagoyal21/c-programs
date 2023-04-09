#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num,rem,rev;
    for(int i=0;i<n;i++){
        num = i;
        rev = 0;
        while(num!=0){
            rem = num%10;
            rev+=(rem*rem*rem);
            num/=10;
        }
        if(i==rev){
            printf("%d ",i);
        }
    }
    /*int n,num,rem,dig=0;
    scanf("%d",&n);
    num = n;
    while(num!=0){
        rem = num%10;
        dig += (rem*rem*rem);
        num/=10;
    }
    if(n==dig){
        printf("armstrong");
    }
    else{
        printf("not");
    }

    return 0;*/
}