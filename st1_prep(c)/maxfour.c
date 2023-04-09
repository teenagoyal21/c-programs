#include<stdio.h>
int main(){
    int x,y,z,w;
    scanf("%d%d%d%d",&x,&y,&z,&w);
    (x>y)&&(x>z)&&(x>w)?printf("x is"):
    (y>x)&&(y>z)&&(y>w)?printf("y is"):
    (z>y)&&(z>x)&&(z>w)?printf("z is"):printf("w is");
}