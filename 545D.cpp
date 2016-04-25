#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, A[100000];
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i];
	sort(A,A+n);

	int sum=0,max=0;
	for (int i=0; i<n; i++)
	{
		if (A[i] >= sum)
		{
			max++;
			sum+=A[i];
		}
	}

	cout << max;
	return 0;
}