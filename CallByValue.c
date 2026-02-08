#include<stdio.h>
int sum(int, int);
int sum ( int x, int y){
  return x+y;
}
int main(){
  int a=5;
int b=10;
int c=sum(a,b);
printf("The sum of %d and %d is %d",a,b,c);
return 0;
}
//In Call By Value Function we can't cahge the value In function.
