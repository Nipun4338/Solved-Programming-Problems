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
        vector<int>v;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            v.push_back(c);
        }
        vector<int>v1;
        for(int i=0; i<b; i++)
        {
            int sum=0;
            int temp1=v[i]-1;
            while(true)
            {
                //int temp1=v[temp]-1;
                if(v[i]!=v[temp1])
                {
                    sum++;
                }
                else
                {
                    sum++;
                    break;
                }
                temp1=v[temp1]-1;
            }
            v1.push_back(sum);
            sum=0;
        }
        for(int i=0; i<b; i++)
        {
            cout<<v1[i];
            if(i!=b-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
