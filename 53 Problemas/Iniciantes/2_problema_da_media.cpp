#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, cont = 0, soma = 0, numero;
  double media;
  cin >> n;
  if(n > 1 && n < 1000){
    for(int i = 0; i < n; i++){
      cin >> numero;
      if(numero >= -1000 && numero <= 1000){
        soma += numero;
        cont++;
      }
      else {i--;}
    }
    media = static_cast<double>(soma) / cont;
    cout << fixed << setprecision(1) << media;
  }
  return 0;
}