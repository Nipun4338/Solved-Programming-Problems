#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a;
    vector<int>v;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
    }
    cin>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c>>d;
        if(c==1)
        {
            v[1]=v[1]+(v[0]-d);
            v[0]=0;
        }
        else if(c==a)
        {
            v[a-2]=v[a-2]+d-1;
            v[a-1]=0;
        }
        else
        {
            v[c-2]=v[c-2]+d-1;
            v[c]=v[c]+v[c-1]-d;
            v[c-1]=0;
        }
    }
    for(int i=0; i<a; i++)
    {
        cout<<v[i]<<endl;
    }
}
