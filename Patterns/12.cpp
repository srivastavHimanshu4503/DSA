#include <iostream>
using namespace std;

int main() {

    int n = 3;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << (char) ('A' + j) << " ";
        }
        cout << endl;
    }

    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= n; j++) {
    //         cout << (char) ('A' + j - 1) << " ";
    //     }
    //     cout << endl;
    // }
    

    return 0;
}
/*
A B C
A B C
A B C
*/