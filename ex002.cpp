#include <iostream>
using namespace std;

int main() {
    int vet[15], pares[15], impares[15], posPar[15], posImpar[15];
    int contPar = 0, contImpar = 0;
    
    cout << "Digite 15 números inteiros : \n";
    
    for(int i = 0; i < 15; i++){
        cout << "Digite o " << i + 1 << "° número :";
        cin >> vet[i];
        
        if(vet[i] % 2 == 0){
            pares[contPar] = vet[i];
            posPar[contPar] = i + 1;
            contPar++;
        }
        else {
            impares[contImpar] = vet[i];
            posImpar[contImpar] = i + 1;
            contImpar++;
        }
    }
    cout << "Números Pares : \n";
     for(int i = 0; i < contPar; i++){
         cout << pares[i] << " na posição " << posPar[i] << endl;
     }
    cout << "Números Ímpares : \n";
     for(int i = 0; i < contImpar; i++){
         cout << impares[i] << " na posição " << posImpar[i] << endl;
     }
   

    return 0;
}