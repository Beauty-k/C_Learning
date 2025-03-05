#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max_size 100
int stack[max_size];
char postfix_expression[max_size];

int top = -1;
void push(int value)
{
    if (top == max_size)
    {
        printf("stack overflow\n");
    }
    else
    {
        top++;
        stack[top] = value;
    }
    return;
}
int pop()
{
    if (top == -1)
    {
        printf("stack underflow\n");
        return 0;
    }
    else
    {
        int value = stack[top];
        top--;
        return value;
    }
}
int change_to_int(char element){
    int num = 0;
    //for(int i = 0; element != ' '; i++){
    num = num * 10 +(element - '0');
    return num;
   // }

}
int is_digit(char c){
    if(c >= '0' && c ,= '9'){
        return 1;
    }else{
        return 0;
    }
}

int evaluate_postfix(char *postfix_expression)
{
    int value ,value1, value2, result;
    for (int i = 0; postfix_expression[i] != '\0'; i++)
    {
        switch (postfix_expression[i])
        {
        case '*':
            value2 = pop();
            value1 = pop();
            result = value2 * value1;
            push(result);
            if(top < 1){
                return 0;
            }
            break;

        case '/':
            value2 = pop();
            value1 = pop();
            result = value2 / value1;
            push(result);
            if(top < 1){
                return 0;
            }
            break;

        case '+':
            value2 = pop();
            value1 = pop();
            result = value2 + value1;
            push(result);
            if(top < 1){
                return 0;
            }
            break;

        case '-':
            value2 = pop();
            value1 = pop();
            result = value2 - value1;
            push(result);
            if(top < 1){
                return 0;
            }
            break; 

        default:
            for(int i = 0; postfix_expression[i] != ' '; i++){
            int value = change_to_int(postfix_expression[i]);
            push(value);       
            }
        }

    }

}

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    printf("enter postfix expression: ");
    scanf("%[^\n]*c", &postfix_expression);
    
    int result =    evaluate_postfix(postfix_expression);
    printf("%s\n",result);

    return 0;
}
