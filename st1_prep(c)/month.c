#include<stdio.h>
int main(){
    int n;
    printf("enter your choice: ");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("jan\n");
        break;
        case 2:
        printf("feb\n");
        break;
        case 3:
        printf("march\n");
        break;
        case 4:
        printf("april\n");
        break;
        case 5:
        printf("may\n");
        break;
        case 6:
        printf("june\n");
        break;
        case 7:
        printf("july\n");
        break;
        case 8:
        printf("august\n");
        break;
        case 9:
        printf("sep\n");
        break;
        case 10:
        printf("oct\n");
        break;
        case 11:
        printf("nov\n");
        break;
        case 12:
        printf("dec\n");
        break;
        default:
        printf("enter correct choice");
    }
}