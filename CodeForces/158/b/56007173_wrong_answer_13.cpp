/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,sum=0,sum1=0,sum2=0,sum3=0,total=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        if(b==4)
        {
            sum++;
        }
        else if(b==3)
        {
            sum1++;
        }
        else if(b==2)
        {
            sum2++;
        }
        else
        {
            sum3++;
        }
    }
    //cout<<sum<<" "<<sum1<<" "<<sum2<<" "<<sum3<<endl;
    while(sum1>0 && sum3>0 && (sum1!=0 || sum3!=0))
    {
        total++;
        sum1--;
        sum3--;
    }
    while(sum2!=0 && sum2>=2)
    {
        total++;
        sum2-=2;
    }
    while(sum3!=0 && sum3>=4)
    {
        total++;
        sum3-=4;
    }
    if(sum3+(sum2*2)<=4 && sum3+sum2>0)
    {
        total++;
        sum3=0;
        sum2=0;
    }
    if((sum1*3)+sum3<=4 && sum1+sum3>0)
    {
        total++;
        sum3=0;
        sum1=0;
    }
    total=total+sum+sum3;
    cout<<total<<endl;
    return 0;
}

