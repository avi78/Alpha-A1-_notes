#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int min_changes_to_palindrome(string s) {
    int changes = 0;
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            ++changes;
        }
        ++left;
        --right;
    }
    return changes;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int changes = min_changes_to_palindrome(str);
    cout << "Minimum changes required: " << changes << endl;

    return 0;
}