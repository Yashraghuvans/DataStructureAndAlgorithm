
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int lowerLimit, upperLimit;

    cout << "Enter the lower and upper limits of the range: ";
    cin >> lowerLimit >> upperLimit;

    if (lowerLimit > upperLimit) {
        cout << "Invalid range. Lower limit should be less than or equal to upper limit.\n";
        return 1;
    }

    int primeSum = 0, nonPrimeSum = 0;

    for (int i = lowerLimit; i <= upperLimit; i++) {
        if (isPrime(i)) {
            primeSum += i;
        } else {
            nonPrimeSum += i;
        }
    }

    int absoluteDifference = abs(primeSum - nonPrimeSum);

    cout << "Absolute difference between the sum of prime and non-prime numbers in the range [" << lowerLimit << ", " << upperLimit << "] is: " << absoluteDifference << endl;

    return 0;
}
