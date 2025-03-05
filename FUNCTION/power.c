#include<stdio.h>

int main()
{
    int a,b,result;
    printf("enter any two integer :");
    scanf("%d %d",&a, &b);
    int power(int a ,int b);
    result = power(a,b);
    printf("%d\n", result);
    return 0;
}

int power(int a,int b)
{
    int count = 1;
    for(int i = 1; i<= b; i++)
    {
        count = a;
        count = a*i;
        return count;
    }
}