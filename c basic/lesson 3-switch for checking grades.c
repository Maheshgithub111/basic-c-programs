#include<stdio.h>
int main ()
{
char grade;

printf("\n Enter your Grade: ");
scanf("%c", &grade);

switch (grade)
{
case 'A':
printf("perfect\n");
    break;

    case 'B':
    printf("You did well\n");
    break;

    case 'C':
    printf("Not bad\n");
    break;

    case 'D':
    printf("Try harder next time.\n");
    break;

default:
printf("Please enter a vaild  grade.\n");
    break;
}

    return 0;
}