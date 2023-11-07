#include <bits/stdc++.h>
using namespace std;
int binDec(string binario){
  int r = 0, pot = 1;
  for(int i = binario.length() - 1; i >= 0; i--){
    if(binario[i] == '1') r += pot; 
    pot *= 2;
  }
  return r;
}
string decBin(int decimal){
  if(decimal == 0) return "00000000";
  string bin = "";
  while (decimal > 0){
    int bit = decimal % 2;
    bin = to_string(bit) + bin;
    decimal /= 2;
  }
  while(bin.length() != 8){
    bin = "0" + bin;
  }
  return bin;
}
int main(){
  string n1, n2, res;
  char op;
  int resultado = 0;
  cin >> op >> n1 >> n2;
  switch(op){
    case '+' :
      resultado = binDec(n1) + binDec(n2);
      cout << decBin(resultado);
      break;
    case '-' :
      resultado = binDec(n1) - binDec(n2);
      cout << decBin(resultado);
      break;
    case '*' :
      resultado = binDec(n1) * binDec(n2);
      cout << decBin(resultado);
      break;
    case '/' :
      resultado = binDec(n1) / binDec(n2);
      cout << decBin(resultado);
      break;
    case '%' :
      resultado = binDec(n1) % binDec(n2);
      cout << decBin(resultado);
      break;
  }
}