#include<iostream>
using namespace std;
int main(){
    int p1, c1, p2, c2;
    cin >> p1;
    cin >> c1;
    cin >> p2;
    cin >> c2;

    if(p1*c1 == p2*c2){
        cout << 0 << endl;
    }
    else if(p1*c1 > p2*c2){
        cout << -1 << endl;
    }
    else if(p1*c1 < p2*c2){
        cout << 1 << endl;
    }
}