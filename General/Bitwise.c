#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

void calculate_the_maximum(int n, int k)
{
    // Write your code here.
    int and, or, xor;
    int Andmax = 0, or_max = 0, xor_max = 0;
    int AndFinal_max, orFinal_max, xorFinal_max;
    for (int i = 1; i <= n; i++)
    {

        for (int j = i + 1; j <= n; j++)
        {
            and = i & j;
            //printf("%d\n",and);
            or = i | j;
            //printf("%d\n",or);

            xor = i ^ j;
            //printf("xor result is: %d\n", xor);
            if (k > and > Andmax)
            {
                //printf("Andmax is:%d\n",Andmax);
                Andmax = and;
                //printf("%d\n",Andmax);
            }
            if (k > or > or_max)
            {
                or_max = or ;
            }
            if (k > xor > xor_max)
            {
                xor_max = xor;
            }
            if (Andmax < k)
            {
                AndFinal_max = Andmax;
                
            }
            // if (or_max < k )
            // {
                
            //     orFinal_max = or_max;
               
            // }
            // if (xor_max < k)
            // {
               
            //     xorFinal_max = xor_max;
            // }
        }
    }
    
    printf("AndFinal max: %d\n", Andmax);
    printf("OrFinal max: %d\n", or_max);
    printf("XorFinal max: %d\n", xor_max);

    // printf("Final max is: %d\n",max);
}

int main()
{
    int n, k;
    printf("enter any two integer: ");
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
