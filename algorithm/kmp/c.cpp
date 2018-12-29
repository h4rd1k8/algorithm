#include <iostream>
#include <vector>
using namespace std;
vector <int> fast_prefix_function(string s){
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

int main(){

	int n;
	string s, t;
	while (true)
	{
		cin >> n;
		if (n == 0) break;

		vector<string> v;
		vector<int> c(n);

		for (int i = 0; i < n; i++)
		{
			cin >> s;
			v.push_back(s);
		}
		cin >> t;

		int mx = 0;

		for (int i = 0; i < n; i++)
		{
			int cnt = 0;

			string temp = v[i] + "#" + t;

			vector<int> pi = fast_prefix_function(temp);

			for (int j =  v[i].size() + 1; j < temp.size(); j++)
			{
				if (pi[j] == v[i].size()) cnt++;
			}

			if (cnt > mx) mx = cnt;

			c[i] = cnt;

		}

		cout << mx << endl;

		for (int i = 0; i < n; i++)
		{
			if (c[i] == mx) cout << v[i] << endl;
		}
	}



	return 0;
}
