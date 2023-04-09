#include<stdio.h>
int main(){
    float celcius,fehr;
    printf("enter temperature in celcius: ");
    scanf("%f",&celcius);
    fehr = (1.8)*celcius + 32;
    printf("the temperature in fehrenheit is: %.2f",fehr);
}