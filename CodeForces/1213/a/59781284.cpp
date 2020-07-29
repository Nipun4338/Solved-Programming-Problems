#include<bits/stdc++.h>
using namespace std;
//typedef long long ll;
 
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int a,b,c=0,d=0,sum=0;
    vector<int>v;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
        if(b%2==1)
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    if(c>d)
    {
        cout<<d<<endl;
    }
    else if(c<d)
    {
        cout<<c<<endl;
    }
    else
    {
        cout<<c<<endl;
    }
    return 0;
}