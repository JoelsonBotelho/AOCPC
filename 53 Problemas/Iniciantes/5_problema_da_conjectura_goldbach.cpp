#include <bits/stdc++.h>
using namespace std;
int ehPrimo(int n){
  int div = 0;
  for(int i = 1; i <= n; i++){
    if(n % i == 0) div++;
    if(div > 2) return 0;
  }
  if(div == 2) return 1;
  return 0;
}
int main(){
  unsigned int p;
  cin >> p;
  if(p%2 == 0 && p >= 2 && p <= 4294967294){
    for(unsigned int i = 2; i <= p/2; i++)
      {
        if(ehPrimo(i) && ehPrimo(p-i)) {
          cout << i << endl << p-i << endl;
          break;
        }
      }
  }
  return 0;
}