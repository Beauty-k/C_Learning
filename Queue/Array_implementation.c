#include <stdio.h>
#include <stdlib.h>
#define max_size 5
int queue[max_size];
int front = -1; // position of element to be removed.
int rear = -1;  // position of element to be inserted.
int is_empty()
{
    if (front == -1 && rear == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int is_full()
{
    if (rear == max_size)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int enqueue(int item)
{
    if (is_full())
    {
        return 0;
    }
    else
    {
        front = 0;
    }
    rear++;
    queue[rear] = item;
    return 1;
}
int dequeue()
{

    if (is_empty())
    {
        return 0;
    }
    else
    {

        int item = queue[front];
        return item;
        
    }
}
int main()
{
    int item;
    printf("enter items: ");
    for (int i = 0; i < max_size; i++)
    {
        scanf("%d", &item);
        enqueue(item);
    }
    int result = dequeue();
    printf("%d\n", result);
}