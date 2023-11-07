#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, cont = 0, part, tamanho; 
  string num, num2;
  cin >> n;
  if(n >= 1 && n <= 100000000){
    double raiz = sqrt(n);
    if(raiz == floor(raiz)){
      num2 = to_string(n);
      tamanho = num2.length()-1;
      while(cont != num2.length()-1){
        num += num2[cont];
        part = stoi(num2) - (stoi(num) * pow(10,tamanho));
        tamanho--;
        cont++;
        if((stoi(num) + part) == raiz) {cout << 1;}
      }
    }
    else cout << 0;
  }
  return 0;
}