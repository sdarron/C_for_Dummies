# include <stdio.h>
# include <unistd.h>

int main()
{
    int start;
    int delay;
    
    do
    {
        printf("Please enter the number to start\n");
        printf("the countdown (1 to 100):");
        scanf("%d", &start);
    } while (start < 1 || start > 100);
    do
    {
        printf("T-minus %d\n", start);
        start--;
        //for(delay = 0; delay < 1000000000; delay++);
        sleep(2);
    } while (start > 0);
    printf("Zero!\nBlast off!\n");
    return (0);
}