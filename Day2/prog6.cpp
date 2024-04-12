#include <iostream>
using namespace std;

int main() {
    int i, space, k, rows;

    cout << "Enter the number of rows for the diamond pattern: ";
    cin >> rows;

    // Upper half of the diamond
    for (i = 1; i <= rows; ++i) {
        for (space = 1; space <= rows - i; ++space) {
            cout << " ";
        }
        for (k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (i = rows - 1; i >= 1; --i) {
        for (space = 1; space <= rows - i; ++space) {
            cout << " ";
        }
        for (k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}