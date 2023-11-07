#include <bits/stdc++.h>
using namespace std;
int main(){
  int n = 0, homens = 0, mulheres = 0, cart = 0;
  cin >> n;
  if(n >= 1 && n <= 1000){
    for(int i = 0; i < n; i++){
      cin >> cart;
      if(cart >= 1 && cart <= 500)
        (cart % 2 == 0) ? mulheres++ : homens++;
    }
    (homens == mulheres) ? cout << "S" : cout << "N";
  }
  return 0;
}