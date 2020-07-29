#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a;
    deque<int>v;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
    }
    int x=0,y=0;
    for(int i=0; i<a; i++)
    {
        int temp;
        if((i+1)%2!=0)
        {
            temp=max(v[0],v[v.size()-1]);
            x+=max(v[0],v[v.size()-1]);
            v.erase(std::remove(v.begin(),v.end(),temp),v.end());
        }
        else
        {
            temp=max(v[0],v[v.size()-1]);
            y+=max(v[0],v[v.size()-1]);
            v.erase(std::remove(v.begin(),v.end(),temp),v.end());
        }
        //cout<<x<<" "<<y<<endl;
    }
    cout<<x<<" "<<y<<endl;
}
