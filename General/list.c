#include <stdio.h>
#include <stdlib.h>
typedef struct node_t
{
    int data;
    struct node_t *next;
} node;
typedef struct linkedlist_t
{
    node *head;
    node *tail;
} linkedlist;
void init_list(linkedlist *list)
{
    list->head = NULL;
    list->tail = NULL;
}
node *create_node(linkedlist *list, int value)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}
void insert(linkedlist *list, int value)
{
    node *new_node = create_node(list, value);
    if (list->head == NULL)
    {
        list->head = new_node;
        list->tail = new_node;
    }
    else
    {
        node *temp = list->head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        list->tail = new_node;
    }
}
node *delete(linkedlist *list, int num)
{
    node *temp = list->head;
    node *prev_node = NULL;
    node *current_node = NULL;
    // if(temp->data == num){

    // }

    while (temp->data != num)
    {
        prev_node = temp;
        temp = temp->next;
    }
    // prev_node = temp;

    if (prev_node == NULL)
    {
        list->head = temp->next;
    }
    else if (temp->next == NULL)
    {
        prev_node->next = NULL;
        list->tail = prev_node;
    }
    else
    {
        
        prev_node->next =temp->next;
        
    }
    return temp;
}
void display(linkedlist *list)
{
    node *temp = list->head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    //printf("\n");
}
int main()
{
    linkedlist list;
    init_list(&list);
    int no_of_nodes;
    int value;
    int num;
    printf("enter no of inputs: ");
    scanf("%d", &no_of_nodes);
    printf("enter value to be inserted: ");
    for (int i = 0; i < no_of_nodes; i++)
    {
        scanf("%d", &value);
        insert(&list, value);
    }
   
     display(&list);
    printf("enter number for deletion of node: ");
    scanf("%d", &num);
    delete (&list, num);
    display(&list);
    return 0;
}