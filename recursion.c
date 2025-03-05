#include<stdio.h>
int n;
int factorial(int n){
if(n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    printf("enter any integer :");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d", fact);
    return 0;
}