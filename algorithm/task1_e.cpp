#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

vector<int> qu;

void push(int n){
	qu.insert(qu.end(), n);
	cout << "ok" << endl;
}

void pop(){
	if(qu.empty()){
		cout << "error" << endl;
	}else{
		cout << qu[0] << endl;
		qu.erase(qu.begin());
	}
}

void front(){
	if(qu.empty()){
		cout << "error" << endl;
	}else{
		cout << qu[0] << endl;
	}
}

void size(){
	cout << qu.size() << endl;
}

void clear(){
	qu.clear();
	cout << "ok" << endl;
}

void exit(){
	cout << "bye" << endl;
}

int main(){

	string a;

	int n;

	while(1){
		cin >> a;
		if(a == "push"){
			cin >> n;
			push(n);
		}else if(a == "pop"){
			pop();
		}else if(a == "front"){
			front();
		}else if(a == "size"){
			size();
		}else if(a == "clear"){
			clear();
		}else if(a == "exit"){
			exit();
			return 0;
		}
	}

	return 0;
}