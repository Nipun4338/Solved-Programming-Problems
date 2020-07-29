/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a, b, c;
	int flag, flag1, flag3, d = 0, e = 0, f = 0;
	vector<int>v;
	cin >> a >> b >> c;
	v.push_back(a[0] - '0');
	v.push_back(b[0] - '0');
	v.push_back(c[0] - '0');
	d = v[0];
	e = v[1];
	f = v[2];
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size()-1; i++)
	{
		if (v[i + 1] - v[i] == 1)
		{
			flag = 0;
		}
		else
		{
			flag = 1;
			break;
		}
	}
	for (int i = 0; i < v.size()-1; i++)
	{
		if (v[i + 1] - v[i] == 0)
		{
			flag3 = 0;
		}
		else
		{
			flag3 = 1;
			break;
		}
	}
	if (a[1] == b[1] && a[1] == c[1])
	{
		flag1 = 0;
	}
	else
	{
		flag1 = 1;
	}
	//cout << flag << endl;
	if ((flag == 0 && flag1 == 0) || (flag3 == 0 && flag1 == 0))
	{
		cout << "0" << endl;
	}
	else
	{
		if (flag1==1 && (a[1] == b[1] || a[1] == c[1] || b[1] == c[1]))
		{
			if (flag == 0)
			{
				cout << "1" << endl;
			}
			else if((a[1]==b[1] && (abs(e-d)==0 || abs(e-d)==1)) || (c[1] == b[1] && (abs(f - e) == 0 || abs(f - e) == 1)) || (a[1] == c[1] && (abs(d - f) == 0 || abs(d - f) == 1)))
			{
				cout << "1" << endl;
			}
			else
			{
				cout << "2" << endl;
			}
		}
		else
		{
			cout << "2" << endl;
		}
	}
}
