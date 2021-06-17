#include<iostream>
using namespace std;
int main(){
    int dias, acesso_dia, acessos_totais = 0, dia_milhao;
    cin >> dias;

    bool dia_milhao_encontrado = false;

    int contador = 1;
    while(contador <= dias){
        cin >> acesso_dia;
        acessos_totais += acesso_dia;
        if(acessos_totais >= 1000000 && dia_milhao_encontrado == false){
            dia_milhao = contador;
            dia_milhao_encontrado = true; 
        }
        contador++;
    }
    cout << dia_milhao << endl;
}