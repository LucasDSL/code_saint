#include<iostream>
using namespace std;
int main(){
    int a = 0, b = 0, n, interruptor;

    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> interruptor;
        if(interruptor == 1){
            if(a == 0){a++;}
            else{a--;}
        }
        else if(interruptor == 2){
            if(a == 0){a++;}
            else{a--;}

            if(b == 0){b++;}
            else{b--;}
        }
    }

    cout << a << endl;
    cout << b << endl;
}