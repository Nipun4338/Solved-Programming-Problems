#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[200005];
    long long int b,sum=0;
    cin>>b;
    getchar();
    cin>>a;
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
