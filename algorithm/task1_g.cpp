#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

vector<int> qu;

void push_front(int n){
	qu.insert(qu.begin(), n);
	cout << "ok" << endl;
}

void push_back(int n){
	qu.insert(qu.end(), n);
	cout << "ok" << endl;
}

void back(){
	if(qu.empty()){
		cout << "error" << endl;
	}else{
		cout << qu[qu.size()-1] << endl;
	}
}

void pop_back(){
	if(qu.empty()){
		cout << "error" << endl;
	}else{
		cout << qu[qu.size()-1] << endl;
		qu.erase(qu.end());
	}
}

void pop_front(){
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
		if(a == "push_front"){
			cin >> n;
			push_front(n);
		}else if(a == "back"){
			back();
		}else if(a == "push_back"){
			cin >> n;
			push_back(n);
		}else if(a == "pop_back"){
			pop_back();
		}else if(a == "pop_front"){
			pop_front();
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