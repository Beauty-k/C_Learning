// find the length of string without using inbuilt function.
#include <stdio.h>
int main()
{
    char string[] = "he is my friend";
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d\n", count);
    return 0;
}