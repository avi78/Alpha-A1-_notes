#include <iostream>
#include <string>
using namespace std;

int reduce_to_single_digit(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

bool is_mars_number(int num) {
    int steps = 0;
    while (num >= 10) {
        num = reduce_to_single_digit(num);
        steps++;
    }
    return steps % 2 == 0;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (is_mars_number(num)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}