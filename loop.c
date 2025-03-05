#include <stdio.h>

int main()
{

    int n = 0;
    for (int i = 1; i <= 50; i++)
    {


        if (n % 2 != 0)
        {
            printf("%d\n", n);
            n + i;
        }
    }

    return 0;
}
