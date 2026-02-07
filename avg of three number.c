#include<stdio.h>
int avg(int, int, int);
int avg(int x, int y, int z){
return (x + y + z)/3;
}
int main()
{
int a = 5;
int b = 19;
int c = 99;
int d = avg(a, b, c);
printf("Average of three numbers is %d\n", d);
return 0;
}
