#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long right= 2e9,left = 0,A[100000],B[100000],n,k;
	int cake_max = 0;
	cin >> n >> k;

	for (int i=0; i<n; i++)
		cin >> A[i];
	for (int i=0; i<n; i++)
		cin >> B[i];

	while (left <= right)
	{
		long long temp = k, mid = left + (right-left)/2;

		for (int i=0; i<n; i++)
		if (A[i]*mid > B[i])
		{
			temp-= A[i]*mid - B[i];
			if (temp <0)
				break;
		}

		if (temp >=0)
		{
			cake_max = mid;
			left = mid +1;
		}
		else
		{
			right = mid - 1 ;
		}

	}

	cout << cake_max;
}
