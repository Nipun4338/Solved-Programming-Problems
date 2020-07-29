#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b[100],i=0,c=0;
    while(cin>>a)
    {
        if(a<0)
        {
            break;
        }
        else
        {
            c=a;
            while(c!=0)
            {
                b[i]=c%3;
                c=c/3;
                i++;
            }
            if(a==0)
            {
                cout<<"0"<<endl;
            }
            else
            {
                for(int j=i-1; j>=0; j--)
                {
                    cout<<b[j];
                }
                cout<<endl;
                i=0;
                c=0;
            }
        }
    }
    return 0;
}