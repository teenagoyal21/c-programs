/*int HCF(int ,int){
  int i,a,b,c,d; 
  int result = 0;
  if(a>b && a>c && a>d){
    for(i=0;i<a;i++){
      if(a%i==0 && b%i==0 && c%i==0 && d%i==0){
        result = i;}}}
  else if(b>a && b>c && b>d){
     for(i=0;i<b;i++){
      if(a%i==0 && b%i==0 && c%i==0 && d%i==0){
        result = i;}}}
  else if(c>a && c>b && c>d){
     for(i=0;i<c;i++){
      if(a%i==0 && b%i==0 && c%i==0 && d%i==0){
        result = i;}}}
  else if(d>a && d>b && d>c){
     for(i=0;i<d;i++){
      if(a%i==0 && b%i==0 && c%i==0 && d%i==0){
        result = i;}}}
}*/
#include<stdio.h>
int HCF(int, int); //You have to write this function which calculates the HCF. 
	 
int main()
{
   int a, b, c, d, result;
   scanf("%d %d %d %d", &a, &b, &c, &d); /* Takes 4 number as input from the test data */
   result = HCF(HCF(a, b), HCF(c,d));
   printf("The HCF is %d", result);
}

//Complete the rest of the program to calculate HCF
int HCF(int a,int b){
  while(a!=b){
    if(a>b){
      a=a-b;
    }
    else{
      b=b-a;}
  }
}