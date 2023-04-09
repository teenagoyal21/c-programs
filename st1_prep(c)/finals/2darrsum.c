#include<stdio.h>
int main(){
  int arr[100][100];
  int m,n;
  scanf("%d%d",&m,&n);
  for(int i=0;i<m;i++){
    for(int j =0;j<n;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  
  
  int max=0;
  for(int i = 0;i<m;i++){
    int sum = 0;
    for(int j=0;j<n;j++){
      sum = sum + arr[i][j];
    }
    if(sum>max){
      max = sum;
      printf("%d ",sum);
    }
  }
printf("%d ",max);
}