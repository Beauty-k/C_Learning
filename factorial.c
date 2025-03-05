// find the factorial of a given number
//factorial ,5! = 5*4*3*2*1 , 5! = 5*4! 
#include <stdio.h>

int factorial (int n){
    if (n==1) return 1;
    return n*factorial(n-1);
}
int main()
{
    int num;
    
    printf("enter any number :");
    scanf("%d", &num);
    
    int fact = factorial(num);
    printf("%d", fact);

    return 0;
}