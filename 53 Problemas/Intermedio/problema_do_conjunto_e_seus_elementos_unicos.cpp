#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> k(n);
  if(n >= 1 && n <= 1000){
    for(int i = 0; i < n; i++){
      cin >> k[i];
    }
    sort(k.begin(), k.end());
    k.erase(unique(k.begin(), k.end()), k.end());
    for(int num : k){
      cout << num << endl;
    }
  }
  return 0;
}