/*Write a program to find the factorial value of any number
entered through the keyboard.*/
#include <stdio.h>
int main()
{
    int num;
    printf("enter any number :");
    scanf("%d", &num);

    int fact = num;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("%d\n", fact);
}