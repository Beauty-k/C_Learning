#include <stdio.h>
#include <math.h>

void check_prime(int number)
{
    // int divisor = 0;
    if (number < 2)
    {
        printf("The number given by user is NOT PRIME");
    }

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            printf("The number given by user is NOT PRIME");
            return;
            // divisor++;
        }
    }
    // if(divisor == 2){
    //     printf("The number given by user is PRIME");
    // }else{
    //     printf("The number given by user is NOT PRIME");
    // }
    printf("The number given by user is PRIME");
}
int main()
{
    int number;
    printf("enter any integer: ");
    scanf("%d", &number);
    check_prime(number);
}