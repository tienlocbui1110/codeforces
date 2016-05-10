#include <bits/stdc++.h>

using namespace std;

void sangNguyenTo(bool A[],int x)
{
	int t = x+x;
	while (t<=1000000)
	{
		A[t] = 1;
		t+=x;
	}
}

int main()
{
	bool A[1000001] = {0};
	A[1] = 1;
	sangNguyenTo(A,2);
	for (int i=3; i<=500000; i+=2)
		if (!A[i])
		sangNguyenTo(A,i);

	long long n,temp;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> temp;
		 long long sq =(long long) sqrt(temp);
		 if (sq*sq == temp && !A[sq])
		 	cout << "YES";
		 else
		 	cout << "NO";
		 cout << endl;
	}
}
