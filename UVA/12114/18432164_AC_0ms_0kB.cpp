#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long int a,b,i=0,d=0,e=0;
    long double c;
    while(1)
    {
        cin>>a>>b;
        if(a==0 && b==0)
        {
            break;
        }
        else
        {
            d=b-1;
            e=a-1;
            i++;
            if(e==0)
            {
                cout<<"Case "<<i<<": :-\\"<<endl;
            }
            else
            {
                c=d/e;
                if(c==1 || c>1)
                {
                    cout<<"Case "<<i<<": :-|"<<endl;
                }
                else if(c<1)
                {
                    cout<<"Case "<<i<<": :-("<<endl;
                }
            }
            c=0;
        }
    }
    return 0;
}
