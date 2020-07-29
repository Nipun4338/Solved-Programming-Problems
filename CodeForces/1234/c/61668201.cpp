#include<bits/stdc++.h>
using namespace std;
char a[2][1000000];

int main()
{
    int b,b1,c;
    cin>>b1;
    while(b1--)
    {
        cin>>b;
        getchar();
        cin>>a[0]>>a[1];
        int d=0,flag=0;
        for(int i=0; i<b; i++)
        {
            if(a[d][i]<='2')
            {
                continue;
            }
            if(a[d][i]>='3' && a[!d][i]>='3')
            {
                d=!d;
                continue;
            }
            flag=1;
            break;
        }
        if(d==0 || flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}

