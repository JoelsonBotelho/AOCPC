#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, m1, x1;
  cin >> t;
  if(t >= 1 && t <= 100000){
    vector<int> m, x;
    for(int i = 0; i < t; i++){
      cin >> m1 >> x1;
      if(m1 >= 1 && m1 <= 1000 && x1 >= 1 && x1 <= 1000){
        m.push_back(m1);
        x.push_back(x1);
      }
    }
    for(int i = 0; i < m.size(); i++){
      cout << ((m[i] <= x[i]) ? "YES" : "NO") << endl;
    }
  }
  return 0;
}