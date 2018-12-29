#include <iostream>
using namespace std;
int main(){

	string s;

	int n1 = 0, n2 = 0, n3 = 0;

	cin >> s;

	for(int i = 0 ; i < s.size(); i++){
		if(s[i] == '1'){
			n1++;
		}else if(s[i] == '2'){
			n2++;
		}else if(s[i] == '3'){
			n3++;
		}
	}

	for(int i = 0; i < n1; i++){
		cout << 1;
		if (i != n1 - 1){
			cout << "+";
		}
	}

	if (n2 != 0 && n1 != 0 && n3 != 0){
		cout << "+";
	}

	for(int i = 0; i < n2; i++){
		cout << 2;
		if (i != n2 - 1){
			cout << "+";
		}
	}

	if (n3 != 0 && n2 != 0 && n3 != 0){
		cout << "+";
	}

	for(int i = 0; i < n3; i++){
		cout << 3;
		if (i != n3 - 1){
			cout << "+";
		}
	}

	cout << endl;


	return 0;
}