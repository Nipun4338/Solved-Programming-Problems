/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,flag;
	vector<int>v1, v2, v3;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		v1.push_back(b);
	}
	sort(v1.begin(), v1.end());
	for (int i = 0; i < a-1; i++)
	{
		cin >> b;
		v2.push_back(b);
	}
	sort(v2.begin(), v2.end());
	for (int i = 0; i < a-2; i++)
	{
		cin >> b;
		v3.push_back(b);
	}
	sort(v3.begin(), v3.end());
	for (int i = 0; i < a - 1; i++)
	{
		if (v2[i] != v1[i])
		{
			cout << v1[i] << endl;
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}
	}
	if (flag == 0)
	{
		cout << v1[v1.size() - 1] << endl;
	}
	for (int i = 0; i < a - 2; i++)
	{
		if (v3[i] != v2[i])
		{
			cout << v2[i] << endl;
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}
	}
	if (flag == 0)
	{
		cout << v2[v2.size() - 1] << endl;
	}
}
