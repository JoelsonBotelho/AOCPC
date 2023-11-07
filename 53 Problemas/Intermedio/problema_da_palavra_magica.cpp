#include <bits/stdc++.h>
using namespace std;
int main(){
  string s, part1, part2;
  cin >> s;
  if(s.length() >= 2 && s.length() <= 100){
    if(s.length()%2 == 0){
      part1 = s.substr(0, (s.length()/2));
      part2 = s.substr((s.length()/2));
      sort(part1.begin(), part1.end());
      (part1 == part2) ? cout << "S" : cout << "N";
    }else cout << "N";
  }
  return 0;
}