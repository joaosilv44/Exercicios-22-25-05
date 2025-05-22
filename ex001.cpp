#include <iostream>
using namespace std;

int main() {
   int vet[8], maior = 0, menor = 0, posicao = 1, posicaoM;
   
   cout << "Digite 10 números inteiros para obter sua soma: \n";
   for(int i = 0; i < 8; i++){
       cout << i + 1 << "° número: ";
       cin >> vet[i];
       menor = vet[0];
       
       if(vet[i] > maior){
           maior = vet[i];
           posicaoM = i + 1;
       }
       if(vet[i] < menor){
           menor = vet[i];
           posicao = i + 1;
       }
   }
   
   cout << "O maior número é " << maior <<" na " << posicaoM << "° posição" <<endl;
   cout << "O menor número é " << menor <<" na " << posicao << "° posição" << endl;
   
   
    return 0;
}