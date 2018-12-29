#include <iostream>
using namespace std;
int main(){

	string s, a = "";

	cin >> s;

	for(int i = 0; i < s.size(); i++){
		a = a + s[i];
		cout << a << endl;
	}

	return 0;
}