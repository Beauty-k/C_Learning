// data me student ka name or age hoga.
#include<stdio.h>
#include<stdlib.h>
typedef struct students_t{
    char name[10];
    int age;
    struct students_t *next;
}node;
typedef struct linkedlist_t{
    node *head;
    node *tail;
}linkedlist;
void initialise(linkedlist *list){
    list->head = NULL;
    list->tail = NULL;
}
void insert(int age,linkedlist *list){
    node *new_node = (node*)malloc(sizeof(node));
    //new_node->name[10] = student->name;
    new_node->age  = age;
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
            printf("%d\n",  temp->age);
            temp = temp->next;
        }
}
int main(){
    linkedlist list;
    initialise(&list);
    int no_of_students;
    //int size;
    char name[20];

    int age;
    
    printf("enter no_of_students : ");
    scanf("%d",&no_of_students);
    
       // printf("enter name %d of student:\n ",no_of_students);
        printf("enter age of %d student:\n ",no_of_students);
       
        
    for(int i = 0; i<no_of_students; i++){
        scanf("%s",&name[i]);
        scanf("%d",&age);
        insert(name,age,&list);
    }
    display(&list);
}