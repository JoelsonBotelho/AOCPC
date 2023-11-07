#include <bits/stdc++.h>
using namespace std;
int main(){
  int n = 0, primeiro = 0, segundo = 1, proximo = 0;
  cin >> n;
  if(n >= 1 && n <= 40){
    if(n >= 1) cout << primeiro << endl;
    if(n >= 2) cout << segundo << endl;
    if(n >= 3){
      for(int i = 2; i <= n; i++){
        proximo = primeiro + segundo;
        cout << proximo << endl;
        primeiro = segundo;
        segundo = proximo;
      }
    }
  }
  return 0;
}