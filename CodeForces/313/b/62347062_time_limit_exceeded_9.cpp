#include<bits/stdc++.h>
using namespace std;
long long int b,c,d,sum=0;
vector<long long int>v;

int main()
{
    string a;
    getline(cin,a);
    for(int i=0; i<a.size()-1; i++)
    {
        if(a[i]==a[i+1])
        {
            v.push_back(1);
        }
        else
        {
            v.push_back(0);
        }
    }
    cin>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c>>d;
        cout<<accumulate(v.begin()+c-1,v.begin()+d-1,sum)<<endl;
        sum=0;
    }
}
