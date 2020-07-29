#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,s=0,area=0;
    float g=0,h=0;
    while(cin>>a>>b>>c)
    {
        s=(a+b+c)/2;
        area=(sqrt(s*(s-a)*(s-b)*(s-c)));
        area=area*(4/3.0);

        if(area>0)
        {
            printf("%.3f\n",area);
        }
        else
        {
            area=-1;
            printf("%.3f\n",area);
        }
        s=0;
        area=0;
    }
    return 0;
}