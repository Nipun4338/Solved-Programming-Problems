#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long long int a,b,c;
    cin>>a>>b>>c;
    if((2*a)+(2*b)<2*c)
    {
        cout<<(2*a)+(2*b)<<endl;
    }
    else
    {
        cout<<2*c<<endl;
    }
}
