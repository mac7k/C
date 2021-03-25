#include <iostream>
using namespace std;
// As maçãs custam R$ 0,30 cada se forem compradas menos do que uma dúzia, e R$ 0,25 se
//forem compradas pelo menos doze. Escreva um programa que leia o número de maçãs
//compradas, calcule e escreva o valor total da compra.

int main() {

	int qtdMaca = 0;
	double valorCompra;

	cout << "Qual a quantidade de maca que voce comprou?";
	cin >> qtdMaca;
	
	if(qtdMaca < 12 )
  {
	valorCompra = qtdMaca * 0.30;
  }
	else
  {
	valorCompra = qtdMaca * 0.25;
	}

  cout << "Valor a pagar: " << valorCompra << endl;
  
  return 0;

}
