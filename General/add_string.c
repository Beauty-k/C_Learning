#include<stdio.h>
#include<string.h>
void string_append(char *s1, char *s2){
    char *s;
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for(int i = 0; i<len1; i++){
        s[i] = s1[i];
    }
    for(int i = 0; i<len2; i++){
        s[len1 + i] = s1[i];
    }
    int len = len1 + len2;
    for(int i = 0; i < len; i++){
        printf("%s\n",s[i]);
    }
}
int main(){
    char s1[] = "first";
    char s2[] = "second";
   // strcat(s1,s2);
   int len1 = strlen(s1);
   int len2 = strlen(s2);

   string_append(s1,s2);

}