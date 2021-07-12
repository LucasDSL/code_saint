#include<iostream>
using namespace std;
int main(){
    int tamanho, minas_ao_redor = 0;
    cin >> tamanho;
    int campo[tamanho], espelho[tamanho];
    for(int i = 0; i < tamanho; i++){
        cin >> campo[i];
    }
    
    for(int i = 0; i < tamanho; i++){
        // Checa a casa 'i' atual
        if(campo[i]==1){
            minas_ao_redor++;
        }
        // Checa a casa anterior e posterior à 'i' e suas possíveis exceções com só uma casa 
        if (i == 0){
            if(campo[i+1]==1){
                minas_ao_redor++;
            }
        }
        else if(i == tamanho - 1){
            if(campo[i-1]==1){
                minas_ao_redor++;
            }
        }
        else{
            if(campo[i+1]==1){
                minas_ao_redor++;
            }
            if(campo[i-1]==1){
                minas_ao_redor++;
            }
        }
        espelho[i] = minas_ao_redor;
        minas_ao_redor = 0;
    }   
    
    for(int i = 0; i < tamanho; i++){
        cout << espelho[i] << endl;
    }
}