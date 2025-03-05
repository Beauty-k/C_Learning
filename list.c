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
void delete_sp(linkedlist *list, int num)
{
    node *temp = list->head;
    node *temp1;
    node *temp2;
    if(temp->data == num){
        temp1 = temp->next;
        free(temp);
        list->head = temp1;
    }
    while (temp != NULL)
    {
    
        if (temp->next->data == num)
        {
            temp1 = temp->next;
            temp2 = temp->next->next;
            free(temp1);
            temp->next = temp2;
        }else{
            return;
        }
        temp = temp->next;
    }
   
    
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
    initialize(&list);
    int no_of_nodes;
    int value;
    int num = 4;
    printf("enter  no of nodes: ", no_of_nodes);
    scanf("%d", &no_of_nodes);
    printf("enter %d nodes data: ", no_of_nodes);
    for (int i = 1; i <= no_of_nodes; i++)
    {
        scanf("%d", &value);
        insert(value, &list);
    }
    display(&list);
    delete_sp(&list, num);
    display(&list);
}