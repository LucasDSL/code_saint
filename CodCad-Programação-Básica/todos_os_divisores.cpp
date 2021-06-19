#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= int(n/2);i++){
        if (n % i == 0){
            cout << i << ' ';
        }
    }
    cout << n << endl;
}