/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,flag,a1[26]={0};
    char b[105],c[26],d='a',e;
    for(int i=0; i<26; i++)
    {
        c[i]=d;
        d++;
    }
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>e;
        b[i]=tolower(e);
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<26; j++)
        {
            if(b[i]==c[j])
            {
                a1[j]++;
            }
        }
    }
    for(int i=0; i<26; i++)
    {
        if(a1[i]>=1)
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

