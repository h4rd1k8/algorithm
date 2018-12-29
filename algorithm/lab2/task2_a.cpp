#include <iostream>
#include <cmath>
using namespace std;
int main(){
   
   int n, m;
   
   cin >> n >> m;
   
   int a[n];
   
   for(int i = 0; i < n; i++){
      cin >> a[i];
   }

   int b[m];

   for(int i = 0; i < m; i++){
        cin >> b[i]; 
   }
   
   int mindelt = abs(a[0] - b[0]);
   
   int jakyn;
   
   for(int i = 1; i < m; i++){
      if(abs(a[i] - b[i]) < mindelt){
        mindelt = abs(a[i] - b[i]);
        cout << a[i] << endl;
      }
   }
   
  return 0;
}