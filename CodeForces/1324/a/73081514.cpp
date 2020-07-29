#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int a,b,c;
    cin>>a;
    while(a--)
    {
        cin>>b;
        vector<int>v,v1;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            v.push_back(c);
            v1.push_back(c);
        }
        set<int>s(v1.begin(),v1.end());
        sort(v1.begin(),v1.end());
        if(v1[0]==v1[v1.size()-1])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            vector<int>v3(s.begin(),s.end());
            vector<int>v4;
            for(int i=0; i<v3.size()-1; i++)
            {
                v4.push_back(v3[i+1]-v3[i]);
            }
            int flag=0;
            for(int i=0; i<v4.size(); i++)
            {
                if(v4[i]%2!=0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
}