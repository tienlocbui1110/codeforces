#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,_max=0;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		int temp;
		cin >> temp;
		if (temp - _max>15)
		{
			cout << _max+15 ;
			return 0;
		}
		else
			_max = temp;
	}
	if (90 - _max >15)
	{
		cout << _max+15;
		return 0;
	}
	else
		cout << 90;
}