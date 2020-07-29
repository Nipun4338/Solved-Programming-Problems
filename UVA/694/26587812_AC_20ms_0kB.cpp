#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0,e=0,f=0;
    while(cin>>a>>b)
    {
        c=a;
        f++;
        if(a<0 && b<0)
        {
            break;
        }
        else
        {
            while(c!=1 && c<=b)
            {
                d++;
                if(c%2==0)
                {
                    c=c/2;
                    //d++;
                }
                else if(c%2==1)
                {
                    c=(3*c)+1;
                    //d++;
                }
                e=c;
            }
            if(e==1)
            {
                d++;
            }
        cout<<"Case "<<f<<": "<<"A = "<<a<<", limit = "<<b<<", number of terms = "<<d<<endl;
        d=0;
        c=0;
        e=0;
        }
    }
    return 0;
}