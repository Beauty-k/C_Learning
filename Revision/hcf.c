#include <stdio.h>

int divisor, dividend;

void check_divisor_dividend(int num1, int num2)
{
    if (num1 < num2)
    {
        divisor = num1;
        dividend = num2;
    }
    else
    {
        divisor = num2;
        dividend = num1;
    }
 
}

int find_hcf(int num1, int num2)
{
    int hcf;
    int remainder;
    check_divisor_dividend(num1, num2);

    do
    {
        remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    } while (remainder != 0);
    hcf = dividend;
    return hcf;
}

int main()
{
    int num1, num2;
    printf("enter two integers: ");
    scanf("%d %d",&num1, &num2);
    int hcf = find_hcf(num1, num2);
    printf("HCF of given numbers is: %d\n",hcf);
    int lcm = (num1 * num2)/hcf;
    printf("LCM of given numbers is: %d\n",lcm);

    return 0;
}