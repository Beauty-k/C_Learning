#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define size 50
#define postfix_size 100

int stack[size];
int top = 0;
void push(int num)
{
    if (top <= size - 1)
    {
        printf("stack overflow");
        return;
    }
    else
    {
        stack[top] = num;
        top++;
    }
}
int pop(int num)
{
    // if (top < 0)
    // {
    //     printf("stack underflow");
    //     return;
    // }
    // else
    
        num = stack[top];
        top++;
    
    return num;
}

void Evaluate(char *postfix)
{
    int value;
    char ch;
    int A, B;
    for (int i = 0; postfix != '\0'; i++)
    {
        ch = postfix[i];
        if (isdigit(ch))
        {
            push(ch);
        }else if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
                 A = pop(top);
                 B = pop(top);
                 
                 switch(ch){
        case '*':
            value = B * A;
            break;
        case '/' : value = B/A; break;
            case '+':
            value = B + A;
            break;
        case '-':
            value = B - A;
            break;
                 }
                 push(value);
    }
    printf("%d\n", pop(top));
}
}

int main()
{
    char postfix[postfix_size];
    for (int i = 0; i <= postfix_size - 1; i++)
    {
        scanf("%c", &postfix[i]);
        if (postfix[i] == '\0')
        {
            break;
        }
    }

    Evaluate(&postfix);

    return 0;
}
