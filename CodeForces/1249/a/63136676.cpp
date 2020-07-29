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
        sort(v.begin(),v.end());
        int sum=0;
        int flag;
        for(int i=0; i<v.size()-1; i++)
        {
            if(abs(v[i]-v[i+1])<=1)
            {
                flag=1;
                sum++;
                break;
            }
            else
            {
                flag=0;
            }
        }
        sum++;
        cout<<sum<<endl;
        sum=0;
    }
}
