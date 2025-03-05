
#include <stdio.h>
#include <stdlib.h>

typedef struct node_t
{
     int data;
     struct node_t *next;
} node;
typedef struct linked_list_t
{
     node *head;
     node *tail;
} linkedlist;
void initialise(linkedlist *list)
{
     list->head = NULL;
     list->tail = NULL;
}
void insert(linkedlist *list, int value)
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
void sort(linkedlist *list)
{
    // printf("in sort function\n");

     node *temp = list->head;
     while (temp != NULL)
     {
          node *current = temp->next;
          while (current != NULL)
          {
               
               if (temp->data > current->data)
               {
                    int temperory = temp->data;
                    temp->data = current->data;
                    current->data = temperory;
               }
               current = current->next;
          }
          temp = temp->next;
          
     }
    // printf("sort function is working");
}



int display(linkedlist *list)
{
     node *temp = list->head;
     while (temp != NULL)
     {
          printf("value of node is: %d ", temp->data);
          temp = temp->next;
     }
}
int main()
{
     linkedlist list;
     initialise(&list);
     int no_of_input;
     int value;
     int user_value;
     printf("enter no_of_input: ");
     scanf("%d", &no_of_input);

     printf("enter %d value: ", no_of_input);
     for (int i = 0; i < no_of_input; i++)
     {
          scanf("%d", &value);
          insert(&list, value);
     }
     printf("unsorted list data\n");
     display(&list);

     sort(&list);
     printf("sorted list data\n");
     display(&list);
}
