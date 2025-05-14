#include <iostream>
using namespace std;

int main(){

    int av1,av2,res;
    string nome;
    char opc;

    cout << " Professor informe as notas do aluno, lembrando que as notas vao de 0 a 10" << "\n\n";
    cout << "Digite o nome do Aluno:" << "\n\n";
    cin>> nome;


    cout << "Digite o valor da av1:  ";
    cin >> av1;
    cout << "Digige o valor da av2: ";
    cin>> av2;


    res= av1 +av2;

    if ((res/2) >= 7){

        cout <<"Voce foi aprovado(a), PARABENS! "<< nome << "\n";
    }
    else if((res/2) >= 5 && (res/2) >= 6){
        cout << "\n" << nome << " Voce esta de recuperacao, estude mais" << "\n";
    }
    else if((res/2) < 4){
        cout << "\n" << nome << " Voce foi reprovado, estude mais!" << "\n";
    }
    


    return 0;
}

/*

>= 7 Aprovaod
>=5 < 6 Recuperação
< 4 Reprovado

*/
