#include <stdio.h>

int main(void)
{
    char key;
    puts("Type your favorite keybord character:");
    key = getchar ();
    printf("Your favorite character is %c!\n", key);
    return (0);
}