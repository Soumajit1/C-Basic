#include<stdio.h>

int factorial(int);
 int factorial(int n){
    if (n == 0 || n== 1){
        return 1;
        
    } else {
    return n * factorial(n - 1);
 }
}
 int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
 
    printf("Factorial of %d is %d\n", a, factorial(a));
        return 0;
    }
