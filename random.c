#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rnd(int range);
void seedrnd(void);

int main()
{
    int x;
    seedrnd();
    puts("Behold! 100 Random Numbers!");
    for (x = 0; x < 100; x++)
        printf ("%i\t", rnd(6));
   // printf("\nRAND_MAX is equal to %u\n", RAND_MAX);
    return (0);
}

int rnd(int range)
{
    return(rand()%range + 1);
}

void seedrnd(void)
{
    srand((unsigned)time(NULL));
}