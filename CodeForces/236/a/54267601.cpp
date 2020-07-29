#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[101],c[26],d='a';
    int b=0,e[26]={0},sum=0;
    for(int i=0; i<26; i++)
    {
        c[i]=d;
        d++;
    }
    gets(a);
    b=strlen(a);
    for(int j=0; j<b; j++)
    {
        for(int k=0; k<26; k++)
        {
            if(a[j]==c[k])
            {
                e[k]++;
            }
        }
    }
    for(int k=0; k<26; k++)
    {
        if(e[k]>0)
        {
            sum++;
        }
    }
    if(sum%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else if(sum%2==1)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
