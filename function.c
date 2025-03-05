#include <stdio.h>

int sum(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}

int substraction(int x, int y)
{
   // return (x - y);
    if(x>y){
        return (x-y);
    }else{
        return (y-x);
    }
}

int multiply(int n, int i)
{
    return (n * i);
}

int division(int x, int y)
{
    return (x / y);
}
int main()
{
    int a, b;
    printf("Enter any two integers:\n");
    scanf("%d %d", &a, &b);
    int add, subt, mult, div;
    add = sum(a, b);
    subt = substraction(a, b);
    mult = multiply(a, b);
    div = division(a, b);
    printf(" add = %d\n subt = %d\n mult = %d\n div = %d\n", add, subt, mult, div);
}