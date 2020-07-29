#include<stdio.h>
int main()
{
 int a, b, area, perimeter;
 scanf("%d%d", &a, &b);
 area=a*b;
 perimeter=(a+b)*2;
 printf("%d %d\n", area, perimeter);
 return 0;
}