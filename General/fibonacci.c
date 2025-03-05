// print fibonacci series

#include<stdio.h>
int main(){
    int num1, num2, fibonacci;
    num1 = 0;
    num2 = 1;
    int length;
    printf("enter length of sequence: ");
    scanf("%d",&length);
    // do{
    //     int length;
    //     printf("enter length of sequense: ");
    //     scanf("%d",&length);
    //     if(length < 3){
    //         printf("this sequence cannot proceed");
    //     }
    // }while(length >= 3);
    printf("%d %d ",num1, num2);
    for(int i = 0; i < length; i++){
        fibonacci = num1 + num2;
        num1 = num2;
        num2 = fibonacci;
        printf("%d ",fibonacci);
    }
     return 0;
}