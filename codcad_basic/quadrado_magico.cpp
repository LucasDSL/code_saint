#include<iostream>
using namespace std;
int main(){
    int dimensoes;
    cin >> dimensoes;
    int matriz[dimensoes][dimensoes];

    int lin_atual = 0, diag_atual = 0, col_atual = 0;
    int lin_antiga = 0, diag_antiga = 0, col_antiga = 0;
    for(int i = 0; i < dimensoes; i++){
        lin_atual = 0;
        for(int j = 0; j < dimensoes; j++){
            cin >> matriz[i][j];
            lin_atual += matriz[i][j];
        }
        if (lin_antiga != lin_atual && i != 0){
            cout << -1 << endl;
            break;
        }
        lin_antiga = lin_atual;
    }
    // Verificação de linhas pronta 
}