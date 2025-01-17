#include <iostream>
using namespace std;

class Patterns
{
public:
    void butterfly(int n)
    {
        int x = 2 * n - 1;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "*";
            }
            for (int j = x; j > i; j--)
            {
                cout << " ";
            }
            for (int j = x; j > i; j--)
            {
                cout << " ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = x; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "*";
            }
            for (int j = x; j > i; j--)
            {
                cout << " ";
            }
            for (int j = x; j > i; j--)
            {
                cout << " ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
};
int main()
{

    // calling value of X
    int x = 5;

    Patterns p;

    p.butterfly(x);

    return 0;
}