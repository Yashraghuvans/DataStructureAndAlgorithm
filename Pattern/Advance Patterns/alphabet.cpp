#include <iostream>
using namespace std;

class Pattern
{
public:
    void alphabet(int n)
    {
        int x = n;
        char start = 'A'; 
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << (char)(start + j); 
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
                cout << (char)(start + j); 
            }
            cout << endl;
        }
    }
};

int main()
{
    int x = 5;
    Pattern p;
    p.alphabet(x);
    return 0;
}