/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b[1005], sum = 0, c[1005],l=0;
		cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b[i];
		if (b[i] == 1)
		{
			sum++;
		}
	}
	for (int i = 0; i < a; i++)
	{
		if (b[i + 1] <= b[i])
		{
			c[l] = b[i];
			l++;
		}
	}
	cout << sum << endl;
	for (int i = 0; i < sum; i++)
	{
		cout << c[i];
		if (i != sum - 1)
		{
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}
