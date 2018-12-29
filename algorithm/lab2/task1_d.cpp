#include <iostream>
#include <algorithm>
using namespace std;
int main(){

	int n;

	cin >> n;

	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	int x;

	cin >> x;

	for(int i = 0; i < n; i++){
		if(x == i){
			cout << i; break;
		}
	}

	return 0;
}	