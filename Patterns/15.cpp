#include <iostream>
using namespace std;

int main() {

    int n = 3;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << (char) ('A' + i) << " ";
        }
        cout << endl;
    }
    

    return 0;
}
/*
A
B B
C C C
*/