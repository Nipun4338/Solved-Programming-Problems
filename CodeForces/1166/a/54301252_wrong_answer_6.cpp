#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,e[26]={0},sum=0,sum1=0;
    char b[100],c[26],d='a';
    for(int j=0; j<26; j++)
    {
        c[j]=d;
        d++;
    }
    cin>>a;
    getchar();
    for(int i=0; i<a; i++)
    {
        gets(b);
        for(int k=0; k<26; k++)
        {
            if(b[0]==c[k])
            {
                e[k]++;
            }
        }
    }
    for(int k=0; k<26; k++)
    {
        if(e[k]>1)
        {
            sum=sum+(e[k]/2);
            sum1=sum1+(e[k]-(e[k]/2));
            //cout<<sum<<" "<<sum1<<endl;
            if(sum1==1)
            {
                sum1=0;
            }
            if(sum1==2)
            {
                sum1=1;
            }
            if(sum1>2)
            {
                sum1=sum1;
            }
            if(sum==1)
            {
                sum=0;
            }
            if(sum==2)
            {
                sum=1;
            }
            if(sum>2)
            {
                sum=sum;
            }
            //cout<<sum<<" "<<sum1<<endl;
        }
    }
    cout<<sum+sum1<<endl;
    return 0;
}
