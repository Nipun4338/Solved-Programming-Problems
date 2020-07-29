/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	char b[60];
	cin >> a >> b;
	int k = 0;
	for (int i = k; i < a; i+=k)
	{
		for (int j = i; j < i+1; j +=k)
		{
			cout << b[j];
			break;
		}
		k++;
	}
	cout << endl;
	return 0;
}
