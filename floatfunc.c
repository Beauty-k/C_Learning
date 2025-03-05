#include <stdio.h>
void change(int *pa, int *pb)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    return;
}
int main()
{
    int a = 2, b = 4, result;
   // int *pa = &a;
   // int *pb = &b;
    change (&a, &b);
   result = printf("%d\n%d\n", a, b);
   printf("\n%d\n",result);
}