#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,flag=0;
    string x;
    cin>>x;
    vector<int>v;
    a=x.size()-1;
    for(int i=0; i<x.size(); i++)
    {
        if(x[i]=='(' && a>=0 && i!=x.size()-1)
        {
            for(int j=a; j>i; j--)
            {
                if(x[j]==')')
                {
                    flag=1;
                    v.push_back(j+1);
                    v.push_back(i+1);
                    a=j-1;
                    break;
                }
            }
        }
    }
    sort(v.begin(),v.end());
    cout<<flag<<endl;
    if(flag)
    {
        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i];
            if(i!=v.size()-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
