#include <stdio.h>
#include <stdlib.h>
typedef struct node_t
{
    int data;
    struct node_t *left;
    struct node_t *right;
} node;
typedef struct tree_t
{
    node *root;
} tree;
void init(tree *search)
{
    search->root = NULL;
}
node *create_node(int value, tree *search)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = value;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
void insert(int value, tree *search)
{
    // printf("in insert\n");
    node *new_node = create_node(value, search);
    // printf("new_node - %d\n", new_node->data);
    if (search->root == NULL)
    {
        // printf("new_node2 - %d\n", new_node->data);
        search->root = new_node;
        return;
    }
    node *temp = search->root;
    while (temp->left != NULL || temp->right != NULL)
    {
        if (new_node->data > temp->data)
        {
            temp = temp->right;
            // printf("right - %d\n", temp->data);
        }
        else
        {
            temp = temp->left;
            // printf("left - %d\n", temp->data);
        }
    }
    if (new_node->data >= temp->data)
    {
        temp->right = new_node;
        // printf("temp->data right- %d\n", temp->data);
    }
    else
    {
        temp->left = new_node;
        // printf("temp->data left - %d\n", temp->data);
    }
}

void display(node *root)
{
    if(root == NULL){
        return;
    }
    node *temp = root;
    display(temp->left);
    printf("%d ", temp->data);
    display(temp->right);
}

int main()
{
    tree search;
    init(&search);
    int no_of_nodes;
    int value;
    printf("enter no of inputs: ");
    scanf("%d", &no_of_nodes);
    printf("enter value to be inserted: ");
    for (int i = 0; i < no_of_nodes; i++)
    {
        scanf("%d", &value);
        insert(value, &search);
    }

    display(search.root);
}