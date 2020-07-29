#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int a,b,c;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        vector<int>v;
        for(int j=0; j<b; j++)
        {
            cin>>c;
            v.push_back(c);
        }
        int flag=0;
        for(int j=0; j<v.size()-1; j++)
        {
            int temp=j+2;
            while(temp<v.size())
            {
                if(v[j]==v[temp])
                {
                    flag=1;
                    break;
                }
                else
                {
                    temp++;
                }
            }
            if(flag)
            {
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}