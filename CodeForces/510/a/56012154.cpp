/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,flag=0;
    char c[55],d[55];
    cin>>a>>b;
    for(int i=0; i<(a+1)/2; i++)
    {
        if(i==((a+1)/2)-1)
        {
            flag=1;
        }
        for(int j=0; j<b; j++)
        {
            cout<<'#';
        }
        cout<<endl;
        if(flag!=1 && i%2==0){
        for(int j=0; j<b-1; j++)
        {
            cout<<'.';
        }
        cout<<'#'<<endl;
        }
        if(flag!=1 && i%2==1){
        cout<<'#';
        for(int j=0; j<b-1; j++)
        {
            cout<<'.';
        }
        cout<<endl;
        }
    }
    return 0;
}

