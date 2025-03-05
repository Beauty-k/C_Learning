#include <stdio.h>
int main()
{
    char str[10];
    scanf("%[^\n]%*c", str);
    int count;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count = str[i];
    }
    printf("%d\n", count);
}