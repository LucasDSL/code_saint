#include<iostream>
using namespace std;
int main(){
    int alunos, monitores;
    cin >> alunos;
    cin >> monitores;
    if(alunos + monitores <= 50){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }
}