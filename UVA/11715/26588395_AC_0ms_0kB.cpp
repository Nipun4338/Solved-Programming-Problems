#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d,s=0,ac=0,t=0,u=0,v=0;
    int x=0;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        else{
            cin>>b>>c>>d;
            if(a==1)
            {
                x++;
                s=0.5*(b+c)*d;
                ac=(c-b)/d;
                printf("Case %d: %.3f %0.3f\n",x,s,ac);
            }
            else if(a==2)
            {
                x++;
                s=(pow(c,2)-pow(b,2))/(2*d);
                t=(c-b)/d;
                printf("Case %d: %.3f %0.3f\n",x,s,t);
            }
            else if(a==3)
            {
                x++;
                v=sqrt(pow(b,2)+(2*c*d));
                t=(v-b)/c;
                printf("Case %d: %.3f %0.3f\n",x,v,t);
            }
            else if(a==4)
            {
                x++;
                u=sqrt(pow(b,2)-(2*c*d));
                t=(b-u)/c;
                printf("Case %d: %.3f %0.3f\n",x,u,t);
            }
            s=0;
            ac=0;
            t=0;
            v=0;
            u=0;
            }
        }
    return 0;
}