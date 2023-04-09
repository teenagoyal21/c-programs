#include<stdio.h>
int last_three(int n);
int main(){
    int n,m,p;
    scanf("%d%d%d",&n,&m,&p);
    last_three(n);
    last_three(m);
    last_three(p);
    return 0;
}

int last_three(int n){
    int sod;
    sod = (n%10)+((n%100)/10)+((n%1000)/100);
    printf("%d\n",sod);
}


/*int num1,num2,num3;
scanf("%d%d%d",&num1,&num2,&num3);
int sod1,sod2,sod3;
sod1 = (num1 % 10) + 
       	 ((num1 % 100)/10) +    	   	 
             ((num1 % 1000)/100)
sod2 = (num2 % 10) + 
             ((num2 % 100)/10) +   	   	 
       	  ((num2 % 1000)/100)
sod3 = (num3 % 10) + 
             ((num3 % 100)/10) + 	  	 
             ((num3 % 1000)/100)
printf(sod1)
printf(sod2)
printf(sod3)*/
