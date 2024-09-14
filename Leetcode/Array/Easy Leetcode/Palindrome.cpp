#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int num) {
        if (num < 0 || (num % 10 == 0 && num != 0)) {
            return false;
        }

        int reversed = 0;
        while (num > reversed) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }

        return (num == reversed) || (num == reversed / 10);
    }
};

int main() {
    int number;
    cout << "Enter a number: ";
    cin>>number;

    Solution s;
    bool is_palindrome = s.isPalindrome(number);

    if (is_palindrome) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
