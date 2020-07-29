#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int b,sum=0;
    cin>>b;
    getchar();
    getline(cin,a);
    for(int i=0; i<=b/2; i+=2)
    {
        //cout<<i<<endl;
        if(a[i]==a[i+1])
        {
            sum++;
            if(a[i]=='a')
            {
                a[i]='b';
            }
            else
            {
                a[i]='a';
            }
        }
    }
    cout<<sum<<endl<<a<<endl;
}
