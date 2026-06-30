#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;

    vector<string> words(n);

    cout << "Enter words:\n";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    string s;
    cout << "Enter string: ";
    cin >> s;

    int count = 0;

    for (string word : words) {
        if (s.find(word) == 0) {
            count++;
        }
    }

    cout << "Count of prefixes = " << count;

    return 0;
}