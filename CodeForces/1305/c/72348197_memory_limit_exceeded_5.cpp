// C++ Program to print all combination of
// size r in an array of size n
#include <bits/stdc++.h>
using namespace std;
vector<long long int>v;
typedef long long ll;
long long int sum=1;

void combinationUtil(ll arr[], int n, int r,
					int index, int data[], int i);

// The main function that prints all
// combinations of size r in arr[]
// of size n. This function mainly
// uses combinationUtil()
void printCombination(ll arr[], int n, int r)
{
	// A temporary array to store
	// all combination one by one
	int data[r];

	// Print all combination using
	// temprary array 'data[]'
	combinationUtil(arr, n, r, 0, data, 0);
}

/* arr[] ---> Input Array
n ---> Size of input array
r ---> Size of a combination to be printed
index ---> Current index in data[]
data[] ---> Temporary array to store current combination
i ---> index of current element in arr[] */
void combinationUtil(ll arr[], int n, int r,
					int index, int data[], int i)
{
	// Current cobination is ready, print it
	if (index == r)
	{
	    long long int sum=0;
		for (int j = 0; j < r; j++)
			{//cout << data[j]<<" ";
			sum=abs(sum-data[j]);}
			//sum=sum*abs(data[j])%10;
			//cout<<sum<<endl;
        v.push_back(sum);
        //memset(data,0,sizeof(data));
		//cout << endl;
		return;
	}

	// When no more elements are there to put in data[]
	if (i >= n)
		return;

	// current is included, put next at next location
	data[index] = arr[i];
	combinationUtil(arr, n, r, index + 1, data, i + 1);

	// current is excluded, replace it with next (Note that
	// i+1 is passed, but index is not changed)
	combinationUtil(arr, n, r, index, data, i+1);
}

// Driver code
int main()
{

	int r = 2;
	long long int a,b;
	cin>>a>>b;
	long long int arr[a];
	for(int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
	int n = sizeof(arr)/sizeof(arr[0]);
	printCombination(arr, n, r);
	long long int sum=1;
	for(int i=0; i<v.size(); i++)
    {
        sum=(sum*v[i])%b;
    }
    cout<<sum<<endl;
	return 0;
}

// This is code is contributed by rathbhupendra
