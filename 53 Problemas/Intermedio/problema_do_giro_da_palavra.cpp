 #include <bits/stdc++.h>
using namespace std;
int main(){
  string s1, s2, aux, aux2, a;
  int i = 0;
  cin >> s1 >> s2;
  aux2 = s1;
  do{
    a = aux2[0];
    for(int j = 1; j < s1.length(); j++){
      aux += aux2[j];
    }
    aux += a;
    if(aux.compare(s2) == 0) i++;
    else aux2 = aux;
    aux = "";
  }while(aux2!=s1 && i != 1);
  (i == 1) ? cout << 1 : cout << 0;
  return 0;
}