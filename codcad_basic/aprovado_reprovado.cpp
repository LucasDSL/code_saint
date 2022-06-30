#include<iostream>
using namespace std;
int main(){
    double nota1, nota2;

    cin >> nota1 >> nota2;

    double soma_notas = (nota1 + nota2) / 2;

    if(soma_notas >= 7){
        cout << "Aprovado" << endl;
    }
    else if(soma_notas < 7 && soma_notas >= 4){
        cout << "Recuperacao" << endl;
    }
    else{
        cout << "Reprovado" << endl;
    }

}