#include <iostream>
using namespace std;

int main() {

  int x, y, soma, sub, multi, resto;
  float div, media;

  cout << "Informe seu x: " << endl;
  cin >> x;

  cout << "Informe seu y: " << endl;
  cin >> y;

  soma = x + y;
  sub = x - y;
  multi = x * y;
  div = x / y;
  resto = x % y;
  media = soma / 2;
  
  cout << "Soma: " << soma << endl;
  cout << "Subtracao: " << sub << endl;
  cout << "Multiplicacao: " << multi << endl;
  cout << "Divisao: " << div << endl;
  cout << "Resto: " << resto << endl;
  cout << "Media: " << media << endl;
}

