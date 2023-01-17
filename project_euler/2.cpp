// https://projecteuler.net/problem=2
// Even fibonacci numbers 

#include <iostream>
using namespace std; 

int main() {
    int f1 = 1, f2 = 2;
    int sumOfEvens = 2; 
    while (true) {
        int f3 = f1 + f2;
        if(f3 > 4000000) break;
        f1 = f2;
        f2 = f3; 
        if(f3 % 2 == 0) {
            sumOfEvens += f3;
        }
    }
    cout << sumOfEvens << endl;
}