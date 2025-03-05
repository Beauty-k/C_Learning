#include <stdio.h>

int num(int a){
    return a*3;
}
int num(int a){
    return a*2;
}
int main()
{
    int n = 4 , m = 7;
   num(n);
   num(m);
}