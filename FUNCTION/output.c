#include <stdio.h>



int main()
{
    int i = 3 , j = 4,k,l;
    int addmult(int i,int j);
    k = addmult(i,j);
    l = addmult(i,j);
    printf("%d %d\n",k,l);
     
}
int addmult(int ii,int jj)
{
    int kk,ll;
    kk = ii+jj;
    ll = ii*jj;
    return(kk,ll);
}
