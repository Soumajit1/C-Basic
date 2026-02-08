#include<stdio.h>
int swap(int*,int*);
int swap(int* x,int* y){
  int trmp;
int temp=*x;
*x=*y;
*y=temp;
}
int main(){
  int a=5;
int b=10;
swap(&a,&b);
printf("The value of a is %d\n and The vvalue of the b is %d\n", a,b);
return 0;
}
