#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int i = 0;
    int j = s.length() - 1;

    while (i < j) {
        if (s[i] == s[j]) {
            i++;
            j--;
        } else {
            return false;
        }
    }

    return true;
}

int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    if (isPalindrome(s)) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}