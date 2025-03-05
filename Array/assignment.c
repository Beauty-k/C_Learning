#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     char *s;
     s = malloc(1024 * sizeof(char));
     scanf("%[^\n]", s);
     s = realloc(s, strlen(s) + 1);

    for(char *c = s; c != '\0'; c++)
    {
        if(*c == ' ')
        {
            *c = '\n';
        }
        printf("%p\n", *c);
    }
        printf("%s\n", s);
     return 0;

}