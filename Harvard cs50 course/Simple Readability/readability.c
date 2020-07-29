#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    string x = get_string("Text: ");
    int a = strlen(x);
    float b = 0, c = 0, d = 0;
    for (int i = 0; i < a; i++)
    {
        if (x[i] == ' ')
        {
            b++;        //word counting
        }
        else if (x[i] >= 'a' && x[i] <= 'z')
        {
            c++;    //letter counting
        }
        else if (x[i] >= 'A' && x[i] <= 'Z')
        {
            c++;     //letter
        }
        else if (x[i] == '.' || x[i] == '!' || x[i] == '?')
        {
            d++;  //sentence counting
        }
    }
    b++;
    
    c = (c / b) * 100;
    d = (d / b) * 100;
    float e = (0.0588 * c) - (0.296 * d) - 15.8;      //calculating float
    if (e >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (e < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %.0f\n", e);
    }
    
}