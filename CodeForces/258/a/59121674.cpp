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

    char a[100005];
    cin>>a;
    int b=strlen(a),sum=0,c=0;
    for(int i=0; i<b; i++)
    {
        if(a[i]=='0')
        {
            sum++;
        }
    }
    if(sum>0)
    {
        for(int i=0; i<b; i++)
        {
            if(a[i]=='0')
            {
                c=i;
                break;
            }
        }
        for(int i=c; i<b; i++)
        {
            a[i]=a[i+1];
        }
        for(int i=0; i<b-1; i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
    else
    {
        for(int i=0; i<b-1; i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }

}
