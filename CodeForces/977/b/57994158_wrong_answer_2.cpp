/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
pair<string,string>p;

int main()
{
    string b;
    int a,flag;
    char c,d;
    cin>>a;
    cin>>b;
    for(int i=0; i<a-1; i++)
    {
        c=b[i];
        d=b[i+1];
        for(int j=i+1; j<a; j++)
        {
            if(c==b[j] && d==b[j+1])
            {
                cout<<c<<d<<endl;
                flag=1;
                break;
            }
            flag=0;
        }
        if(flag==1)
        {
            break;
        }
    }
}
