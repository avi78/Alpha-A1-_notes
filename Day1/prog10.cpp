#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0; // Initialize sum to zero

    // Input the array elements and calculate the sum
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        sum += num;
    }

    // Calculate the average
    double average = (double)sum / n;

    // Output the average
    cout << average << endl;

    return 0;
}
