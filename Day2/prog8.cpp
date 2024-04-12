#include <iostream>
#include <string>
using namespace std;

string compare_versions(const string& v1, const string& v2) {
    size_t i = 0, j = 0; // Pointers for version strings
    while (i < v1.length() || j < v2.length()) {
        int num1 = 0, num2 = 0;

        // Extract segments from v1
        while (i < v1.length() && v1[i] != '.') {
            num1 = num1 * 10 + (v1[i++] - '0');
        }

        // Extract segments from v2
        while (j < v2.length() && v2[j] != '.') {
            num2 = num2 * 10 + (v2[j++] - '0');
        }

        if (num1 < num2) return "downgraded";
        if (num1 > num2) return "upgraded";

        // Move to the next segment
        ++i;
        ++j;
    }

    return "same";
}

int main() {
    string v1, v2;
    cin >> v1 >> v2;
    cout << compare_versions(v1, v2) << endl;

    return 0;
}