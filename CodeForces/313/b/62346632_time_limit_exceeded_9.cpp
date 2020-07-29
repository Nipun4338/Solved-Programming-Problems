#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    long long int b,c,d,sum=0;
    getline(cin,a);
    cin>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c>>d;
        for(int j=c-1; j<d-1; j++)
        {
            if(a[j]==a[j+1])
            {
                sum++;
            }
        }
        cout<<sum<<endl;
        sum=0;
    }
}
