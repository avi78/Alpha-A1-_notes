#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[100], n;
    int maxi = INT_MIN;
    int second_max = INT_MIN;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > maxi) {
            second_max = maxi;
            maxi = arr[i];
        } else if (arr[i] > second_max && arr[i] != maxi) {
            second_max = arr[i];
        }
    }

    if (second_max == INT_MIN) {
        cout << "There is no second highest element." << endl;
    } else {
        cout << "Second highest value: " << second_max << endl;
    }

    return 0;
}