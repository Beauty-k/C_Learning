#include<stdio.h>
#include<stdlib.h>

typedef struct node_t{
    int data;
    struct node_t *next;
}node;
node *hash[10] = {NULL};
int generate_key(int value){
    int key = value % 10;
    return key;
}
node *create_node(int value){
    node *new_node = (node*)malloc(sizeof(node));
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}



int hashtable(int value){
    int key = generate_key(value);
    node *new_node = create_node(value);
    
    if(hash[key] == NULL){
        hash[key] = new_node;
    }else{
        node *temp = hash[key];
        if(temp->next != NULL){
            temp = temp->next;
        }
        temp = new_node;
    }

    return new_node->data;
}
int main(){
int no_of_input;
printf("enter a no_of_input: ");
scanf("%d",&no_of_input);

int value;
printf("enter value for hashing: ");
for(int i = 0; i<no_of_input; i++){
    scanf("%d",&value);
    int result = hashtable(value);
    printf("Hashing result is: %d\n",result);
}


}