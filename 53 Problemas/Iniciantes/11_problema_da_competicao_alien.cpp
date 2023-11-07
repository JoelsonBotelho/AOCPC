#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, cont = 0, p = 0;
  string pal;
  cin >> n;
  if(n >= 1 && n <= 10){
    cin >> pal;
    for(int i = 0; i < pal.length()-1; i++){
      if(pal[i] >= 'a' && pal[i] <= 'z'){
        cont++;
        if(!(pal[i+1] >= 'a' && pal[i+1] <= 'z') && cont == n){ 
          p++;
          cont = 0;
        }
      }else cont = 0;
    }
    cout << p;
  }
  return 0;
}