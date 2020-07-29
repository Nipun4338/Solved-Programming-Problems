/* CPP program to print all distinct elements
of a given array */
#include <bits/stdc++.h>
using namespace std;

// This function prints all distinct elements
int countDistinct(int arr[], int n,int m)
{
    // Creates an empty hashset
    set<int>s;

    // Traverse the input array
    int res = 0;
    for (int i = n; i < m; i++)
    {

        // If not present, then put it in
        // hashtable and increment result
        if (s.find(arr[i]) == s.end())
        {
            s.insert(arr[i]);
            res++;
        }
    }

    return res;
}

// Driver program to test above function
int main()
{
    int a,b,c,d,e;
    cin>>a;
    while(a--)
    {
        int l=0,arr[100000];
        cin>>b>>c>>d;
        vector<int>v;
        for(int i=0; i<b; i++)
        {
            cin>>e;
            arr[l]=e;
            l++;
        }
        int n = sizeof(arr) / sizeof(arr[0]);
        for(int i=0; i<b-d+1; i++)
        {
            v.push_back(countDistinct(arr, i,i+d));
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
    }
    return 0;
}
