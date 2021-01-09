#include "stdio.h"

int main()
{  
    puts("Start typing.");
    puts("Press ~ then Enter to stop");
    while (getchar() != '~')
        ;
    return (0);
}