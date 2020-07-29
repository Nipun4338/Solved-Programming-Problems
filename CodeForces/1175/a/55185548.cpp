#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,sum=0,d=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c;
        d=b;
        while(d!=0)
        {
            if(d%c!=0)
            {
                sum=sum+(d%c);
                d=d-(d%c);
                //cout<<sum<<" "<<d<<endl;
            }
            if(d%c==0)
            {
                sum++;
            }
            d=d/c;
        }
        cout<<sum-1<<endl;
        sum=0;
        d=0;
    }
    return 0;
}
