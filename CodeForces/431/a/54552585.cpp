#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e=0,sum=0;
    char s[100001];
    cin>>a>>b>>c>>d;
    getchar();
    gets(s);
    e=strlen(s);
    for(int i=0; i<e; i++)
    {
        if(s[i]=='1')
        {
            sum=sum+a;
        }
        else if(s[i]=='2')
        {
            sum=sum+b;
        }
        else if(s[i]=='3')
        {
            sum=sum+c;
        }
        else if(s[i]=='4')
        {
            sum=sum+d;
        }
    }
    cout<<sum<<endl;
    return 0;
}
