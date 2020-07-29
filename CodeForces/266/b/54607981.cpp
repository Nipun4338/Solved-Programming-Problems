#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char c[105];
    cin>>a>>b;
    getchar();
    gets(c);
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<a; j++)
        {
            if(c[j]=='B' && c[j+1]=='G')
            {
                c[j]='G';
                c[j+1]='B';
                j++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
