#include<stdio.h>
int main(){
    int n;
    printf("enter your choice:");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("monday/n");
        break;
        case 2:
        printf("tuesday/n");
        break;
        case 3:
        printf("wednesday/n");
        break;
        case 4:
        printf("thursday/n");
        break;
        case 5:
        printf("friday/n");
        case 6:
        printf("saturday/n");
        break;
        case 7:
        printf("sunday/n");
        break;
        default:
        printf("not valid");



    }
    return 0;
}