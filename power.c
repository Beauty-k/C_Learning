#include<stdio.h>
int power(int x, int y){
    int pow = x ;
    for(int i=2; i<=y; i++){
        
    pow = pow*x;
    }

    return pow;
}

int main(){
    int a,b,result;
    printf("enter any two integer :");
    scanf("%d\n%d", &a, &b);
    result = power(a,b);
    printf("%d",result);
    return 0;
}