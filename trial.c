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
int sort(linkedlist *list)
{
    node *temp = list->head;
    // node *i = temp;
    // node *j = temp->next;
    while (temp != NULL)
    {
        while (temp != NULL)
        {
            temp = temp->next;
            if (temp->data > temp->next->data)
            {
                int temperory = temp->data;
                temp->data = temp->next->data;
                temp->next->data = temperory;
            }
            // temp = temp->next;
        }
        temp = temp->next;
    }
    return list;
}

int previous_value(int user_value, linkedlist *list)
{
    node *temp = list->head;
    
    while (temp != NULL)
    {
        
      
        if (temp->next->data == user_value)
        {
            if (temp == list->head)
            {
                printf("this is first node of list");
                return 0;
            }
            return temp->data;
        }
        temp = temp->next;
    }
    return temp->data;

    
}
int next_value(int user_value, linkedlist *list)
{
    node *temp = list->head;

    while (temp != NULL)
    {
        if (temp->data == user_value)
        {
            if (temp->next == NULL)
            {
                printf("this is last value in the list\n");
                return 1;
            }
            else
            {
                return temp->next->data;
            }
        }
        temp = temp->next;
    }
    printf("Value does not exist\n");
    return 0;
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
    // printf("enter your specific value: ");
    // scanf("%d", &user_value);
    // int n_value = next_value(user_value, &list);
    // printf("%d\n", n_value);
    // int p_value = previous_value(user_value,&list);
    display(&list);
    linkedlist *sorted_list = sort(&list);
    display(sorted_list);
}