 #include <bits/stdc++.h>
using namespace std;
int main(){
  map<string,int> mapa;
  string palavra, aux;
  double num, tam;
  cin >> palavra;
  for(int i = 0; i < palavra.length(); i++){
    if(isalpha(palavra[i])) {
      aux = palavra[i];
      tam++;
      (mapa.find(aux) != mapa.end()) ? mapa[aux]++ : mapa[aux] = 1;
    }
  }
  for(const auto par : mapa){
    if(par.second > num) num = par.second;
  }
  for(const auto par : mapa){
    if(par.second == num){
      cout << par.first << " " << fixed << setprecision(2) << ((num / tam) * 100) << "%" << endl;
    } 
  }
  return 0;
}