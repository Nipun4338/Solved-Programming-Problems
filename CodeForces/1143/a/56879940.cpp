/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b[200005],sum1=0,sum=0,sum0=0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b[i];
		if (b[i] == 1)
		{
			sum1++;
		}
		else if (b[i] == 0)
		{
			sum0++;
		}
	}
	for (int i = 0; i < a; i++)
	{
		if (sum0 == 0 || sum1 == 0)
		{
			break;
		}
		if (b[i] == 1)
		{
			sum1--;
			sum++;
		}
		else if (b[i] == 0)
		{
			sum0--;
			sum++;
		}
	}
	cout << sum<< endl;
	return 0;
}
