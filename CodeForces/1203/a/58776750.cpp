#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string g;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c,flag;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        vector<int>v,v2;
        vector<int>v1;
        for(int j=0; j<b; j++)
        {
            cin>>c;
            v.push_back(c);
            v1.push_back(c);
        }
        sort(v1.begin(),v1.end());
        if(b>1)
        {
            c=v1[v.size()-2];
        }
        for(int j=0; j<b-1; j++)
        {
            int d=abs(v[j]-v[j+1]);
            if(d==c || d==1)
            {
                flag=0;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0 || b==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
