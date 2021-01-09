#include <stdio.h>

int main()
{
    char a, b;
    printf("Which character is greater?\n");
    printf("Type a singl character: ");
    a = getchar();
    fpurge(stdin);
    printf("Type another character: ");
    b = getchar();
    if (a > b)
        printf("'%c' is greater than '%c'!\n", a, b);
    else if (b > a)
        printf("'%c' is greater then '%c'!\n", b, a);
    else
        printf("Next time, don't type the same character twice.");
    return (0);
}