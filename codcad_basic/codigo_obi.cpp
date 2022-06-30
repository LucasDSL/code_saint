#include<iostream>
using namespace std;
int main(){
    int tamanho, numero, contador_100 = 0;
    cin >> tamanho;
    int lista[tamanho];

    for (int i = 0; i < tamanho; i++){
        cin >> lista[i];
        if (i >= 2){
            if(lista[i] == 0 && lista[i-1] == 0 && lista[i-2] == 1){
                contador_100++;
            }
        }
    }

    cout << contador_100 << endl;
}