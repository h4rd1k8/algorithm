#include <iostream>
using namespace std;
int k = 0;
int cnt(string s){
	for(int i = 0; i < s.size();i++){
		if(s[i] == a){
			continue;
			k++;
		}

	}
	cout << k;
}
int main(){

	string s;

	while(1){
		cin >> s;
		if(s == ".")
			return 0;
		else cnt(s);
	}

	return 0;
}