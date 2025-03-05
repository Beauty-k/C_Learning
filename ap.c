/*display this ap - 1,3,5,7,9...upto 'n' terms
n th term = a+(n-1)d. i.e, 1+(n-1)2 = 1+2n - 2 = 2n - 1*/
/*display this ap - 4,7,10,13,16...upto n terms.   n th terms =a+(n-1)d = 4+(n-1)3
    = 4+3n-3 = 3n+1 */
#include <stdio.h>
int main()
{
   int n;
    printf("enter any number :");
    scanf("%d", &n);

    /* for (int i = 1; i <= 2*n-1; i=i + 2)
    {
        printf("%d\n", i);
    }*/
    
for(int i = 4; i<=3*n+1;i=i+3){
    printf("%d ",i);
}

}
