#include<stdio.h>
int main()
{
    char a[100],b[6]="hello";
    int i,j=0;
    scanf("%s",&a);
    for(i=0,j=0; j<5,a[i]!='\0'; i++)
    {
        if(a[i]==b[j])
        {
            j++;
        }
    }
    if(j==5)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}
