#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a;
    do
    {
        a = get_int("Height: ");
    }
    while (a < 1 || a > 8); //do-while loop
    for (int i = 0; i < a; i++) //for loop
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            printf(" "); //printing
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n"); //new line
    }
}
