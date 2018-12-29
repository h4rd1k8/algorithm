#include <iostream>
using namespace std;
int main(){

	int n, u, k, v;

	cin >> n;

	int a[n+1][n+1];

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			a[i][j] = 0;
		}
	}

	int x;

	for(int i = 0; i < n; i++){
		cin>>u;
		cin>>k;
		for(int j = 0;j<k;j++){
			cin>>x;
			a[u][x] = 1;
		}
	}

	for(int i = 1; i <= n; i++){
		for(int j = 1; j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << a[i][n];
		cout << endl;
	}
	

	return 0;
}