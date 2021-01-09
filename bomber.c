#include <stdio.h>

#define COUNT 200000000

void dropBomb(void);
void delay(void);

int deaths;

int main(void)
{
    char x;

    deaths = 0;
    for(;;)
    {
        printf("Press ~ then Enter to quit\n");
        printf("Press Enter to drop the bomb:");
        x = getchar();
        fpurge(stdin);
        if (x == '~')
        {
            break;
        }
        dropBomb();
        printf("%d people killed!\n", deaths);
    }
    return (0);
}

void dropBomb(void)
{
    int x;
    for (x = 20; x > 1; x--)
    {
        puts("          *");
        delay();
    }
    puts("        BOOM!");
    deaths+=1500;
}

void delay(void)
{
    long int x;
    for (x = 0; x < COUNT; x++)
    ;
}