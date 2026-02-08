#include<stdio.h>
int sum(int*, int*);
int sum(int* x, int* y){
  *x=5;
    *y=10;
  return *x+*y;
}
int main(){
  int a=20;
int b=30;
int c=sum(&a,&b);
printf("The Value Of A is %d, The value Of B is %d",a,b,c);
return 0;
}
//In Call By Refarence We can change the value of integer in the function.
