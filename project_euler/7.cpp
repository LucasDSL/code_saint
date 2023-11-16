#include<iostream>
#include<cmath>
using namespace std; 

bool itItPrime(int n) {
    if(n == 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i <= sqrt(n); i += 2) {
        if(n % i == 0) return false;
    }
    return true;
}
int main() {
    int check_prime = 0;
    int wntd_prime_count = 10001;
    while(true) {
        if(itItPrime(check_prime)) {
            wntd_prime_count--;
        }
        if(wntd_prime_count == 0) {
            cout << check_prime << endl;
            break;
        }
        check_prime++;
    }
}