#include <bits/stdc++.h>

using namespace std;

int main()
{
	int sum = 0, n,max = -1;
	cin >> n;
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		max = (temp > max) ? temp : max;
		sum += temp;
	}
	int sum_another_rods = sum - max;
	cout << max - sum_another_rods + 1;
}