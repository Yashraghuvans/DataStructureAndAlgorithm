#include <iostream>
using namespace std;

class Pattern
{
public:
    void hourglass(int n)
    {
        
        for (int i = n; i >= 1; i--)
        {
            
            for (int j = 1; j <= n - i; j++)
            {
                cout << " ";
            }

           
            cout << char('A' + i - 1);

            
            for (int j = 2; j <= 2 * (i - 1) - 1; j++)
            {
                cout << " ";
            }

           
            if (i > 1)
            {
                cout << char('A' + i - 1);
            }

            cout << endl;
        }

        
        for (int i = 2; i <= n; i++)
        {
            
            for (int j = 1; j <= n - i; j++)
            {
                cout << " ";
            }

            
            cout << char('A' + i - 1);

            
            for (int j = 2; j <= 2 * (i - 1) - 1; j++)
            {
                cout << " ";
            }

            
            if (i > 1)
            {
                cout << char('A' + i - 1);
            }

            cout << endl;
        }
    }
};

int main()
{
    int x = 15;
    Pattern p;
    p.hourglass(x);
    return 0;
}