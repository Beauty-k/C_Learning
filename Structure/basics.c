#include<stdio.h>

int main()
{

    struct students
    {
        char name ;
        int age;
        float marks;

    };
    struct students A;
    A.name = 'A';
    A.age = 22;
    A.marks = 8.58;

    struct students B;
    B.name = 'B';
    B.age = 21;
    B.marks = 8.00;

    struct students C;
    C.name = 'C';
    C.age = 23;
    C.marks = 9.00;

    printf("%c\n", A.name);
    printf("%d\n", A.age);
    printf("%f\n", A.marks);

    printf("%c\n", B.name);
    printf("%d\n", B.age);
    printf("%f\n", B.marks);

    printf("%c\n", C.name);
    printf("%d\n", C.age);
    printf("%f\n", C.marks);

    return 0;
}