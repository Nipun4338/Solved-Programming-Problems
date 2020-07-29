#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    char a;
    string b="qwertyuiopasdfghjkl;zxcvbnm,./",c;
    cin>>a;
    cin>>c;
    if(a=='L')
    {
        for(int i=0; i<c.size(); i++)
        {
            for(int j=0; j<b.size(); j++)
            {
                if(c[i]==b[j])
                {
                    cout<<b[j+1];
                }
            }
        }
        cout<<endl;
    }
    else if(a=='R')
    {
        for(int i=0; i<c.size(); i++)
        {
            for(int j=0; j<b.size(); j++)
            {
                if(c[i]==b[j])
                {
                    cout<<b[j-1];
                }
            }
        }
        cout<<endl;
    }
}
