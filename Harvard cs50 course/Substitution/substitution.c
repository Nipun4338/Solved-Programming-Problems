#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

//This is my code
//Thanks to Almighty
//Earth is beautiful

//This is my code
//Thanks to Almighty
//Earth is beautiful

//This is my code
//Thanks to Almighty
//Earth is beautiful

//This is my code
//Thanks to Almighty
//Earth is beautiful

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int s = strlen(argv[1]);
        if (s != 26)
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }
        char a = 'a';
        char x1[27], x2[27], x3[27];
        for (int i = 0; i < 26; i++)
        {
            x1[i] = a;
            x3[i] = a;
            a++;
        }
        for (int i = 0; i < 26; i++)
        {
            int flag1 = 0;
            for (int j = 0; j < 26; j++)
            {
                if (tolower(argv[1][i]) == x3[j])
                {
                    flag1 = 1;
                    x3[j] = '1';
                    break;
                }
            }
            if(!flag1)
            {
                printf("Key must contain 26 characters.\n");
                return 1;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            x2[i] = tolower(argv[1][i]);
            if (x2[i] < 'a' || x2[i] > 'z')
            {
                printf("Key must contain 26 characters.\n");
                return 1;
            }
        }
        string x = get_string("plaintext: ");
        int s1 = strlen(x);
        printf("ciphertext: ");
        for (int i = 0; i < s1; i++)
        {
            int flag = 0;
            for (int j = 0; j < 26; j++)
            {
                if (x1[j] == tolower(x[i]))
                {
                    if (!isupper(x[i]))
                    {
                        printf("%c", x2[j]);
                    }
                    else
                    {
                        printf("%c", toupper(x2[j]));
                    }
                    flag = 0;
                    break;
                }
                else
                {
                    flag = 1;
                }
            }
            if (flag)
            {
                printf("%c", x[i]);
            }
        }
        printf("\n");
    }
    else if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
}