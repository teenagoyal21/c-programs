#include<stdio.h>
int main(){
    int unit;
    float bill, total_amt, sur_chrge;
    printf("enter total units consumed: ");
    scanf("%d",&unit);
    if(unit<=50){
        bill= unit * 7;
        printf("eletricty bill = %0.2f rupeess",bill);
    }
    else if(unit<=150 && unit>=50){
        bill=unit*9;
        printf("eletricty bill = %0.2f rupeess",bill);
    }
    else if(unit<=250 && unit>=150){
        bill = unit*12;
        printf("electricty bill =%0.2f rupees",bill);
    }
    else if(unit>250){
        bill = unit*15;
        printf("electricity bill =%0.2f rupees",bill);
    }
    else{
        printf("please enter valid consumed units***");
    }
    return 0;
}