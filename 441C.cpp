#include <string>
#include <iostream>

using namespace std;

void xuat(int x, int y)
{
	cout << x << " " << y << " ";
}

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	int temp = k;
	int x = 1; int y = 1;

	while (temp-- > 1)
	{
		cout << 2 << " ";
		for (int i = 1; i <= 2;i++)
		{
			xuat(x, y);
			if (x % 2 != 0 && y < m)
				y++;
			else if (x % 2 == 0 && y > 1)
				y--;
			else if (x % 2 != 0 && y == m)
				x++;
			else if (x % 2 == 0 && y == 1)
				x++;
		}
		cout << endl;
	}

	int dem = (n*m) - 2 * (k - 1);
	cout << dem << " ";
	for (int i = 1; i <= dem;i++)
	{
		xuat(x, y);
		if (x % 2 != 0 && y < m)
			y++;
		else if (x % 2 == 0 && y > 1)
			y--;
		else if (x % 2 != 0 && y == m)
			x++;
		else if (x % 2 == 0 && y == 1)
			x++;
	}
}