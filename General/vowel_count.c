#include<stdio.h>
#include<string.h>
int count_vowel(char *s,int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        switch(s[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            count++;
        }
    }
    return count;
}
int main(){
    char s[10];
    printf("enter string s1: ");
    scanf("%s",&s);
    int length = strlen(s);
    int count = count_vowel(s,length);
    printf("%d\n",count);
}