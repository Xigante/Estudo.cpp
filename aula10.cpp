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
    else{
        cout << "Voce foi reprovado(a),"<< nome <<" estude mais "<< "\n";
    }



    return 0;
}