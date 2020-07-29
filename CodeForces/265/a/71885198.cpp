#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    int c=1,l=0;
    cin>>a>>b;
    for(int i=0; i<b.size(); i++)
    {
        if(b[i]==a[l])
        {
            l++;
            c++;
        }
        if(l>=a.size())
        {
            break;
        }
    }
    cout<<c<<endl;
}
