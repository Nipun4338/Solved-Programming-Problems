#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()

int main()
{
    ll a,b,c;
    cin>>a;
    c=a;
    deque<ll>v1,v2;
    //v1.push_back(0);
    ll temp=0,temp2=0;
    while(a--)
    {
        cin>>b;
        temp2=max(temp2,temp);
        temp=temp2+b;
        v1.push_back(temp);
    }

    for(int i=0; i<c; i++)
    {
        cout<<v1[i];
        if(i!=c-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
}
