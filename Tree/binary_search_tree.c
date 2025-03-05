#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node_t{
    int data;
    struct node_t *next;
}node;
typedef struct tree_t{
    node *root;
}tree;
void init(tree *root){
    root->root = NULL;
}
int main(){
    int no_of_nodes;
}