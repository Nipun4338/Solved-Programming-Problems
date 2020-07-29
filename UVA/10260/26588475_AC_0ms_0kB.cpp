#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c=0,l=0;
    char b[100],d[100];
    while(gets(b)){
    c=strlen(b);
    for(int i=0; i<c; i++)
    {
        if(b[i]==b[i+1])
        {
            d[l]=b[i+1];
        }
        else if((b[i]=='B' || b[i]=='F' || b[i]=='P' || b[i]=='V') && (b[i+1]=='B' || b[i+1]=='F' || b[i+1]=='P' || b[i+1]=='V'))
        {
            d[l]=b[i+1];
        }
        else if((b[i]=='C' || b[i]=='G' || b[i]=='J' || b[i]=='K' || b[i]=='Q' || b[i]=='S' || b[i]=='X' || b[i]=='Z') && (b[i+1]=='C' || b[i+1]=='G' || b[i+1]=='J' || b[i+1]=='K' || b[i+1]=='Q' || b[i+1]=='S' || b[i+1]=='X' || b[i+1]=='Z'))
        {
            d[l]=b[i+1];
        }
        else if((b[i]=='D' || b[i]=='T') && (b[i+1]=='D' || b[i+1]=='T'))
        {
            d[l]=b[i+1];
        }
        else if((b[i]=='M' || b[i]=='N') && (b[i+1]=='M' || b[i+1]=='N'))
        {
            d[l]=b[i+1];
        }
        else
        {
            d[l]=b[i];
            l++;
        }
    }
    for(int i=0; i<l; i++)
    {
        if(d[i]=='B' || d[i]=='F' || d[i]=='P' || d[i]=='V')
        {
            cout<<"1";
        }
        else if(d[i]=='C' || d[i]=='G' || d[i]=='J' || d[i]=='K' || d[i]=='Q' || d[i]=='S' || d[i]=='X' || d[i]=='Z')
        {
            cout<<"2";
        }
        else if(d[i]=='D' || d[i]=='T')
        {
            cout<<"3";
        }
        else if(d[i]=='L')
        {
            cout<<"4";
        }
        else if(d[i]=='M' || d[i]=='N')
        {
            cout<<"5";
        }
        else if(d[i]=='R')
        {
            cout<<"6";
        }
    }
    cout<<endl;
    c=0;
    l=0;
    }
    return 0;
}