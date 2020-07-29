#include<bits/stdc++.h>

int main()
{
    int i,a,b,c,d,e,x=0;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d%d%d%d",&b,&c,&d,&e);
        if(b==29 && c==2)
        {
            while(d!=e){
            d++;
            if(d%4==0 && d%100!=0)
            {
                x++;
            }
            else if(d%400==0 && d%100==0)
            {
                x++;
            }
        }}
        else
        {
            x=e-d;
        }
        printf("Case %d: %d\n",i+1,x);
        x=0;
    }
    return 0;
}
