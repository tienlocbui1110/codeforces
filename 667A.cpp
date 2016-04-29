#include <bits/stdc++.h>

#define PI 3.14159265358979323846

using namespace std;

int main()
{
	double d, h, v, e;
	cin >> d >> h >> v >> e;
	double S_circle = (d / 2)*(d / 2)*PI;
	double V_dev = S_circle*e;
	double V_beg = S_circle*h;
	if (V_dev >= v)
	{
		cout << "NO";
		return 0;
	}
	double _decr = (v - V_dev) / V_beg ;
	double kq = 1 / _decr;
	cout << "YES" << endl;
	printf("%0.12lf", kq);
}