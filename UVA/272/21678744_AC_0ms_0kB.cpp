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

    int flag=0;
    string a;
    while(getline(cin,a))
    {
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]=='"' && flag==0)
            {
                cout<<"``";
                flag=1;
            }
            else if(a[i]=='"' && flag==1)
            {
                cout<<"''";
                flag=0;
            }
            else
            {
                cout<<a[i];
            }
        }
        cout<<endl;
    }
    return 0;
}