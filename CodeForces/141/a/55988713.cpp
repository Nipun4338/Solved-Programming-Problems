/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flag,a1[26]={0},d1[26]={0};
    char e='A',f[26];
    string a,b,c,d;
    for(int i=0; i<26; i++)
    {
        f[i]=e;
        e++;
    }
    cin>>b>>c>>d;
    a=b+c;
    for(int i=0; i<a.size(); i++)
    {
        for(int j=0; j<26; j++)
        {
            if(a[i]==f[j])
            {
                a1[j]++;
            }
        }
    }
    for(int i=0; i<d.size(); i++)
    {
        for(int j=0; j<26; j++)
        {
            if(d[i]==f[j])
            {
                d1[j]++;
            }
        }
    }
    for(int i=0; i<26; i++)
    {
        if(a1[i]==d1[i])
        {
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

