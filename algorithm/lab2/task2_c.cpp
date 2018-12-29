#include <iostream>
using namespace std;
int n,n1;
int a[100500];
bool find(int x, int l, int r){
    if(l > r) return false;
    int m = (l + r) / 2;
    if(a[m] == x) return true;
    else if(a[m] > x) return find(x, l, m - 1);
    else return find(x, m + 1, r);
}
int main(){

	cin >> n >> n1;

	for(int i = 0; i < n; i++){
	cin >> a[i];
	}

	int b[n1];

	for(int i = 0; i < n1; i++){
	cin >> b[i];
	}

	for(int i = 0; i < n1; i++){
		if(find(b[i], 0, n-1)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	return 0;
}
//REINDENT