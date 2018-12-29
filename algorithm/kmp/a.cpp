#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int fixed_length_substrings(string s, int k)
{
	const int p = 31;
	vector<long long> ppow (s.length());
	ppow[0] = 1;
	for (int i = 1; i < ppow.size(); i++)
	{
		ppow[i] = ppow[i - 1] * p;
	} 

	vector <long long> h(s.length());
	for (int i = 0; i < s.length(); i++)
	{
		h[i] = (s[i] - 'a' + 1) * ppow[i];
		if (i) h[i] += h[i - 1];
	}

	int cnt = 0;

	vector <long long> hs (s.size() - k + 1);

	for (int i = 0; i < s.size() - k + 1; i++)
	{
		long long curh = h[i + k - 1];
		if (i)  curh -= h[i - 1];

		curh *= ppow[s.size() - i - 1];
		hs[i] = curh;
	}

	sort(hs.begin(), hs.end());
	hs.erase(unique(hs.begin(), hs.end()), hs.end());
	cnt += (int) hs.size();

	return cnt;
}

int main(){

	int t;
	cin >> t;
	int a, b;
	string s;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		cin >> s;
		cout << fixed_length_substrings(s, b) << endl;
	}
}