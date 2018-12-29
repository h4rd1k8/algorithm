#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
vector<int> vec;
void push(int x){
	vec.push_back(x);
}
void pop(){
	cout << vec[vec.size()-1] << endl;
	vec.pop_back();
}
void back(){
	cout << vec.back() << endl;
}
void size(){
	cout << vec.size() << endl;
}
void clear(){
	vec.clear();
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
			cout << "ok" << endl;
		}else if(a == "pop"){
			pop();
		}else if(a == "back"){
			back();
		}else if(a == "size"){
			size();
		}else if(a == "clear"){
			clear();
		}else if(a == "exit"){
			return 0;
		}
	}

	return 0;
}