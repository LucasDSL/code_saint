#include<iostream> 
#include <math.h>
using namespace std;
void primeFactors(long int n) {
    while (n % 2 == 0) {
        n = n / 2;
        cout << 2 << " ";
    }

    for(int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            n = n / i;
            cout << i << " ";
        }
    }
    if(n > 2) {
        cout << n << endl;
    }

}
int main() {
    primeFactors(600851475143);
    return EXIT_SUCCESS;
}