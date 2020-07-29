/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int sum=0,b;
    char a[1005];
    while(cin>>a)
    {
        if(strlen(a)==1 && a[0]=='0')
        {
            break;
        }
        for(int i=0; i<strlen(a); i++)
        {
            b=a[i]-'0';
            if((i+1)%2==0)
            {
                b=(-1)*b;
            }
            sum=sum+b;
        }
        if(abs(sum)%11==0)
        {
            cout<<a<<" is a multiple of 11."<<endl;
        }
        else
        {
            cout<<a<<" is not a multiple of 11."<<endl;
        }
        sum=0;
    }
}
