#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    float a;
    do
    {
        a = get_float("Change owed: ");
    }
    while (a < 0.0);  //while loop
    int b = round(a * 100);
    int sum = 0;
    sum += (b / 25) + ((b % 25) / 10) + (((b % 25) % 10) / 5) + (((b % 25) % 10) % 5); // adding coins
    printf("%d\n", sum); //printing
}
