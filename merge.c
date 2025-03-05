#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

typedef struct node_t
{
    int data;
    struct node_t *next;
} node;

typedef struct linked_list_t
{
    node *head, *tail;
} linked_list;

void list_init(linked_list **list);

/*=======FEEL FREE TO ADD FUNCTION IF YOU NEED =======*/

int insert_node(linked_list *list, int i)
{
    // printf("in insert\n");
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = i;
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
void sort_list(linked_list *list)
{
    node *temp = list->head;
    while (temp != NULL)
    {
        node *current = temp->next;
        while (current != NULL)
        {

            if (temp->data > current->data)
            {
                int temperory = temp->data;
                temp->data = current->data;
                current->data = temperory;
            }
            current = current->next;
        }
        temp = temp->next;
    }
}

linked_list *merge_while_sorting(linked_list *list1, linked_list *list2)
{
    sort_list(list1);
    sort_list(list2);
    linked_list *merged_list;
    list_init(&merged_list);
    node *list1_temp = list1->head;
    node *list2_temp = list2->head;
    while (list1_temp != NULL && list2_temp != NULL)
    {
        if (list1_temp->data < list2_temp->data)
        {
            insert_node(merged_list, list1_temp->data);
            list1_temp = list1_temp->next;
        }
        else
        {
            insert_node(merged_list, list2_temp->data);
            list2_temp = list2_temp->next;
        }
    }
    while (list1_temp != NULL)
    {
        insert_node(merged_list, list1_temp->data);
        list1_temp = list1_temp->next;
    }
    while (list2_temp != NULL)
    {
        insert_node(merged_list, list2_temp->data);
        list2_temp = list2_temp->next;
    }
    return merged_list;
}

void free_list(linked_list **list)
{
    node *temp = (*list)->head;
    node *temp2;
    while (temp != NULL)
    {
        temp2 = temp;
        temp = temp->next;
        free(temp2);
    }
}

/*=======DO NOT MODIFY THE CODE BELOW =======*/
void list_init(linked_list **list)
{
    *list = malloc(sizeof(linked_list));
    (*list)->head = NULL;
    (*list)->tail = NULL;
}

void list_display(linked_list *list)
{
    node *current = list->head;
    printf("Sorted List : ");
    while (current != NULL)
    {
        printf("%d,", current->data);
        current = current->next;
    }
    printf("\n");
}

char *readline()
{
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char *data = malloc(alloc_length);

    while (true)
    {
        char *cursor = data + data_length;
        char *line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line)
        {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n')
        {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data)
        {
            data = NULL;

            break;
        }
    }

    if (data[data_length - 1] == '\n')
    {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data)
        {
            data = NULL;
        }
    }
    else
    {
        data = realloc(data, data_length + 1);

        if (!data)
        {
            data = NULL;
        }
        else
        {
            data[data_length] = '\0';
        }
    }

    return data;
}

char *ltrim(char *str)
{
    if (!str)
    {
        return NULL;
    }

    if (!*str)
    {
        return str;
    }

    while (*str != '\0' && isspace(*str))
    {
        str++;
    }

    return str;
}

char *rtrim(char *str)
{
    if (!str)
    {
        return NULL;
    }

    if (!*str)
    {
        return str;
    }

    char *end = str + strlen(str) - 1;

    while (end >= str && isspace(*end))
    {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

int parse_int(char *str)
{
    char *endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0')
    {
        exit(EXIT_FAILURE);
    }

    return value;
}

int main(int argc, char *argv[])
{
    linked_list *list1;
    linked_list *list2;
    list_init(&list1);
    list_init(&list2);

    int list1_count = parse_int(ltrim(rtrim(readline())));
    for (int i = 0; i < list1_count; i++)
    {
        int l_item = parse_int(ltrim(rtrim(readline())));

        insert_node(list1, l_item);
    }

    int list2_count = parse_int(ltrim(rtrim(readline())));
    for (int i = 0; i < list2_count; i++)
    {
        int l_item = parse_int(ltrim(rtrim(readline())));

        insert_node(list2, l_item);
    }

    linked_list *sorted_list;
    sorted_list = merge_while_sorting(list1, list2);

    list_display(sorted_list);
    free_list(&list1);
    free_list(&list2);
    free_list(&sorted_list);
    return 0;
}