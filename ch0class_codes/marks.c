#include<stdio.h>
int main(){
    //marks grading
    int a;
    printf("enter your marks: ");
    scanf("%d",&a);

    if(a<=100 && a>=90){
        printf("A+   :)");
    }
    else if(a<90 && a>=80){
        printf("B    :|");
    }
    else if(a<80 && a>=70){
        printf("C    : ");
    }
    else{
        printf("sorry!! we dont consider this as marks :(");
    }
}