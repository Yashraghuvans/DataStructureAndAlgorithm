#include <iostream>
using namespace std;

class Solution
{
public:
    void pattern1(int n)
    {
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << " * ";
            }
            cout << endl;
        }
    }
    void pattern2(int n)
    {
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < i; j++)
            {
                cout << "  ";
            }
            for (int j = i; j < n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    void pattern3(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = n; j > i; j--)
            {
                cout << "  ";
            }
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    void pattern4(int n)
    {
        for (int i = n; i > 0; i--)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j >= i)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j < n; j++)
            {
                cout << "* ";
            }
            for (int j = 2 * i - 1; j > 0; j--)
            {
                cout << " ";
            }
            cout << endl;
        }
    }
    void pattern5(int n)
    {
        for (int i = 1; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                cout << " * ";
            }
            cout << endl;
        }
    }
    void pattern6(int n)
    {
        for (int i = 1; i < n; i++)
        {
            for (int j = n; j > i; j--)
            {
                cout << "  ";
            }
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        for (int i = n; i > 0; i--)
        {
            for (int j = n; j > i; j--)
            {
                cout << "  ";
            }
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    void pattern7(int n)
    {
        for (int i = n; i > 0; i--)
        {
            for (int j = i; j < n; j++)
            {
                cout << " * ";
            }
            cout << endl;
        }
    }
    void pattern8(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n - i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    void pattern9(int n)
    {
        for (int i = n; i > 0; i--)
        {
            for (int j = 0; j < n - i; j++)
            {
                cout << " ";
            }
            for (int j = 2 * i - 1; j > 0; j--)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    void pattern10(int n)
    {
        for (int i = n; i > 0; i--)
        {
            for (int j = 2 * i - 1; j > 0; j--)
            {
                cout << "*";
            }
            for (int j = 0; j < n - i; j++)
            {
                cout << " ";
            }
            for (int j = 2 * i - 1; j > 0; j--)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    void pattern11(int n)
    {
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n - i; ++j)
            {
                cout << " ";
            }
            for (int k = 1; k <= 2 * i - 1; ++k)
            {
                cout << "*";
            }

            cout << endl;
        }
        for (int i = 1; i <= n / 3; ++i)
        {
            for (int j = 1; j <= n - 2; ++j)
            {
                cout << " ";
            }
            cout << "*" << endl;
        }
    }
};

int main()
{
    int n;
    cout << "enter number of stars :" << endl;
    cin >> n;
    Solution s;

    int choise;
    cout << "enter any number between 1 to 7 :" << endl;
    cin >> choise;

    switch (choise)
    {
    case 1:
        s.pattern1(n); // pattern 1
        break;
    case 2:
        s.pattern2(n); // pattern 2
        break;
    case 3:
        s.pattern3(n); // pattern 3
        break;
    case 4:
        s.pattern4(n); // pattern 4
        break;
    case 5:
        s.pattern5(n); // pattern 5
        break;
    case 6:
        s.pattern6(n); // pattern 6
        break;
    case 7:
        s.pattern7(n); // pattern 7
        break;
    case 8:
        s.pattern8(n); // pattern 8
        break;
    case 9:
        s.pattern9(n); // pattern 9
        break;
    case 10:
        s.pattern10(n); // pattern 10
        break;
    case 11:
        s.pattern11(n); // pattern 11
        break;
    default:
        cout << "wrong !" << endl;
        break;
    }

    return 0;
}
