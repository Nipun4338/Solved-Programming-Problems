#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,row,col,ans=0,sum=0,i=0;
    cin>>a;
    while(a--)
    {
        cin>>row>>col;
        ans=row*col;
        if(row==1 || col==1)
        {
            ans=max(row,col);
            cout<<"Case "<<++i<<": "<<ans<<endl;
        }
        else if(row==2 || col==2)
        {
            ans=max(row,col);
            sum=ans;
            if(sum%4==1 || sum%4==3)
            {
                ans++;
            }
            else if(sum%4==2)
            {
                ans+=2;
            }
            cout<<"Case "<<++i<<": "<<ans<<endl;
        }
        else if(ans%2==1)
        {
            ans=(ans/2)+1;
            cout<<"Case "<<++i<<": "<<ans<<endl;
        }
        else if(ans%2==0)
        {
            ans=ans/2;
            cout<<"Case "<<++i<<": "<<ans<<endl;
        }
        ans=0;
        sum=0;
    }
	return 0;
}
