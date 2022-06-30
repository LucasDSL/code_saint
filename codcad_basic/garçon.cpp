#include<iostream>
using namespace std;
int main(){
    int latas, copos, viagens;
    cin >> viagens;
    int copos_quebrados = 0;
    while (viagens > 0){
        cin >> latas >> copos;
        if(latas > copos){
            copos_quebrados = copos_quebrados + copos;
        }
        viagens -= 1;
    }

    cout << copos_quebrados << endl;
}