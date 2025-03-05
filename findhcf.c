#include <stdio.h>

int main()
{
    int num1;
    int num2;
    printf("enter any 2 number :\n");
    scanf("%d %d", &num1, &num2);
    int remainder;
    int dividend, divisor;

    if (num1 > num2)
    {
        dividend = num1;
        divisor = num2;
    }
    else
    {
        dividend = num2;
        divisor = num1;
    }
    do
    {
        remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    } while (remainder != 0);
        int hcf = dividend;
        
    printf("hcf of %d and %d is %d\n", num1,num2,hcf);
    int lcm =( num1*num2)/hcf;
    printf("lcm of %d and %d is %d\n", num1,num2,lcm);
}