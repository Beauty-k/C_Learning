#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sum_digits(int n)
{
    int temp = n;
    int sum = 0;
    for(int i = 0; i < 5; i++){
        //printf("temp is: %d\n",temp);
        int digit = temp % 10;
        printf("digit is: %d\n",digit);

        sum = sum + digit;
        printf("sum is: %d\n",sum);
        printf("temp is: %d\n",temp);
        temp = temp / 10;
        printf("temp is: %d\n",temp);

    }
    printf("sum of digits is: %d\n",sum);
}

int main() {
	
    int n;
    printf("enter any integer: ");
    scanf("%d", &n);
    sum_digits(n);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}