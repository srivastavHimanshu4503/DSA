#include <iostream>
using namespace std;

int main() {

    int n = 4;

    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << (char) ('A' + count++) << " ";
        }
        cout << endl;
    }
    
    return 0;
}
/*
A
B C
D E F
G H I J
*/