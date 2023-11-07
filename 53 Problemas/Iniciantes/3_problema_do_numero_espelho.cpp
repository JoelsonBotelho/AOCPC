#include <bits/stdc++.h>
using namespace std;
int main(){
  int numHex; 
  string numDec, inverso;
  cin >> hex >> numHex;
  stringstream num; 
  num << dec << numHex;
  num >> numDec;
  inverso = numDec;
  reverse(inverso.begin(),inverso.end());
  (numDec == inverso) ? cout << "S" : cout << "N";
  return 0;
}