/*Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every 
hour worked above 40 hours. Assume that employees do not 
work for fractional part of an hour.*/
#include<stdio.h>
#define MAX_HOUR 40
int main(){
    int O_pay = 0;
    int hour , overtime_pay;
  
    for(int i = 1; i<=10; i++){
        scanf("%d", &hour);
        if(hour > MAX_HOUR)
        {
            O_pay = hour - MAX_HOUR;
        
        }   overtime_pay = 12 * O_pay; 

     
    } 
     printf("%d\n", overtime_pay);

    return 0;
}