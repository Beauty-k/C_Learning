#include<stdio.h>
int print_fib(int num){
    int fib;
    if( num = 0 ) return 0;
    if (num = 1)  return 1;
    if(num > 1)
    { 
        return fib = print_fib(num-1) + print_fib(num-2);
        
    }
    return fib;
}
int main(){
    int num;
    printf("enter length of sequence: ");
    scanf("%d",&num);
    int fib = print_fib(num);
    printf("%d ",fib);
    
}