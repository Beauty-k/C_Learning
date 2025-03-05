// find the position of the value in list.
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
void initialise(linkedlist *list)
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
void display(linkedlist *list)
{
    node *temp = list->head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int find_position(int value, linkedlist *list)
{
    node *temp = list->head;
    int position = 0;
    while (temp->data != value)
    {
        temp = temp->next;
        position++;
    }
    if(temp->data == value){
        return position;
        
    }else{
        printf("value does not exist in the list\n");
        
    }
    return 0;
    
}

int main()
{
    linkedlist list;
    initialise(&list);
    int value;
    int no_of_nodes;
    int value_to_find;
    printf("enter no of inputs: ");
    scanf("%d", &no_of_nodes);

    printf("enter value: ");
    for (int i = 1; i <= no_of_nodes; i++)
    {
        scanf("%d", &value);
        insert(value, &list);
    }
    printf("enter value to find: ");
    scanf("%d", &value_to_find);
    int result = find_position( value_to_find,&list);
    printf("%d",result);
    // display(&list);
}