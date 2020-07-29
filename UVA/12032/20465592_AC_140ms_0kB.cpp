/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
int a,arr[100001];

bool solve(int k)
{
    for(int i=1; i<=a; i++)
    {
        int x=arr[i]-arr[i-1];
        if(x>k)
        {
            return false;
        }
        else if(x==k)
        {
            k--;
        }
    }
    return true;
}

int bin_search(int low,int high)
{
    /*int low=1;
    int high=10000001;*/
    int res;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(solve(mid))
        {
            //low=mid+1;
            high=mid-1;
            res=mid;
            //cout<<high<<endl;
            //return mid;
        }
        else
        {
            low=mid+1;
            //cout<<low<<endl;
        }
    }
    return res;
}

int main()
{
    //ofstream m;
    //m.open("ex.txt");
    int a1;
    cin>>a1;
    for(int j=0; j<a1; j++)
    {
        //cin>>a;
        cin>>a;
        memset(arr,0,sizeof(arr));
        for(int i=1; i<=a; i++)
        {
            //cin>>arr[i];
            cin>>arr[i];
        }
        //sort(arr,arr+a);
        //b1=bin_search(1);
        //cout<<bin_search(b)<<endl;
        //cout<<lower_bound(arr,arr+a,b)-arr<<endl;
        cout<<"Case "<<j+1<<": "<<bin_search(1,10000001)<<endl;
    }
    //m.close();
    return 0;
}
