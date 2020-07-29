#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a,b,c,d,sum=0;
    cin>>a;
    while(a--)
    {
        cin>>b>>c>>d;
        if(c==0)
        {
            sum=0;
        }
        while(c>0 && d>0)
        {
            if(c-1>=0 && d-2>=0)
            {
                sum+=3;
            }
            else
            {
                break;
            }
            c--;
            d-=2;
        }
        while(b>0 && c>0)
        {
            if(b-1>=0 && c-2>=0)
            {
                sum+=3;
            }
            else
            {
                break;
            }
            b--;
            c-=2;
        }
        cout<<sum<<endl;
    sum=0;
    }
}
