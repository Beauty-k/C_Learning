#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Animal_t
{
    int id;
    char *type;
    struct Animal_t *next;
} animal;
typedef struct Animal_shelter_t
{
    animal *oldest;
    animal *newest;
} shelter;

int Animal_id = 0;

void init_shelter(shelter *Animal_shelter)
{
    Animal_shelter->newest = NULL;
    Animal_shelter->oldest = NULL;
}

void enqueue(shelter *Animal_shelter, char *name)
{
    animal *new_animal = (animal *)malloc(sizeof(animal));
    Animal_id = Animal_id + 1;
    new_animal->id = Animal_id;
    new_animal->type = name;
    new_animal->next = NULL;

    if (Animal_shelter->oldest == NULL)
    {
        Animal_shelter->oldest = new_animal;
        Animal_shelter->newest = new_animal;
    }
    else
    {

        animal *temp = Animal_shelter->newest;

        temp->next = new_animal;
        Animal_shelter->newest = new_animal;
    }
}
animal *dequeue_any(shelter *Animal_shelter)
{

    animal *temp = Animal_shelter->oldest;
    if (Animal_shelter->oldest == NULL)
    {
        return NULL;
    }
    else
    {
        Animal_shelter->oldest = temp->next;
        return temp;
    }
}
animal *dequeue_cat(shelter *Animal_shelter)
{

    animal *prev = NULL;
    animal *temp = Animal_shelter->oldest;
    if (Animal_shelter->oldest == NULL)
    {
        return NULL;
    }
    else
    {

        while (strcmp(temp->type, "cat") != 0)
        {
            prev = temp;
            temp = temp->next;
        }
        if (prev == NULL)
        {
            Animal_shelter->oldest = temp->next;
        }
        else
        {
            prev->next = temp->next;
        }

        return temp;
    }
}
animal *dequeue_dog(shelter *Animal_shelter)
{
    animal *prev = NULL;

    animal *temp = Animal_shelter->oldest;
    if (Animal_shelter->oldest == NULL)
    {
        return NULL;
    }
    else
    {
        while (strcmp(temp->type, "dog") != 0)
        {
            prev = temp;
            temp = temp->next;
        }
        if (prev == NULL)
        {
            Animal_shelter->oldest = temp->next;
        }
        else
        {
            prev->next = temp->next;
        }

        return temp;
    }
}
void display(shelter *Animal_shelter, char *users_choice)
{
    animal *dequeued_animal = NULL;
    if (strcmp(users_choice, "any") == 0)
    {
        dequeued_animal = dequeue_any(Animal_shelter);
        if (dequeued_animal != NULL)
        {
            printf("The animal you are adopting is: %s\n", dequeued_animal->type);
        }
    }
    else if (strcmp(users_choice, "dog") == 0)
    {
        dequeued_animal = dequeue_dog(Animal_shelter);
        if (dequeued_animal != NULL)
        {
            printf("The animal you are adopting is: %s\n", dequeued_animal->type);
        }
    }
    else if (strcmp(users_choice, "cat") == 0)
    {
        dequeued_animal = dequeue_cat(Animal_shelter);
        if (dequeued_animal != NULL)
        {
            printf("The animal you are adopting is: %s\n", dequeued_animal->type);
        }
    }
    else
    {
        printf("This animal is not available at our shelter.\n");
    }
    if (dequeued_animal != NULL)
    {
        free(dequeued_animal->type);
        free(dequeued_animal);
    }
}

int main()
{
    shelter Animal_shelter;
    init_shelter(&Animal_shelter);
    int no_of_animals;
    printf("enter no of animals in the shelter: ");
    scanf("%d", &no_of_animals);
    printf("enter name of animal: ");
    int i = 0;
    while (i < no_of_animals)
    {
        char *name = malloc(sizeof(char) * 10);
        scanf("%s", name);
        enqueue(&Animal_shelter, name);
        i++;
    }

    char users_choice[5];
    printf("enter choice of animal: ");
    scanf("%s", &users_choice);
    display(&Animal_shelter, users_choice);

    return 0;
}
