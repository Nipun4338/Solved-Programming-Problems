#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long long int a,b,c,sum=0;
    vector<long long int> v;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        v.push_back(c);
    }
    for(int i=0; i<a-1; i++)
    {
        if(abs(v[i+1]-v[i])>b)
        {
            sum=0;
        }
        else
        {
            sum++;
        }
    }
    cout<<++sum<<endl;
}
