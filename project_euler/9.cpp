#include<iostream>
#include<cmath>

using namespace std;
int main() {
    int multiply;
    for(int a = 1000; a >= 1; a--) {
        for(int b = 1000; b >= 1; b--) {
            for(int c = 1000; c >= 1; c--) {
                if(a + b + c > 1000 || pow(a, 2) + pow(b, 2) != pow(c, 2)) {
                    continue;
                }

                if(a + b + c == 1000) {
                    multiply = a * b * c;
                    cout << a << " " << b << " " << c << endl;
                    cout << multiply << endl;
                    return EXIT_SUCCESS;
                } 
            }
        }
    }
}