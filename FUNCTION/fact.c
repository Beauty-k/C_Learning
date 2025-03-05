#include<stdio.h>

int main()
{
    int num , factorial;
    printf("enter any integer :");
    scanf("%d", &num);
    int fact(int num);
    factorial = fact(num);
    printf("\n%d",factorial);
}
int fact(int num)
{
    int factorial = 1;
for(int i = 1; i <= num; i++)
{
    factorial = factorial * i;
}
    return factorial;
}