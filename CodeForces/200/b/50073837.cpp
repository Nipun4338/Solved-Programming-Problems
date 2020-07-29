#include<bits/stdc++.h>

int main()
{
    int a,i,b;
    double c=0,d=0;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&b);
        c=c+b;
    }
    d=c/a*1.0;
    printf("%.12f\n",d);
    return 0;
}
