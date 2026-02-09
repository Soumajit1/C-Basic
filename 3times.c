//Write a program to change the value of a variable to ten times of its current
//value.
#include<stdio.h>
int three_time(int*);
int three_time(int* x){
*x=*x*3;
  
}
int main(){
  int a=5;
printf("The value of a is %d",a);
three_time(&a);
printf("The value of a is %d",a);
return 0;
}
