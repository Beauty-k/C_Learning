#include<stdio.h>
#include<stdlib.h>
typedef struct thread_t
{
    int data;
    int priority;
    struct thread_t *next;
}thread;

typedef struct pqueue_t
{
    thread *front;
    thread *rear;
}pqueue;
void init(pqueue *queue){
    queue->front = NULL;
    queue->rear;
}
thread* create_node(pqueue *queue,int value, int priority){
    thread *new_thread = (thread*)malloc(sizeof(thread));
    new_thread->data = value;
    new_thread->priority = priority;
    new_thread->next = NULL;
    return new_thread;
}
void insert(pqueue *queue,int value, int priority){
    thread *new_thread = create_node(queue,value,priority);
    if(queue->front == NULL){
        queue->front = new_thread;
        queue->rear = new_thread;
    }else{
        thread *temp = queue->front;
        while(temp->next ){
            temp = temp->next;
        }
        temp->next = new_thread;
    }
   
}
thread *p_thread_s(pqueue *queue){
    thread *temp = queue->front;
    thread *prev_thread = NULL;
    int priority = temp->priority;
    while(temp != NULL){
        if(temp->priority < priority){
            priority = temp->priority;
            prev_thread = temp;
            temp = temp->next;
        }
        temp = temp->next;
    }
    if(prev_thread == NULL){
        queue->front = temp->next;
    }else if(temp->next == NULL){
        prev_thread->next = NULL;
        queue->rear = prev_thread; 
    }else{
        prev_thread->next = temp->next;
    }
    return temp;
} 
void display(pqueue *queue){
    thread *temp = queue->front;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}
int main(){
    pqueue queue;
    init(&queue);
    int no_of_inputs;
    int value;
    int priority;
    printf("enter no of inputs: ");
    scanf("%d", &no_of_inputs);

    printf("enter value to be inserted and priority associated: ");
    for (int i = 0; i < no_of_inputs; i++)
    {
        scanf("%d %d", &value, &priority);
        insert(&queue, value,priority);
    }
   
    display(&queue);
   
    //display(&q_thread);
    return 0;
}