#include<iostream>
using namespace std;

int main() {
    int dimension;
    cin >> dimension; 

    int sum_lines[dimension] = {0};
    int sum_columns[dimension] = {0};
    int matrix[dimension][dimension];
    for(int i = 0; i < dimension; i++) {
        for(int j = 0; j < dimension; j++) {
            cin >> matrix[i][j];
            sum_lines[i] += matrix[i][j];
            sum_columns[j] += matrix[i][j];
        }
    }
    int wgts[dimension][dimension];
    int bigger_wgt = matrix[0][0];
    for(int i = 0; i < dimension; i++) {
        for(int j = 0; j < dimension; j++) {
            wgts[i][j] = sum_lines[i] + sum_columns[j] - 2 * matrix[i][j];
            if(wgts[i][j] > bigger_wgt) {
                bigger_wgt = wgts[i][j];
            }
        }
    }

    cout << bigger_wgt << "\n"; 
}