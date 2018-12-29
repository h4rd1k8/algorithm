#include <iostream>
#include <cmath>
using namespace std;
int main(){

	int n, res;

	cin >> n;

	res = ceil(log(n)/log(2));

	cout << res << endl;
	
	return 0;
}