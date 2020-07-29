#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,c=0;
    char b[50];
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i<a; i++)
    {
        if(b[i]==b[i+1])
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
