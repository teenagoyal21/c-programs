#include<stdio.h>
int main(){
    int amt,note500,note100,note50,note20,note10,note5,note2,note1;
    scanf("%d",&amt);
    note500=note100=note50=note20=note10=note5=note2=note1=0;
    if(amt>=500){
        note500 = amt/500;
        amt=amt-note500*500;
    }
    if(amt>=100){
        note100=amt/100;
        amt=amt-note100*100;
    }
    if(amt>=50){
        note50=amt/50;
        amt=amt-note50*50;
    }
    if(amt>=20){
        note20=amt/20;
        amt=amt-note20*20;
    }
    if(amt>=10){
        note10=amt/10;
        amt=amt-note10*10;
    }
    if(amt>=2){
        note2=amt/2;
        amt=amt-note2*2;
    }
    if(amt>=1){
        note1=amt;
    }
    printf("500=%d\n",note500);
    printf("100=%d\n",note100);
    printf("50=%d\n",note50);
    printf("20=%d\n",note20);
    printf("10=%d\n",note10);
    printf("2=%d\n",note2);
    printf("1=%d",note1);
}