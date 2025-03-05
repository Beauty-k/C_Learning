#include<stdio.h>
#include<string.h>
int main()
{

    struct family{
        int age;
        float salary;
        char name[30];
    }maa , papa , bhai , me;
    
    maa.age = 50;
    maa.salary = 30000.0;
    strcpy(maa.name , "Sumitra sinha") ;

    papa.age = 60;
    papa.salary = 80000.0;
    strcpy(papa.name, "Ram vinay sharma");

    bhai.age = 24;
    bhai.salary = 20000.0;
    strcpy(bhai.name, "vivek");

    me.age = 22;
    me.salary = 7000.0;
    strcpy(me.name, "Beauty");

    printf("%d\n",maa.age);
    printf("%f\n",maa.salary);
    printf("%s\n",maa.name);

    printf("%d\n",papa.age);
    printf("%f\n",papa.salary);
    printf("%s\n",papa.name);

    printf("%d\n",bhai.age);
    printf("%f\n",bhai.salary);
    printf("%s\n",bhai.name);

    printf("%d\n",me.age);
    printf("%f\n",me.salary);
    printf("%s\n",me.name);

    return 0;
}