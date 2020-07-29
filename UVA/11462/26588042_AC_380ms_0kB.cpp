#include<bits/stdc++.h>
using namespace std;
long int b[2000005];
int main()
{
    long long int a,c=0;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        else
        {
            for(long long int i=0; i<a; i++)
            {
                cin>>b[i];
            }
            sort(b,b+a);
            for(long long int i=0; i<a; i++)
            {
                cout<<b[i];
                if(i<a-1)
                {
                    cout<<" ";
                }
            }
            cout<<endl;
            c=0;
        }
    }
    return 0;
}