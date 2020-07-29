/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c,sum=0;
    cin>>a;
    vector<int>v1,v2;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        v1.push_back(c);
    }
    cin>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c;
        v2.push_back(c);
    }
    if(a<=b)
    {
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<b; j++)
            {
                if(abs(v1[i]-v2[j])<=1 && abs(v1[i]-v2[j])>=0 && v2[j]!=-100)
                {
                    sum++;
                    v2[j]=-100;
                    break;
                }
            }
        }
    }
    if(a>b)
    {
        for(int i=0; i<b; i++)
        {
            for(int j=0; j<a; j++)
            {
                if(abs(v1[j]-v2[i])<=1 && abs(v1[j]-v2[i])>=0 && v1[j]!=-100)
                {
                    sum++;
                    v1[j]=-100;
                    break;
                }
            }
        }
    }
    cout<<sum<<endl;
}
