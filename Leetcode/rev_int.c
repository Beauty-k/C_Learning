#include<stdio.h>
int reverse(int x){
    int rev_int = 0;
    while(x != 0){
        int temp = x % 10;
        rev_int = rev_int * 10 + temp;
        x = x/10;
    }
    return rev_int;
}
int main(){
    int result = reverse(123);
    printf("%d\n",result);
}