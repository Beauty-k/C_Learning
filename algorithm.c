//check whether a number is palindrome or not

#include <stdio.h>

int main()
{
    int num;
    int reverse_int = 0;
    int temp;
    printf("enter number : ");
    scanf("%d", &num);

    int user_input = num;
    while (num != 0)
    {
        temp = num % 10;
        reverse_int = reverse_int * 10 + temp;
        num = num / 10;
    }
    if (reverse_int == user_input)
    {
        printf("number is palindrom\n");
    }
    else
    {
        printf("not palindrome number\n");
    }
   //  printf("%d\n",reverse_int);

    return 0;
}
