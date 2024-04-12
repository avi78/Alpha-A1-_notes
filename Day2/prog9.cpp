#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int longest_substring_with_distinct_chars(const string& s) {
    unordered_set<char> char_set;
    int max_length = 0;
    int start = 0;

    for (int end = 0; end < s.length(); ++end) {
        if (char_set.find(s[end]) == char_set.end()) {
            char_set.insert(s[end]);
            max_length = max(max_length, end - start + 1);
        } else {
            while (char_set.find(s[end]) != char_set.end()) {
                char_set.erase(s[start]);
                ++start;
            }
            char_set.insert(s[end]);
        }
    }

    return max_length;
}

int main() {
    string s;
    cin >> s;
    cout << longest_substring_with_distinct_chars(s) << endl;
    return 0;
}