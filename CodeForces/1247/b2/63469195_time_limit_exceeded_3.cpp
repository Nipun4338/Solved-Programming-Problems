#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a,b,c,d,e;
    cin>>a;
    while(a--)
    {
        cin>>b>>c>>d;
        vector<int>v,v1;
        for(int i=0; i<b; i++)
        {
            cin>>e;
            v.push_back(e);
            //v1.push_back(e);
        }
        for(int i=0; i<b-d+1; i++)
        {
            set<int>s(v.begin()+i,v.begin()+i+d);
            v1.push_back(s.size());
            //s.erase();
        }
        sort(v1.begin(),v1.end());
        cout<<v1[0]<<endl;
    }
}
