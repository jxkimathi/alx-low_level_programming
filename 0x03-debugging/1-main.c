#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;
       /*causes the code to go on an infinite loop*/
       	while (i < 10)
        {
                putchar(i);
        }
       /*infinite loop*/
       	printf("Infinite loop avoided! \\o/\n");

        return (0);
}
