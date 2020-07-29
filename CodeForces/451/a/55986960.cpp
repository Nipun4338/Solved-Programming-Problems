/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==1)
    {
        cout<<"Akshat"<<endl;
    }
    else if(a%2==0 && b<=a && b%2==1)
    {
        cout<<"Akshat"<<endl;
    }
    else if(a%2==0 && b<=a && b%2==0)
    {
        cout<<"Malvika"<<endl;
    }
    else if(a%2==0 && b>a)
    {
        cout<<"Malvika"<<endl;
    }
    else if(a%2==1 && b<=a && b%2==1)
    {
        cout<<"Akshat"<<endl;
    }
    else if(a%2==1 && b<=a && b%2==0)
    {
        cout<<"Malvika"<<endl;
    }
    else if(a%2==1 && b>a)
    {
        cout<<"Akshat"<<endl;
    }
    return 0;
}

