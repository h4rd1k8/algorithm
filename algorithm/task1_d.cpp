#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
std::vector<int> stek;

void push(int n){
	stek.insert(stek.end(), n);
	cout << "ok" << endl;
}

void pop(){
	if(stek.empty()){
		cout << "error" << endl;
	}else{
		cout << stek[stek.size()-1] << endl;
		stek.pop_back();
	}
}

void back(){
	if(stek.empty()){
		cout << "error" << endl;
	}else{
		cout << stek[stek.size()-1] << endl;
	}
}

void size(){
	cout << stek.size() << endl;
}

void clear(){
	stek.clear();
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
		}else if(a == "back"){
			back();
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