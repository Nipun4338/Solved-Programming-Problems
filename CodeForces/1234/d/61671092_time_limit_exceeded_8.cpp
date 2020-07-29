#include<bits/stdc++.h>
using namespace std;
string a;

int main()
{
    int b,c,d,f;
    char e;
    cin>>a;
    cin>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c>>d;
        if(c==1)
        {
            cin>>e;
            a[d-1]=e;
        }
        else
        {
            cin>>f;
            string x1=a.substr(d-1,f-d+1);
            //cout<<x1<<endl;
            set<char>s(x1.begin(),x1.end());

            cout<<s.size()<<endl;
        }
    }
}

