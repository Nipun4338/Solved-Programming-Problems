#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a,b,c,d;
    cin>>a>>b;
    vector<int>v;
    while(a--)
    {
        cin>>c;
        v.push_back(c);
    }
    int sum=0,sum1=0;
    sort(v.begin(),v.end());
    for(int i=v.size()-1; i>=0; i--)
    {
        sum=sum+v[i];
        if(sum>=b)
        {
            sum1++;
            break;
        }
        else
        {
            sum1++;
        }
    }
    cout<<sum1<<endl;
}
