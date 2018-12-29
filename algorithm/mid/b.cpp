#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

vector<int> qu;

void push_front(int x){
	qu.insert(qu.begin(), x);
}

void push_back(int x){
	qu.push_back(x);
}

void front(){
	cout << qu[0] << endl;
	qu.erase(qu.begin());
}

void back(){
	cout << qu[qu.size() - 1] << endl;
	qu.erase(qu.end());
}

int main(){

	string a;

	int n, op, sz1 = 0, op1 = 0;

	cin >> op;

	while(1){
		cin >> a;
		if(a == "push_front"){
			sz1++;
			op1++;
			cin >> n;
			push_front(n);
			if(sz1 == 0){
				cout << ";(" << endl;
			}
		}else if(a == "push_back"){
			sz1++;
			op1++;
			cin >> n;
			push_back(n);
			if(sz1 == 0){
				cout << ";(" << endl;
			}
		}else if(a == "front"){
			sz1--;
			op1++;
			if(sz1 >= 0){
				front();
			}else{
				cout << ";(" << endl;
			}
		}else if(a == "back"){
			sz1--;
			op1++;
			if(sz1 >= 0){
				back();
			}else{
				cout << ";(" << endl;
			}
		}else if(op1 >= op){
			break;
		}
	}


	return 0;
}