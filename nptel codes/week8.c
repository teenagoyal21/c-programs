/*#include<stdio.h>
int fun(int x){
    int y;
    if(x>100){
    y = x-10;}
    else{
    y = fun(fun(x+11));}
    return y;
}

int main(){
    int x;
    printf("%d",fun(9));

}*/
/*#include<stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[3][3],b[3][3],c[3][3];
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d",c[i][j]);
        }
        printf("%d",/n);
    }
    return 0;
}

