// create array which stores word at each index and then print it.
#include <stdio.h>
#include <string.h>
typedef struct name_t
    {
        char str[10];
    } name;

void print(name *word, int n)
{
    int i = 0;
    while (i != n)
    {
        printf("%s\n", word[i].str);
        i++;
    }
}
int main()
{
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);
    
    name word[50];
        printf("enter %d name: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", word[i].str);
    }
    // int i = 0;
    // while (i != n)
    // {
    //     printf("%s\n", word[i].str);
    //     i++;
    // }
    // printf("%s\n",word[1].str);
    print(word,  n);
}

