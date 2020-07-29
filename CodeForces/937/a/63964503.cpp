#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a,b,c,d;
    set<int>s;
    cin>>a;
    while(a--)
    {
        cin>>b;
        if(b!=0)
        {
            s.insert(b);
        }
    }
    cout<<s.size()<<endl;
}
