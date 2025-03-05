#include <stdio.h>
int main()
{
    int rows;
    printf("enter number of rows :");
    scanf("%d", &rows);
    int colums;
    printf("enter number of colums :");
    scanf("%d", &colums);
    for (int i = 1; i <= rows; i++)
    {
        for (int i = 1; i <= colums; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}