#include <iostream>
using namespace std;

class Pattern
{
public:
    void hollow_square(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 1 || j==1 || i==n || j==n)
                {
                    cout << "*";
                }
                else{
                    cout<<" ";
                }
            }
            cout << endl;
        }
    }
};
int main()
{
    int x = 10;
    Pattern p;
    p.hollow_square(x);
    return 0;
}