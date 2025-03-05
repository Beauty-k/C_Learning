#include <stdio.h>
#include <stdlib.h>
// structure
// list
// insert
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
void insert_node(int value, linkedlist *list)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = value;
    new_node->next = NULL;
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

void insert_at_sp_position(int sp_position, int value, linkedlist *list)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = value;
    new_node->next = NULL;
    node *temp = list->head;
    if (sp_position == 0)
    {
        list->head = new_node;
        new_node->next = temp;
    }
    else
    {
        int i = 0;
        while (i < sp_position)
        {
            temp = temp->next;
            i++;
        }
    }

    node *temp1 = temp->next;

    temp->next = new_node;
    new_node->next = temp1;
}
int display(linkedlist *list)
{

    if (list->head == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        node *temp = list->head;
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    linkedlist list;
    int no_of_nodes;
    int value;
    int sp_position;
    printf("enter no_of_nodes: ");
    scanf("%d", &no_of_nodes);
    printf("enter value to insert: ");
    int i = 0;
    while (i < no_of_nodes)
    {
        scanf("%d", &value);
        i++;
        insert_node(value, &list);
    }
    display(&list);
    printf("enter position to be inserted: ");
    scanf("%d", &sp_position);
    printf("enter value for node: ");
    scanf("%d", &value);
    insert_at_sp_position(sp_position, value, &list);

    display(&list);
}