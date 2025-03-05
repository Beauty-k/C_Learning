//write a program to check whether a number is prime or not

#include<stdio.h>
int main(){
int num;
printf("enter any integer :");
scanf("%d", &num);

for(int i = 2; i<num; i = i+1)
{
    if(num % i== 0){
        printf("given number is composite ");
        break;
    }
       
    
}
}