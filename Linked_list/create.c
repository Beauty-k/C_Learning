#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void initialize(linkedlist *list)
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

void create_more_list(linkedlist *list)
{
    linkedlist *different_list;
    initialize(different_list);
    

}
void display(linkedlist *list)
{
    node *temp = list->head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int main()
{
    linkedlist list;
    initialize(&list);
    int no_of_nodes;
    int value;
    printf("enter no_of_inputs: ");
    scanf("%d", &no_of_nodes);
    printf("enter value to be inserted: ");
    for (int i = 0; i < no_of_nodes; i++)
    {
        scanf("%d", &value);
        insert(&list, value);
    }
    display(&list);
}