#include <iostream>
#include <vector>
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

int power_string(string s)
{
	vector<int> v = fast_prefix_function(s);
	int size = s.length();
	int k = size - v[size - 1];
	return size / k;
}
int main(){

	string s;
	while (cin >> s)
	{
		if (s == ".") return;
		cout << power_string(s) << endl;
	}

	return 0;
}