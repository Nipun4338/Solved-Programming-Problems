#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0;
    char c[101];
    int d=0;
    cin>>a;
    getchar();
    for(int i=0; i<a; i++)
    {
        for(int k=0; k<101; k++)
        {
            c[k]={};
        }
        gets(c);
        b=strlen(c);
        for(int j=0; j<b; j++)
        {
            if(c[j]=='O')
            {
                d++;
                sum=sum+d;
            }
            else if(c[j]=='X')
            {
                d=0;
            }
        }
        cout<<sum<<endl;
        sum=0;
        d=0;
        b=0;
    }
    return 0;
}
