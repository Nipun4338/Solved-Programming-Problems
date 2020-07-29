#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c=0,e=0,d=0,f=0,g=1;
    cin>>b;
    for(int i=0; i<b; i++)
    {
        cin>>a;
        c=a;
        while(c!=0)
        {
            c=c/10;
            e++;
        }
        c=0;
        c=a;
        while(c!=0)
        {
            f=c%10;
            c=c/10;
            for(int j=0; j<e; j++)
            {
                g=g*f;
            }
            d=d+g;
            f=0;
            g=1;
        }
        if(d==a)
        {
            cout<<"Armstrong"<<endl;
        }
        else
        {
            cout<<"Not Armstrong"<<endl;
        }
        c=0;
        d=0;
        e=0;
    }
    return 0;
}