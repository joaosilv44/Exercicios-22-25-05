
#include <iostream>
using namespace std;

int main() {
    int vet[6];
    
    cout << "Digite 6 números inteiros : \n";
    for(int i = 0; i < 6; i++){
        cout << i + 1 << "° : ";
        cin >> vet[i];
    }
        cout << "\nOs números na ordem inversa são: \n";
    for(int i = 5; i >= 0; i--){
        cout << vet[i] << endl;
    }

    return 0;
}
