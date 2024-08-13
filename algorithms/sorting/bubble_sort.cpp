#include <bits/stdc++.h>
using namespace std;

class solution
{
    public:
    int bubble_sort(vector<int> data, int n)
    {
        for (int i = n - 1; i >= 0; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (data[j] > data[j + 1])
                {
                    int temp = data[j + 1];
                    data[j + 1] = data[j];
                    data[j] = temp;
                }
            }
        }
        cout << "After Using bubble sort: " << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << data[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    int n;
    cout << "Enter the size of the array\n=" << endl;
    cin >> n;

    vector<int> data(n);
    solution s;
    cout << "Enter the Array\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    s.bubble_sort(data, n);

    return 0;
}