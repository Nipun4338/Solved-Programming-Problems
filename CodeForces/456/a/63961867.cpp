#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a,b,c,d;
    cin>>a;
    pair<int,int>p[a];
    for(int i=0; i<a; i++)
    {
        cin>>b>>c;
        p[i].first=c;
        p[i].second=b;
    }
    sort(p,p+a);
    for(int i=0; i<a-1; i++)
    {
        if(p[i].second>p[i+1].second)
        {
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
}
