#include<stdio.h>
int main()
    {int a,b[100],i,c=0;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {scanf("%d",&b[i]);}
  for(i=0; i<a; i++)
  { if(b[i]==1)
{
c=0;
break;
}
if(b[i]==0)
{
c=1;
}}
if(c==1)
{printf("EASY\n");}
else if(c==0)
{printf("HARD\n");}
    return 0;
}