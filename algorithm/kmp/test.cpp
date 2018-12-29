#include<iostream>
#include<vector>

using namespace std;

vector<int> p;
int k = 0;
    
bool prefix(string str){
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
        if(p[i] == 1 && p[i+str.size()] == str.size()){
            return 1;
            k++;
        }
    }
    return -1;
}

int main(){

    string s, t;
    

    cin >> t >> s;

    string str = t + "#" + s;

    cout << str << endl;

    if(prefix(str)){
        cout << k << endl;
        for(int i = 1; i <= p.size(); i++){
        if(p[i] == 1 && p[i+str.size()-1] == str.size())
            cout << i;
        }
    }else cout << "Not Found";


    return 0;
}