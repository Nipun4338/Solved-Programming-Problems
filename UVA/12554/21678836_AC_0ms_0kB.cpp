/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    /*ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/

    int a,sum=0,flag=0,l=0;
    string b[105],c[16];
    cin>>a;
    c[0]="Happy";
    c[1]="birthday";
    c[2]="to";
    c[3]="you";
    c[4]="Rujia";
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    while(true)
    {
        for(int i=0; i<a; i++)
        {
            cout<<b[i]<<": ";
            sum++;
            //cout<<sum<<endl;
            if(sum==12 || (sum>16 &&(sum-4)%12==0))
            {
                l=4;
            }
            cout<<c[l]<<endl;
            l++;
            if(l==4)
            {
                l=0;
            }
            else if(l==5)
            {
                l=0;
            }
            if(a<=16 && sum==16)
            {
                flag=1;
                break;
            }
            else if(a>16 && a<=32 && sum==32)
            {
                flag=1;
                break;
            }
            else if(a>32 && a<=48 && sum==48)
            {
                flag=1;
                break;
            }
            else if(a>48 && a<=64 && sum==64)
            {
                flag=1;
                break;
            }
            else if(a>64 && a<=80 && sum==80)
            {
                flag=1;
                break;
            }
            else if(a>80 && a<=96 && sum==96)
            {
                flag=1;
                break;
            }
            else if(a>96 && a<=112 && sum==112)
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
}