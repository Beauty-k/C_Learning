//display this gp - 3,12,48,...upto 'n'terms.
#include<stdio.h>
int main(){
    int n;
    printf("enter any number :");
    scanf("%d",&n);
int a = 3;
    for(int i=1; i<=n; i= i+3){
printf("%d\n", a);
a = a*4;
    }
}