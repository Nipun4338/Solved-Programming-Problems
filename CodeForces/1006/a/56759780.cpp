/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int a, b[1005];
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b[i];
		if (b[i] % 2 == 0)
		{
			b[i] = b[i] - 1;
		}
	}
	for (int i = 0; i < a; i++)
	{
		cout << b[i];
		if (i != a - 1)
		{
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}
