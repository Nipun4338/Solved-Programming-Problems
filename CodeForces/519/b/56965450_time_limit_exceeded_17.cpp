/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	vector<int>v1, v2, v3;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		v1.push_back(b);
	}
	for (int i = 0; i < a-1; i++)
	{
		cin >> b;
		v2.push_back(b);
	}
	for (int i = 0; i < a-2; i++)
	{
		cin >> b;
		v3.push_back(b);
	}
	for (int i = 0; i < a - 1; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (v2[i] == v1[j])
			{
				b = v1[j];
				v1.erase(v1.begin()+j);
				break;
			}
		}
	}
	for (int i = 0; i < a - 2; i++)
	{
		for (int j = 0; j < a-1; j++)
		{
			if (v3[i] == v2[j])
			{
				b = v2[j];
				v2.erase(v2.begin() + j);
				break;
			}
		}
	}
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << endl;
	}
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << endl;
	}
}
