#include<bits/stdc++.h>
using namespace std;
char a[100005];

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
            set<char>s;
            for(int j=d-1; j<f; j++)
            {
                s.insert(a[j]);
            }
            cout<<s.size()<<endl;
        }
    }
}

