#include<stdio.h>
int main(){
    float p,c,b,m,d,per,t;
    printf("enter marks:");
    scanf("%f%f%f%f%f",&p,&c,&b,&m,&d);
    t=p+c+b+m+d;
    per=(t/500)*100;
    printf("%d",per);
    if(per>=90){
        printf("grade a");
    }
    else if(per>=80){
        printf("grade b");
    }
    else if(per>=70){
        printf("grade c");
    }
    else if(per>=60){
        printf("grade d");
    }
    else if(per>=40){
        printf("grade e");
    }
    else{
        printf("grade f");
    }
    return 0;

}
