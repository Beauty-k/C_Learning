#include<stdio.h>

int factorial(int num){
    if(num == 1){
        return 1;
    }
    return num * factorial(num - 1);
}

int main(){
    int num;
    printf("enter any integer: ");
    scanf("%d", &num);
    int fact = factorial(num);
    printf("%d\n", fact);
    return 0;
}