  #include<stdio.h>
  int main(){
    int n,temp,flag;
    scanf("%d",&n);
    temp=n;
    flag=0;
    while(temp!=1){
      if(temp%2!=0){
        flag=1;
        break;
      }
      temp=temp/2;
    }
    if(flag==0){
      printf("yes");
    }
    else{
      printf("no");
    }
  }