#include<stdio.h>
void is_palindrome(char *arr,int size){
    int i = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == arr[size - 1 - i]){
            printf("this string is palindrome\n");
        }
    }
}
int main(){
    char arr[7] = {"abccba"};
    is_palindrome(arr,7);
}