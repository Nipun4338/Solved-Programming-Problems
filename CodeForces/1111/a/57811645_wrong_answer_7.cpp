/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll c,e,f,a1=0,b1=0,a2=0,b2=0;
char a[1005],b[1005];

int main()
{
    int flag;
    cin>>a>>b;
    c=min(strlen(a),strlen(b));
    for(int i=0; i<c; i++)
    {
        if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') && (b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u'))
        {
            flag=0;
        }
        else if(a[i]>='b' && a[i]<='z' && (a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u') && b[i]>='b' && b[i]<='z' && b[i]!='a' && b[i]!='e' && b[i]!='i' && b[i]!='o' && b[i]!='u')
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
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
