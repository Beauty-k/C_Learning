#include <stdio.h>
int main()
{
    int input;
    int ans1, ans2, ans3;
    int point1, point2, point3;
    int point01, point02, point03;
    printf("welcome to game\n\n");
    printf(">press 7 to start game: \n");
    printf(">press 0 to quit game: \n");
    scanf("%d", &input);
    if (input == 7)
    {
        printf("your game has been started\n");
    }
    else if (input == 0)
    {
        printf("your game has been ended\n");
    }
    else
    {
        printf("invalid number\n");
    }

    if (input == 7)
    {
        printf("1) How many infinity stones are there: \n\n");
        printf("1)3\n");
        printf("2)5\n");
        printf("3)6\n");
        printf("4)10\n");
        printf("enter your answer: ");
        scanf("%d", &ans1);
        if (ans1 == 3)
        {
            printf("your answer is correct\n");
            point1 = 5;
            printf("you have scored 5 point\n");
        }
        else
        {
            printf("your answer is incorrect\n");
            point01 = 0;
            printf("you have scored %d point\n", point01);
        }
        printf("2)What is the only food that cannot go bad?\n\n");
        printf("1) dark chocolate");
        printf("2) peanut butter");
        printf("3) veggies");
        printf("4) honey");
        printf("enter your answer: \n");
        scanf("%d", &ans2);
        if (ans2 == 4)
        {
            printf("your answer is correct!\n");
            point2 = 5;
            printf("your answer is correct!\n");
            printf("you have scored %d point\n", point2);
        }
        else
        {
            printf("your answer is incorrect!\n");
            point02 = 0;
            printf("you have scored %d point\n", point02);
        }
        printf("2)Which 90s boy band member bought Myspace in 2011?\n\n");
        printf("1) Nick Lachey");
        printf("2) Justin Timberlake");
        printf("3) Shawn Stockman");
        printf("4) AJ McLean");
       
        printf("enter your answer: \n");
        scanf("%d", &ans3);
        if(ans3 == 2){
            printf("your answer is correct!\n");
            point3 = 5;
            printf("you have scored %d point\n", point3);

        }else{
            printf("your answer is incorrect!\n");
            point03 = 0;
            printf("you have scored %d point\n", point03);

        }
    }
    return 0;
}
