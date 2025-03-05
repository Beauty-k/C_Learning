#include<stdio.h>
#include<stdlib.h>
void *hash[10];
typedef struct node_t{
    int value;
    struct node_t *next;
    
}node;
typedef struct hashing{
    node *head;
    node *tail;

}linkedlist;
void init(linkedlist *hash){
    hash->head = NULL;
    hash->tail = NULL;
    
}
node *create_new_node(linkedlist *hash,int value){
    node *new_node = (node*)malloc(sizeof(node));
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}
int generate_hashcode(int value){
    
    int keyword = value % 10;
    return keyword;
}
void insert(void *hash[],linkedlist *list,int value){
    node *new_node = create_new_node(list,value);
    int hashcode = generate_hashcode(value);
    

}

int main(){
    linkedlist list;
    int value;
    init(&list);

    int no_of_nodes;
    printf("enter no_of_nodes: ");
    scanf("%d",&no_of_nodes);
    printf("enter value to be inserted: ");
    for(int i = 0 ; i<no_of_nodes; i++){
        scanf("%d",&value);
        create_new_node(&list,value);

    }

}