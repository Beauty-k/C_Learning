#include <stdio.h>
#include <stdlib.h>
typedef struct node_t
{
    int data;
    struct node_t *next;
} node; // alias

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
void insert_at_the_begining(int value, linkedlist *list)
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
        list->head = new_node;
        new_node->next = temp;
    }
   
}
void insert_at_the_specific_position(int specific_position,int value, linkedlist *list){
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = value;
    new_node->next = NULL;
    node *temp = list->head;
    if(specific_position == 0){
        list->head = new_node;
        new_node->next = temp;
    }else{
        printf("In Else condition\n");
        int i = 1;
        node *next_node;
        while(i < specific_position){
            temp = temp->next;
            printf("Node value- %d\n",temp->data);
            i++;
        }
        next_node = temp->next;
        temp->next = new_node;
        new_node->next = next_node;
    }
}

void display(linkedlist *list){
        node *temp = list->head;
        while(temp != NULL){
            printf("%d\n",temp->data);
            temp = temp->next;
        }
    }
int main()
{
    linkedlist list;
    int no_of_nodes;
    int value;
    int specific_position;
    int value_sp;
    initialise(&list);
    
    printf("enter no of inputs: ");
    scanf("%d", &no_of_nodes);
    printf("enter data of node: ");

    for (int i = 1; i <= no_of_nodes; i++)
    {
        scanf("%d", &value);
        insert_at_the_begining(value, &list);
    }
    display(&list);

    printf("enter any specific position for inserting node: ");
    scanf("%d",&specific_position);
    printf("enter value for %d node: ",specific_position);
    scanf(" %d",&value_sp);
    insert_at_the_specific_position(specific_position,value_sp,&list);

    display(&list);

}