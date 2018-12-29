#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> fast_prefix_function(string s)
{
	int size = s.size();
	vector <int> pi(size);

	pi[0] = 0;

	for (int i = 1; i < size; i++)
	{
		int j = pi[i - 1];
		while (j > 0 && s[i] != s[j])
			j = pi[j - 1];
		if (s[i] == s[j]) j++;
		pi[i] = j;
	}

	return pi;
}

int dif_substring_number (string s)
{
	int ans = 1;
	string temp = "";
	temp += s[0];
	for (int i = 1; i < s.length(); i++)
	{
		temp += s[i];
		string t = temp;
		reverse(t.begin(), t.end());
		vector<int> v;
		v = fast_prefix_function(t);
		int mx = -1;
		for (int j = 0; j < v.size(); j++)
		{
			if (v[j] > mx) mx = v[j];
		}
		ans += (temp.length() - mx);
	}
	return ans;
}

int main(){

	int t;
	cin >> t;
	string s;
	for (int i = 0; i < t; i++)
	{
		cin >> s;
		cout << dif_substring_number(s) << endl;
	}

	return 0;
}