#include<stdio.h>
#include<stdlib.h>
typedef struct node_t{
    int data;
    struct node *next;
}node;
node *hash[10] = {NULL};
node *create_node(int value){
    node *new_node = (node*)malloc(sizeof(node));
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}
int generate_key(int value){
    int key = value % 10;
    return key;
}
int hash_table(int value){
    node *new_node = create_node(value);
    int hashcode = generate_key(value);
    if(hash[hashcode] == NULL){
        hash[hashcode] = new_node;
    }
    else
    {
        node *temp = hash[hashcode];
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp = new_node;
    }
    return new_node->data;
}

int main(){
int no_of_inputs;
int value;
printf("enter no of inputs: ");
scanf("%d",&no_of_inputs);
printf("enter value for the hash: ");
for(int i = 0; i< no_of_inputs; i++){
    scanf("%d",&value);
    int result = hash_table(value);
    printf("%d\n",result);
}

}