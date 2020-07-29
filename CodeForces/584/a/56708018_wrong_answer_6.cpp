/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int a, b, c = 0, d = 0;
		cin >> a >> b;
	c = pow(10, a - 1);
	d = pow(10, a);
	for (int i = c; i < d; i++)
	{
		if (i % b == 0)
		{
			cout << i << endl;
			break;
		}
	}
	return 0;
}
