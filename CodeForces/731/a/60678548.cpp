#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string a;
    char c='a',d[26];
    cin>>a;
    int b[26],sum=0;
    for(int i=0; i<13; i++)
    {
        b[i]=1;
    }
    for(int i=0; i<26; i++)
    {
        d[i]=c;
        c++;
    }
    for(int i=0; i<a.size(); i++)
    {
        if(abs(a[i]-c)>13)
        {
            sum=sum+26-abs(a[i]-c);
            c=a[i];
        }
        else
        {
            sum=sum+abs(a[i]-c);
            c=a[i];
        }
        //cout<<sum<<" "<<c<<endl;
    }
    cout<<sum<<endl;
}
