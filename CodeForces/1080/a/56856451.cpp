/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int a, b, a1 = 0, b1 = 0, c1 = 0, sum = 0;
	cin >> a >> b;
	a1 = a * 2;
	b1 = a * 5;
	c1 = a * 8;
	if (a1 % b > 0)
	{
		sum = sum + (a1 / b) + 1;
	}
	else
	{
		sum = sum + (a1 / b);
	}
	if (b1 % b > 0)
	{
		sum = sum + (b1 / b) + 1;
	}
	else
	{
		sum = sum + (b1 / b);
	}
	if (c1 % b > 0)
	{
		sum = sum + (c1 / b) + 1;
	}
	else
	{
		sum = sum + (c1 / b);
	}
	cout << sum << endl;
	return 0;
}
