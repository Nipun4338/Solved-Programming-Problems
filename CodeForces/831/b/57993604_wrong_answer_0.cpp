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
    string a,b,c;
    cin>>b>>c;
    cin>>a;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            for(int j=0; j<26; j++)
            {
                if(a[i]+32==b[j])
                {
                    cout<<(char)(c[j]-32);
                    break;
                }
            }
        }
        else
        {
            for(int j=0; j<26; j++)
            {
                if(a[i]==b[j])
                {
                    cout<<c[j];
                    break;
                }
            }
        }
    }
    cout<<endl;
}
