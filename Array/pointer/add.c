#include<stdio.h>
int main(){
    int a = 4 , *x , *y ;
    x = &a; 
    printf("%d\n", x);
    x = x + 1;
    printf("%d\n", x);
    x = x + 9;
    printf("%d\n", x);
    y = x + 3;
printf("%d\n", y);
}