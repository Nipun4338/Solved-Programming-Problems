#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a;
    string b;
    cin>>a;
    getchar();
    getline(cin,b);
    int sum1=0,sum0=0;
    for(int i=0; i<b.size(); i++)
    {
        if(b[i]=='1')
        {
            sum1++;
        }
        else
        {
            sum0++;
        }
    }
    cout<<abs(sum1-sum0)<<endl;
}
