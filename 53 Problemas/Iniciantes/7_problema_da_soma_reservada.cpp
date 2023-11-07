#include <bits/stdc++.h>
using namespace std;
int inverter(int num){
  int invertido = 0;
  while(num > 0){
    int digito = num % 10;
    invertido = (invertido * 10) + digito;
    num /= 10;
  }
  return invertido;
}
int main(){
  int n, m;
  cin >> n >> m;
  cout << inverter(inverter(n) + inverter(m)); 
  return 0;
}