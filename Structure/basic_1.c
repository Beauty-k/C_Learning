#include<stdio.h>
int main()
{
    struct book 
    {
        int no_of_pages;
        float price;
        char name[20];
    }a , b , c;

        scanf("%d", &a.no_of_pages);
        scanf("%f", &a.price);
        scanf("%s", &a.name);

        printf("%d\n", a.no_of_pages);
        printf("%f\n", a.price);
        printf("%s\n", a.name);


    return 0;
}