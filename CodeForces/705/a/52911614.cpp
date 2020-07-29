#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,j=0;
    while(cin>>a)
    {
        j=a-1;
        for(int i=1; i<=a; i++)
        {
            if(i%2==1)
            {
                cout<<"I hate";
            }
            if(i%2==0)
            {
                cout<<"I love";
            }
            if(j!=0)
            {
                cout<<" that ";
                j--;
            }
        }
        cout<<" it"<<endl;
    }
    return 0;
}
