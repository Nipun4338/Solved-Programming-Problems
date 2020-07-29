#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,i1=0,sum=0,d=0,e=0;
    char c[210];
    cin>>a;
    while(a--)
    {
        cin>>c>>b;
        d=strlen(c);
        if(c[0]=='-')
        {
            i1=1;
        }
        for(long long int i=i1; i<d; i++)
        {
            sum=((sum*10)+(c[i]-'0'))%b;
        }
        if(sum==0)
        {
            cout<<"Case "<<++e<<": divisible"<<endl;
        }
        else
        {
            cout<<"Case "<<++e<<": not divisible"<<endl;
        }
        i1=0;
        sum=0;
        d=0;
    }
	return 0;
}
