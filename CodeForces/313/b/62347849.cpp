#include<bits/stdc++.h>
using namespace std;
long long int b,c,d,sum=0;
vector<long long int>v;

int main()
{
    string a;
    getline(cin,a);
    v.push_back(0);
    for(int i=0; i<a.size()-1; i++)
    {
        if(a[i]==a[i+1])
        {
            sum=sum+1;
            v.push_back(sum);
        }
        else
        {
            v.push_back(sum);
        }
    }
    cin>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c>>d;
        int d1;
        if(c==1)
        {
            d1=0;
        }
        else
        {
            d1=c-1;
        }
        cout<<v[d-1]-v[d1]<<endl;
    }
}
