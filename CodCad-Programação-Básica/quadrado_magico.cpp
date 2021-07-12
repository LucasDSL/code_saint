#include<iostream>
using namespace std;
bool verificalinhas(int dimensoes)
{
    int soma_anterior = 0, soma_atual;
    for(int i = 0; i < dimensoes; i++){

        soma_anterior = soma_atual;
        
        soma_atual = 0;
        
        for(int j = 0; j < dimensoes; j++){
            soma_atual += matriz[i][j];
        }
        
        if(i != 0 && soma_atual != soma_anterior){
            return false;
        }
    }
    return true;
}

int main(){
    int dimensoes;
    cin >> dimensoes;
    int matriz[dimensoes][dimensoes];


    for(int i = 0; i < dimensoes; i++){
        for(int j = 0; j < dimensoes; j++){
            cin >> matriz[i][j];
        }
    }

    bool linhas = verificalinhas(dimensoes);
    
}