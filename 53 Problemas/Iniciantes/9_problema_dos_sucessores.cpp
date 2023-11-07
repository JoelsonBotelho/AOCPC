#include <bits/stdc++.h>
using namespace std;
int main(){
  int i;
  vector<int> n;
  do{
    cin >> i;
    if((i>=-4000) && (i<=4000)) n.push_back(i);
  }while(i != 0);
  for(i=0; i < n.size()-1; i++){cout << n[i] + 1 << endl;}
  return 0;
}