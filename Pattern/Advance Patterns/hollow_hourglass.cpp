#include <iostream>
using namespace std;

class Pattern {
public:
        void hourglass(int n) {
        int x = 2 * n - 1;
        char start = 'A'; 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            for (int j = 0; j < x - 2 * i; j++) {
                cout << (char)(start + j);
            }
            cout << endl;
        }

        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            for (int j = 0; j < x - 2 * i; j++) {
                cout << (char)(start + j);
            }
            cout << endl;
        }
    }
};

int main() {
    int x = 5;
    Pattern p;
    p.hourglass(x);
    return 0;
}