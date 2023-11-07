#include <bits/stdc++.h>
using namespace std;
int main(){
  int j, n;
  do{
    cin >> j;
    if((j >= -10000) && (j <= 10000) && sqrt(n) == floor(sqrt(n))) n++;
  }while(j != 0);
  cout << n;
  return 0;
}