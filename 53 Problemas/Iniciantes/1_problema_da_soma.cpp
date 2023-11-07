#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, numero, somaDecimal = 0, somaHexa = 0, somaOcta = 0;
  cin >> n;
  if(n > 1 && n < 1000){
    for(int i = 0; i < n; i++){
      cin >> numero;
      if(numero >= 0){
        somaDecimal += numero;
        numero % 2 == 0 ? somaHexa += numero : somaOcta += numero;
      }
      else {i--;}
    }
    cout << somaDecimal << endl << hex << somaHexa << endl << oct << somaOcta;
  }
  return 0;
}