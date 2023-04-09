#include<stdio.h>
int main(){
    /*int A,B,C,D,E;
    scanf("%d%d%d%d%d",&A,&B,&C,&D,&E);
    if((A+B<=D)&&(C<=E)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    int n;
    scanf("%d",&n);
    (n%2==0)?printf("even"):printf("odd");
    int amount;
    scanf("%d",&amount);
    int note500,note100,note50,note20,note10,note5;
    note500=note100=note50=note20=note10=note5=0;
    if (amount>=500){
        note500=amount/500;
        amount=amount-note500*500;
    }
    if(amount>=100){
        note100=amount/100;
        amount=amount-note100*100;
    }
    if(amount>=50){
        note50=amount/50;
        amount=amount-note50*50;
    }
    if(amount>=20){
        note20=amount/20;
        amount=amount-note20*20;
    }
    if(amount>=10){
        note10=amount/10;
        amount=amount-note10*10;
    }
    if(amount>=5){
        note5=amount/5;
        amount=amount-note5*5;
    }
    printf("%d,%d,%d,%d,%d,%d",note500,note100,note50,note20,note10,note5);*/
    int unit;
    scanf("%d",&unit);
    if(unit>=0 && unit<=10){
        printf("%d",unit*5);
    }
    else if(unit>=10 && unit<=100){
        printf("%d",unit*7);
    }
    else if(unit>=100 && unit<=250){
        printf("%d",unit*9);
    }
    else{
        printf("%d",unit*12);
    }
}