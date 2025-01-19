#include <iostream>
using namespace std;

class Pattern
{
public:
    void hollow_square(int n ,int m)
    {
        int i, j; 
    for (i = 1; i <= n; i++) 
    { 
        for (j = 1; j <= m; j++) 
        { 
            if (i == 1 || i == n || 
                j == 1 || j == m)         
                cout << "*";             
            else
                cout << " ";
        } 
        cout << endl;
    } 
    }
};
int main()
{
    int x = 10;
    int y=8;
    Pattern p;
    p.hollow_square(x,y);
    return 0;
}