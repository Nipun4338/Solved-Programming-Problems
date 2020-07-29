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
        int sum=0,sum1=0;
        vector<int>v1,v2;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            if(c%2==0)
            {
                v1.push_back(i+1);
            }
            else
            {
                v2.push_back(i+1);
            }
        }
        if(v1.size()>=1)
        {
            cout<<1<<endl;
            cout<<v1[0]<<endl;
        }
        else if(v2.size()>=2)
        {
            cout<<2<<endl;
            cout<<v2[0]<<" "<<v2[1]<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
