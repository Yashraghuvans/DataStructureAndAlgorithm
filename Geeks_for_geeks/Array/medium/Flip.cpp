#include <iostream>

using namespace std;

int countFlips(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a binary number: ";
    cin >> num;

    int flips = countFlips(num);
    cout << "Number of flips required: " << flips << endl;

    return 0;
}
