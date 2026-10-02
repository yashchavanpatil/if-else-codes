#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0)
        printf("The number is Zero");
    else if(n % 2 == 0)
        printf("The number is Even");
    else
        printf("The number is Odd");

    getch();
}