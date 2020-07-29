#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a;
    string b;
    cin>>a;
    while(a--)
    {
        cin>>b;
        vector<char>v;
        deque<int>v1,v2;
        for(int i=0; i<b.size(); i++)
        {
            v.push_back(b[i]);
            if(b[i]=='R')
            {
                v1.push_back(i+2);
            }
        }
        sort(v.begin(),v.end());
        if(v[0]==v[v.size()-1] && v[0]=='R')
        {
            cout<<1<<endl;
        }
        else if(v[0]==v[v.size()-1] && v[0]=='L')
        {
            cout<<v.size()+1<<endl;
        }
        else
        {
            v1.push_front(1);
            v1.push_back(v.size()+2);
            for(int i=0; i<v1.size()-1; i++)
            {
                //cout<<v1[i]<<" "<<v1[i+1]<<endl;
                v2.push_back(abs(v1[i+1]-v1[i]));
            }
            sort(v2.begin(),v2.end());
            cout<<v2[v2.size()-1]<<endl;
        }
    }
}
