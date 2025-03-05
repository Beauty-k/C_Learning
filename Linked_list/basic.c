#include<stdio.h>
#include<stdlib.h>
// creating node

typedef struct node_t{
    int data;
    struct node_t *next;
}node;
typedef struct linkedlist_t{
    node *head ;
    node *tail ;
}linkedlist;
void initialise(linkedlist *list){
    list->head = NULL;
    list->tail = NULL;
}
void insert(int value, linkedlist *list){
    
}
int main(){ 
linkedlist list;
initialise(&list);
}