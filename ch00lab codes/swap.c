#include<stdio.h>
int main(){
    int n;
    printf("enter any number: ");
    scanf("%d",&n);
    switch(n>0){
        case 1:
        printf("positive");
        break;
        case 0:
        switch(n<0){
            case 1:
            printf("neg");
            break;
            case 0:
            printf("zero");
            break;
        }
        break;
    }
}