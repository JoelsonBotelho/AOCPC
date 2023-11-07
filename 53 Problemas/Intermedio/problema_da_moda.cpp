#include <bits/stdc++.h>
using namespace std;
int main(){
  map<string,int> mapa;
  int k = 1, num;
  vector<int> n;
  while(k != 0){
    cin >> k;
    (mapa.find(to_string(k)) != mapa.end()) ? mapa[to_string(k)]++ : mapa[to_string(k)] = 1;
  }
  for(const auto par : mapa){
    if(par.second > num) num = par.second;
  }
  for(const auto par : mapa){
    if(par.second == num){
      n.push_back(stoi(par.first));
    } 
  }
  sort(n.begin(), n.end());
  for(int ele : n){
    cout << ele << endl;
  }
  return 0;
}