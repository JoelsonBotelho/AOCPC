#include <bits/stdc++.h>
using namespace std;
int main(){
  string s1, s2;
  int aux;
  cin >> s1 >> s2;
  if (s1.length() != s2.length()) cout << aux;
  else {
    aux = (s1 + s1).find(s2) != string::npos;
    cout << aux;
  }
  return 0;
}