// Objective: Implement a C program to handle user input for adding data to a linked list.
//  The program should prompt the user to specify the number of data items to add,
//   followed by the actual data to be inserted into the linked list. 
//   Ensure that your code follows the coding style discussed in the session.

#include<stdio.h>
#include<stdlib.h>
typedef struct node_t{
    int data;
    struct node_t *next;
}node;
typedef struct linkedlist_t{
     node *head;
     node *tail;
}linkedlist;
void initialize(linkedlist *list ){
    list->head = NULL;
    list->tail = NULL;
}

void insert(int value,linkedlist *list){
    node *new_node = malloc(sizeof(node));
     
    new_node->data = value;
    new_node->next = NULL;
    if(list->head == NULL){
        list->head = new_node;
        list->tail = new_node;
    }else{
        node *temp = list->head;
       while(temp->next != NULL){
            temp = temp->next;
       }
       temp->next = new_node;
       list->tail = new_node;
    }
}
void display(linkedlist *list){
    node *temp = list->head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    int no_of_inputs;
    int data;
   // int item = 5;
    linkedlist list;
    initialize(&list);
    printf("enter no of data to insert: ");
    scanf("%d", &no_of_inputs);
    printf("enter any %d integers: ", no_of_inputs);
    for(int i = 1; i<=no_of_inputs; i++){
      scanf("%d",&data);
      insert(data,&list);
    }
    printf("%d\n",list.head->next->next->data );
   // display(&list);
    

}