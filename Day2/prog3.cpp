#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, rem, evenDigits[20], count = 0;
    cin >> n;

    while (n != 0) {
        rem = n % 10;
        if (rem % 2 == 0) {
            evenDigits[count++] = rem;
        }
        n /= 10;
    }

    for (int i = count - 1; i >= 0; i--) {
        cout << evenDigits[i] << endl;
    }

    return 0;
}