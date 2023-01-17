// https://projecteuler.net/problem=1
// Multiples of 3 or 5 
#include<iostream>
using namespace std; 

bool isItMultipleOf(int number, int listOfNumbers[]) {
    if(number % listOfNumbers[0] == 0
    || number % listOfNumbers[1] == 0) {
        cout << number << endl;
        return true;
    }
    return false;
}

int main() {
    int multiples[2] = {3, 5};
    int sumOfMultiple = 0; 
    for(int i = 0; i < 1000; i++) {
        if(isItMultipleOf(i, multiples)) {
            sumOfMultiple += i;
        }
    }
    cout << sumOfMultiple << endl;
}