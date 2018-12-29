#include <bits/stdc++.h>
using namespace std;

int binpoisk(int a[], int size, int x)
{
	int l = 0;
	int r = size - 1;
	int mid;
	while (l <= r)
	{
		mid = (l + r) / 2;
		if (x == a[mid]) return mid;
		if (x < a[mid])
		{
			if (x > a[mid - 1])
			{
				return mid;
			}
			r = mid - 1;
		}
		if (x > a[mid])
		{
			if (x < a[mid + 1])
			{
				return mid + 1;
			}
			l = mid + 1;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int a[100100];
	a[0] = 0;
	int x;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		a[i] = a[i - 1] + x;
	}

	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> x;
		cout << binpoisk(a, n + 1, x) << endl;
	}

	return 0;
}