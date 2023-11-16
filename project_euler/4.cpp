#include<iostream>
#include<cmath>
using namespace std;

void reverseString(string &str) {
    int n = str.length();
    for(int i = 0; i<n/2; i++) {
        swap(str[i], str[n-i-1]);
    }
}

bool palindrome(int n) { // using strings
    string numberString = to_string(n);
    reverseString(numberString);
    int numberReversed = stoi(numberString);
    if(n == numberReversed) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int n_digits = 3;
    int bigger_palindrome = 0; // The first palindrome found is not the bigger one
    for(int i = pow(10, n_digits) - 1; i > pow(10, n_digits-1); i--) {
        for(int j = pow(10, n_digits) - 1; j > pow(10, n_digits-1); j--) {
            int try_palindrome = i*j;
            if (palindrome(try_palindrome)) {
                bigger_palindrome = max(bigger_palindrome, try_palindrome);
            }
        }
    }
    cout << bigger_palindrome << endl;
    return EXIT_SUCCESS;
}