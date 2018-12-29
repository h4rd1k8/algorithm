#include <iostream>
using namespace std;
int a[100];
int sz = 0;
void push(int n){
	a[sz] = n;
	sz++;
}
void pop(){
	if(sz == 0){
		cout << "error" << endl;
	}else{
	cout << a[sz - 1] << endl;
	sz--;
	}
	
}
void back(){
	if(sz == 0){
		cout << "error" << endl;
	}else{
		cout << a[sz-1] << endl;
	}
}
void size(){
	cout << sz << endl;
}
void clear(){
	sz = 0;
	
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
			cout << "ok" << endl;
		}else if(a == "exit"){
			exit();
			return 0;
		}
	}


	return 0;
}