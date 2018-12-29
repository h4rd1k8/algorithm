#include <iostream>
using namespace std;

void bubsort(int a[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int a[100100];
	int max = 1;
	int repeat = 0;
	int temp = 1;
	int total = n;
	bool b = false;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	bubsort(a, n);

	a[n] = -1;

	for (int i = 0; i < n; i++)
	{
		if (a[i] != a[i + 1])
		{
			if (b == true) 
			{
				total = total - temp + 1;
			}
			if (temp > max)
			{
				max = temp;
			}
			temp = 1;
			b = false;
		}
		else
		{
			b = true;
			temp++;
		}
	}

	cout << max << " " << total << endl;


	return 0;
}