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
    vector<char>v(b.begin(),b.end());
    while(true)
    {
        int flag=0;
        for(int i=0; i<v.size()-1; i++)
        {
            if((v[i]=='1' && v[i+1]=='0') || (v[i]=='0' && v[i+1]=='1'))
            {
                v.erase(v.begin()+i);
                v.erase(v.begin()+i);
                flag=1;
                break;
            }
        }
        if(flag==0 || v.size()==0)
        {
            break;
        }
    }
    cout<<v.size()<<endl;
}
