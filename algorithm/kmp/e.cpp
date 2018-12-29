#include<iostream>
#include<vector>
using namespace std;
vector<int> p(1000001);
int k = 0;

void prefix(string str){
	k = 0;
    p.clear();
    p.push_back(0);
    for(int i = 1; i < str.size(); ++i){
        int j = p[i - 1];
        while(j > 0 && str[i] != str[j]){
            j = p[j - 1];
        }
        int res = 0;
        if(str[i] == str[j]){
            res = j + 1;
        }
        p.push_back(res);
    }

    for(int i = 0; i < p.size(); i++){
		if(p[i] == 1)
		k++;
    }
}
int main(){

	string s;

	while(1){
		cin >> s;
		string str = "a#" + s;
		if(s == ".")
			return 0;
		else{
			prefix(str);
			cout << k << endl;
		}
	}


	return 0;
}