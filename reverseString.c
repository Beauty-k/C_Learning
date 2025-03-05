#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char *reverse(char *input)
{
    int length = strlen(input);
   // printf("%d\n", length);
    for (int i = 0; i < length/2; i++)
    {
        char temp = input[i];
        input[i] = input[length - 1 - i];
        input[length - 1 - i] = temp;
    }
    return input;
}
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char input[101];
    scanf("%[^\n]%*c", input);
    char *rev = reverse(input);
    printf("%s", rev);
    return 0;
}