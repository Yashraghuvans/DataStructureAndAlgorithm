#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(const char* str) {
    int length = strlen(str);

    for (int i = 0; i < length / 2; ++i) {
        if (str[i] != str[length - i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    if (is_palindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
