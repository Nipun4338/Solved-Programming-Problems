/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b=0;
		cin >> a;
	b = a % 4;
	if (b == 1)
	{
		cout << "0 A" << endl;
	}
	else if (b == 2)
	{
		cout << "1 B" << endl;
	}
	else if (b == 3)
	{
		cout << "2 A" << endl;
	}
	else if (b == 0)
	{
		cout << "1 A" << endl;
	}
	return 0;
}
