#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* left; 
    struct node* right;
} node;
node* create_node( int value, node *tnode){
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = value;
    new_node->right = NULL;
    new_node->left = NULL;
    return new_node;
}

node* insert(int value, node *tnode)
{
  
    
 if (tnode == NULL)
    {
        tnode = create_node(value, tnode);
        return tnode;
    }
    node *temp = tnode;
    if (temp->data > value)
    {
        temp->left = insert(value, temp->left);
    }
    else
    {
        temp->right = insert(value, temp->right);
    }
    
}

void display(node* tnode)
{
   if(tnode==NULL)
   {
       return;
   }
   display(tnode->left);
   printf("%d ", tnode->data);
   display(tnode->right);
}

int main() {
    int i, num, value;
    node *root = NULL;
    scanf("%d", &num);
    for (i = 0; i < num; i++){
        scanf("%d",&value);
        root = insert(value, root);
    }
    display(root);
    return 0;
}