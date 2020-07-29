#include<stdio.h>
int main()
{

int testCase, a, b;
scanf("%d", &testCase);
for(int i=1; i<=testCase; i++)
{
    scanf("%d %d", &a, &b);
    printf("%d\n", a+b);
}
}
