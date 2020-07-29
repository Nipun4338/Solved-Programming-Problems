/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && c + a > b)
	{
		cout << "0" << endl;
	}
	else if(a+b<=c)
	{
		cout << c - (a + b) + 1 << endl;
	}
	else if (b + c <= a)
	{
		cout << a - (c + b) + 1 << endl;
	}
	else if (a + c <= b)
	{
		cout << b - (a + c) + 1 << endl;
	}
	return 0;
}
