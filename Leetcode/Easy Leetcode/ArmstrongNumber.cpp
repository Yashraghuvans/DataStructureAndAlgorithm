#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isArmstrongNumber(int num) {
        if (num < 0) {
            return false;
        }

        int originalNum = num;
        int numberOfDigits = 0;
        while (originalNum != 0) {
            numberOfDigits++;
            originalNum /= 10;
        }

        int sumOfPowers = 0;
        originalNum = num;
        while (originalNum != 0) {
            int digit = originalNum % 10;
            sumOfPowers += pow(digit, numberOfDigits);
            originalNum /= 10;
        }

        return (sumOfPowers == num);
    }
};

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    Solution s;
    bool isArmstrong = s.isArmstrongNumber(number);

    if (isArmstrong) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
