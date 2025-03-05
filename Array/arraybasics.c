#include <stdio.h>
int main()
{

    char str[100];
    char strn[] = "hello world";
    char stn[] = {'h', 'e', '\0'};
    char *ptr = stn;
    printf("%s\n", strn);
    printf("%s\n", stn);
    printf("%p\n", ptr);
    printf("%p\n", &stn[0]);
    printf("%s\n", *ptr);
}