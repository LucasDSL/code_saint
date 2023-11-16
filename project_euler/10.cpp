#include<iostream>
#include<cmath>

using namespace std;
int MAX_NUMBER = 2000000;

bool isPrime(int n) {
    int n_sqrt = (int)sqrt(n);
    if (n <= 1) {
        return false;
    }
    for(int i = 2; i <= n_sqrt; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // sum of all primes may be longer than 2147483647 (max integer number)
    // could also use uint64_t, better alternative when needing to pass the number by reference
    long int sum = 0; 
    cout << "Primes: ";
    for(int i = 2; i < MAX_NUMBER; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;
    cout << sum << endl;
}