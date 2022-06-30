#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    double num;
    int n;
    cin >> n;
    cout << fixed << setprecision(4);
    for(int i = 0; i < n; i++){
        cin >> num;
        cout << sqrt(num) << endl;
    }
}