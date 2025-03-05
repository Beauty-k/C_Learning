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
void initialize(linkedlist *list)
{
    list->head = NULL;
    list->tail = NULL;
}
void insert(int value, linkedlist *list)
{
    node *new_node = (node *)malloc(sizeof(node));
    list->head = new_node;
    list->tail = new_node;
    if (list->head == NULL)
    {
        new_node->data = value;
        new_node->next = NULL;
    }
    else
    {
        node *temp = list->head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        new_node->next = temp;
    }
}
void display(linkedlist *list)
{
    node *temp = list->head;
    while(temp != NULL){
        printf("%d",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    linkedlist list;
    initialize(&list);
    int no_of_nodes;
    int value;
    printf("enter  no of nodes: ", no_of_nodes);
    scanf("%d", &no_of_nodes);
    printf("enter %d nodes data: ", no_of_nodes);
    for (int i = 1; i <= no_of_nodes; i++)
    {
        scanf("%d", &value);
        insert(value, &list);
    }
    display(&list);
}