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

ll power(ll x, unsigned long long int y, ll p)
{
    ll res = 1;     // Initialize result

    x = x % p; // Update x if it is more than or
    // equal to p

    if (x == 0)
        return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

ll countOddSum(ll a[], ll n)
{
    // 'odd' stores number of odd numbers upto ith index
    // 'c_odd' stores number of odd sum subarrays starting at ith index
    // 'Result' stores the number of odd sum subarrays
    ll odd = 0, c_odd=0, result = 0;

    // First find number of odd sum subarrays starting at 0th index
    for(int i=0; i <n; i++)
    {
        if(a[i]&1)
        {
            odd = !odd;
        }
        if(odd)
        {
            c_odd++;
        }
    }

    // Find number of odd sum subarrays starting at ith index
    // add to result
    for(int i=0; i<n; i++)
    {
        result += c_odd;
        if(a[i]&1)
        {
            c_odd = (n-i-c_odd);
        }
    }

    return result;
}

bool comp(int a, int b)
{
    return (a < b);
}

void addEdge(vector<ll> v[],
             ll x,
             ll y)
{
    v[x].push_back(y);
    v[y].push_back(x);
}

int printPath(vector<ll> stack)
{
    if(stack.size()==0)
    {
        return false;
    }
    ll i;
    for (i = 0; i < (ll)stack.size() - 1;
         i++) {
        cout << stack[i] << " -> ";
    }
    cout << stack[i];
}

// An utility function to do
// DFS of graph recursively
// from a given vertex x.
void DFS(vector<ll> v[],
         bool vis[],
         ll x,
         ll y,
         vector<ll> stack)
{
    stack.push_back(x);
    if (x == y) {

        // print the path and return on
        // reaching the destination node
        printPath(stack);
        return;
    }
    vis[x] = true;

    // if backtracking is taking place
    if (!v[x].empty()) {
        for (int j = 0; j < v[x].size(); j++) {
            // if the node is not visited
            if (vis[v[x][j]] == false)
                DFS(v, vis, v[x][j], y, stack);
        }
    }

    stack.pop_back();
}

// A utility function to initialise
// visited for the node and call
// DFS function for a given vertex x.
void DFSCall(ll x,
             ll y,
             vector<ll> v[],
             ll n,
             vector<ll> stack)
{
    // visited array
    bool vis[n + 1];

    memset(vis, false, sizeof(vis));

    // DFS function call
    DFS(v, vis, x, y, stack);
}


int main()
{
    fast

    ll a,b,c,d,e,f,g,h;
    while(true)
    {
        cin>>a>>b>>c;
        if(a+b+c==0)
        {
            break;
        }
        vector<pair<ll,pair<ll,ll>>>v;
        for(int i=0; i<b; i++)
        {
            cin>>d>>e>>f;
            v.push_back(make_pair(f,make_pair(d,e)));
        }
        sort(all(v));
        for(int j=0; j<f; j++)
        {
            cin>>g>>h;
            ll low=0,high=v[v.size()-1].first,step=0,mid=0;
            while(true)
            {
                step++;
                mid=(low+high)/2;
                vector<ll>v1[a],stack1;
                for(int k=0; k<v.size(); k++)
                {
                    if(v[k].first<=mid)
                    {
                        addEdge(v1,v[k].second.first,v[k].second.second);
                    }
                }
                bool x=DFSCall(g,h,v1,a,stack1);
                if(x==false)
                {

                }
            }
        }
    }
}
/*Remember Remember, if you are so much excited that
your mind is shaking,
this is not the last contest that you are proceeding now,
if Almighty wants,
time will come.*/
