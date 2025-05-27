#include <iostream>
using namespace std;

int main() {
    float alunos[5], n1, n2, n3, contador = 0, media[5], soma;//variáveis
    
    while (true){//loop
        for(int i = 0; i < 5; i++){//percorre o vetor
        
            //coleta da notas
            cout << "Digite as notas do aluno " << i + 1 << endl;
            cout << "Nota 1: ";
                cin >> n1;
            cout << "Nota 2: ";
                cin >> n2;
            cout << "Nota 3: ";
                cin >> n3;
            contador++;
            //operações matemáticas
            soma = n1 + n2 + n3;
            media[i] = soma / 3 ;
                //mostra a media do aluno
                 cout << " Média: " << media[i] << endl;
                 cout << "--------------------------\n";
        }
        //para o loop
            if(contador == 5){
                break;
            }
    }
    //Mostra os alunos aprovados
       cout << "\nAlunos com média acima de 7.0:\n";
            for(int i = 0; i < 5; i++){
                if(media[i] >= 7.0){
                    cout << "Aluno " << i + 1 << " foi aprovado com média de: " << media[i] << endl;
                }
            }

    return 0;
}