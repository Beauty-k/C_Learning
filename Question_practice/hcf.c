#include<stdio.h>
int main(){
    int num1,num2;
    int dividend,devisor,remainder;
    printf("enter any two integer: ");
    scanf("%d %d",&num1, &num2);
    if(num1 > num2){
        dividend = num1;
        devisor = num2;
    }else{
        dividend = num2;
        devisor = num1;
    }
    do
    {
        remainder = dividend % devisor;
        dividend = devisor;
        devisor = remainder;
    }
    while(remainder != 0);
    int hcf = dividend;
    printf("hcf of %d and %d is %d: ",num1,num2,hcf);
    int Lcm = (num1 * num2)/hcf;
    printf("Lcf of %d and %d is %d: ",num1,num2,Lcm);
    return 0;
}