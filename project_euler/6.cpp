// https://projecteuler.net/problem=6
// Sum squarte diff 

#include<iostream>
using namespace std; 

int sumOfSquares(int size) {
    int sum = 0;
    for(int i = 1; i <= size; i++) {
        sum += i * i;
    }   
    return sum;
}

int squareOfSums(int size) {
    int sum = 0;
    for(int i = 1; i <= size; i++) {
        sum += i;
    }   
    return sum * sum ;
}
int main() {
    int diff = squareOfSums(100) - sumOfSquares(100);
    cout << diff << endl;
}