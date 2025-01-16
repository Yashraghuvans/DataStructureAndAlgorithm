#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int getTotalX(vector<int> a, vector<int> b) {
    int maxA = *max_element(a.begin(), a.end());
    int minB = *min_element(b.begin(), b.end());
    int count = 0;

    for (int i = maxA; i <= minB; i++) {
        bool isFactorOfAllB = true;
        bool isMultipleOfAllA = true;

        for (int j = 0; j < b.size(); j++) {
            if (b[j] % i != 0) {
                isFactorOfAllB = false;
                break;
            }
        }

        for (int j = 0; j < a.size(); j++) {
            if (i % a[j] != 0) {
                isMultipleOfAllA = false;
                break;
            }
        }

        if (isFactorOfAllB && isMultipleOfAllA) {
            count++;
        }
    }

    return count;
}

