#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a;
    while(a--)
    {
        cin>>b;
        vector<int>v1,v2;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            v1.push_back(c);
        }
        for(int i=0; i<b; i++)
        {
            cin>>c;
            v2.push_back(c);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0; i<b; i++)
        {
            cout<<v1[i];
            if(i!=b)
            {
                cout<<" ";
            }
        }
        cout<<endl;
        for(int i=0; i<b; i++)
        {
            cout<<v2[i];
            if(i!=b)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
