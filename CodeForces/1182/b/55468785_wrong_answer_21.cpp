#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,d=0,e=0,f=0,g=0,flag,sum=0,flag1,flag2,h=0,x=0,flag3;
    char c[505][505];
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cin>>c[i][j];
        }
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(c[i][j]=='*')
            {
                d=i;
                e=j;
                flag1=1;
                break;
            }
            else
            {
               flag1=0;
            }
        }
        if(flag1==1)
        {
            break;
        }
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b-1; j++)
        {
            if(c[i][j]=='*' && c[i][j+1]=='*')
            {
                sum++;
            }
        }
        if(sum>=2)
        {
            g=i;
            break;
        }
        sum=0;
    }
    for(int j=0; j<b; j++)
    {
        if(c[g][j]=='*')
        {
            h=j;
            break;
        }
    }
    for(int j=0; j<b; j++)
    {
        if(c[g][j]=='*')
        {
            x=j;
            flag2=1;
        }
        else if(c[g][j]=='.')
        {
            flag=0;
        }
        else if(flag2==1 && c[g][j]!='*')
        {
            break;
        }
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(c[i][j]=='.' && i!=g)
            {
                flag3=0;
            }
            else if(c[i][j]=='*' && c[i][j+1]!='*' && c[i][j-1]!='*' && i!=g && e==j)
            {
                flag3=0;
                c[i][e]='.';
            }
            else if(c[i][j]=='.' && i==g && j<h)
            {
                flag3=0;
            }
            else if(c[i][j]=='*' && i==g && j>=h && j<=x && h!=e && x!=e)
            {
                flag3=0;
                c[i][j]='.';
            }
            else if(c[i][j]=='.' && i==g && j>x)
            {
                flag3=0;
            }
            else
            {
                c[i][j]='*';
                flag3=1;
                break;
            }
        }
        if(flag3==1)
        {
            break;
        }
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(c[i][j]=='.')
            {
                flag=0;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else if(flag==1)
    {
        cout<<"NO"<<endl;
    }
	return 0;
}
