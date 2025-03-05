#include<stdio.h>
int main()
{
    int arr[5];//5 box(space) reseved.
    for(int i = 0; i<=4; i++)// taking input from user using loop.
    {
        printf("enter element number %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i = 4; i>=0; i--) // printing element in reverse order.
    {
        printf("%d", arr[i]);
    }   
    return 0;
}