#include <stdio.h>
#include <stdlib.h>

int marks_summation(int *marks, int number_of_students, char gender)
{
    int sum = 0;
    for (int i = 0; i < number_of_students  ; i+=2)
    {
        if (gender == 'b')
        {
            sum = sum + marks[i]; 
        }
        else 
        {
            sum = sum + marks[i + 1];
            
        }
    }

    return sum;
}
int main()
{
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *)malloc(number_of_students * sizeof(int));

    for (int student = 0; student < number_of_students; student++)
    {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}