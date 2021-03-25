#include <iostream>
using namespace std;

//escreva um algoritmo que leia 3 números inteiros e mostre o maior deles.
int main() {
    

 int primeiroValor, segundoValor, terceiroValor;
    

    cout << "Informe 3 valores inteiros: ";
    cin >> primeiroValor;
    cin >> segundoValor;
    cin >> terceiroValor;
    
    cout << "\n\n Valores informados: " << primeiroValor << ", " << segundoValor << " e " << terceiroValor << endl;
   
    
      if(primeiroValor == segundoValor && segundoValor == terceiroValor)
     {
     cout << "Os tres valores sao iguais\n";
      }
     else
      {
      
      if(primeiroValor > segundoValor && primeiroValor > terceiroValor)
     {
      cout << "O primeiro valor informado e o superior!\n";
      }
        
      else if (segundoValor > terceiroValor)
      {
      cout << "O segundo valor informado e o superior!\n";
      }
      else
      {
      cout << "O terceiro valor informado e o superior!\n";
      }
    }
}
