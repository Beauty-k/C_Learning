#include <stdio.h>
#include<stdlib.h>
typedef struct node_t{
    int data;
    struct node_t *next;
}node;
node *hash[10] = {NULL};
int generate_key(int value)
{
    int key = value % 10;
    
    return key;
}
node* create_node(int value){
    node *new_node = (node*)malloc(sizeof(node));
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}
int hash_table(int value)
{
    // create key
    int key = generate_key(value);
    // make node
    node *new_node = create_node(value);
    if(hash[key] == NULL){
        hash[key] =  new_node;
    }else{
        node *temp = hash[key];
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp = new_node;
    }
    return new_node->data;
}
int main()
{
    int no_of_inputs;
    printf("enter no_of_inputs: ");
    scanf("%d",&no_of_inputs);

    int value;
    printf("enter %d values for hashing: ",no_of_inputs);
    for(int i = 0; i<no_of_inputs; i++)
    {
        scanf("%d",&value);
       int result =  hash_table(value);
    //    int key = generate_key(value);
    //     printf("%d\n",key);

        printf("%d\n",result);
    }
    
    return 0;
}