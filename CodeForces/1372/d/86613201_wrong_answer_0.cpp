#include<bits/stdc++.h>
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define fast ios_base:: sync_with_stdio( false ); cin.tie(0); cout.tie(0);
#define eb              emplace_back
#define em              emplace
#define pb              push_back
#define Mp              make_pair
#define ff              first
#define ss              second
#define mod 1000000007
# define M_PI           3.14159265358979323846
typedef long long ll;
using namespace std;

const int M = (int)(2e6 + 239);

void decitobinbitodeci()
{
    string binary = bitset<8>(128).to_string(); //to binary
    cout<<binary<<"\n";

    unsigned long decimal = bitset<8>(binary).to_ulong();
    cout<<decimal<<"\n";
}

int getnum(string a)
{
    int i,p=0;
    rep0(i,a.size())
    {
        p*=10;
        p+=a[i]-'0';
    }
    return p;
}

/*
1.always remember for ncr(n,2), you can calculate by
n*(n-1)/2
2.Power of 2 ->  (1ll<<i)
*/

ll getOddOccurrence(ll ar[], int ar_size)
{
    ll res = 0;
    for (int i = 0; i < ar_size; i++)
        res = res ^ ar[i];

    return res;
}

bool areEqual(int arr1[], int arr2[], int n, int m)
{
    // If lengths of arrays are not equal
    if (n != m)
        return false;

    // Store arr1[] elements and their counts in
    // hash map
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr1[i]]++;

    // Traverse arr2[] elements and check if all
    // elements of arr2[] are present same number
    // of times or not.
    for (int i = 0; i < n; i++)
    {
        // If there is an element in arr2[], but
        // not in arr1[]
        if (mp.find(arr2[i]) == mp.end())
            return false;

        // If an element of arr2[] appears more
        // times than it appears in arr1[]
        if (mp[arr2[i]] == 0)
            return false;

        mp[arr2[i]]--;
    }

    return true;
}

ll binarySearch(ll arr[], ll l, ll r, ll x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

        // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // if we reach here, then element was
    // not present
    return -1;
}


int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    ll a,b,c,d,e,ans=0;
    cin>>a;
    vector<ll>v,v1;
    set<ll>s;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
        v1.push_back(b);
        s.insert(b);
    }
    sort(all(v1));
    ll temp=0,x=0,y=0;
    vector<ll>::iterator it;
    while(true)
    {
        if(v.size()<=1 || temp==a)
        {
            ans=v[0];
            break;
        }
        if(v.size()==2)
        {
            for(int i=0; i<v.size(); i++)
            {
                if(ans!=v[i])
                {
                    //cout<<ans<<" "<<v[i] <<endl;
                    ans+=v[i];
                    break;
                }
            }
            break;
        }
        for(int i=0; i<v.size(); i++)
        {
            it=v.begin();
            if(v.size()<=2)
            {
                break;
            }
            if(i>0 && i<v.size()-1 && v[i]==v1[temp])
            {
                x=v[i-1];
                y=v[i+1];
                v.erase(it+i-1);
                v.erase(it+i);
                v[i-1]=x+y;
                ans+=x+y;
                temp++;
            }
            else if(i==0 && v[i]==v1[temp])
            {
                x=v[v.size()-1];
                y=v[i+1];
                v.erase(it+v.size()-1);
                v.erase(it+i);
                v[0]=x+y;
                ans+=x+y;
                temp++;
            }
            else if(i==v.size()-1 && v[i]==v1[temp])
            {
                x=v[i-1];
                y=v[0];
                v.erase(it+i-1);
                v.erase(it+0);
                v[i]=x+y;
                ans+=x+y;
                temp++;
            }
        }
    }
    cout<<ans<<endl;
}
/*Remember Remember, if you are so much excited that
your mind is shaking,
this is not the last contest that you are proceeding now,
if Almighty wants,
time will come.*/

