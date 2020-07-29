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

    int sum=0,flag;
    string a;
    while(getline(cin,a)){
    //cout<<a<<endl;
    for(int i=0; i<a.size(); i++)
    {
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
        {
            flag=0;
        }
        else
        {
            if(flag==0)
            {
                sum++;
            }
            flag=1;
        }
    }
    cout<<sum<<endl;
    sum=0;
    }
}
