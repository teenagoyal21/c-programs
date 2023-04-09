#include<stdio.h>
//prototype
int printHello();
int goodbye();

int main(){
    printHello();
    goodbye();//calling
    return 0;
}

int printHello(){
    printf("hello world\n");//definition
}
int goodbye(){
    printf("good bye");
}