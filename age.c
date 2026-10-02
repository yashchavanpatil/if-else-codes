#include<stdio.h>
#include<conio.h>

void main()
{
    int age;
    clrscr();

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age < 13)
        printf("You are a Child");
    else if(age < 18)
        printf("You are a Teenager");
    else if(age < 60)
        printf("You are an Adult");
    else
        printf("You are a Senior Citizen");

    getch();
}