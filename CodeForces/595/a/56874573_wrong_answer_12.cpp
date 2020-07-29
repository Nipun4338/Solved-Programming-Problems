/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c[105][105],sum=0;
	cin >> a>>b;
	for (int j = 0; j < a; j++)
	{
		for (int i = 0; i < 2 * b; i++)
		{
			cin >> c[j][i];
		}
	}
	for (int j = 0; j < a; j++)
	{
		for (int i = 0; i < (2 * b)-1; i+=2)
		{
			if (c[j][i] + c[j][i + 1] != 0)
			{
				sum++;
			}
		}
	}
	cout << sum << endl;
	return 0;
}
