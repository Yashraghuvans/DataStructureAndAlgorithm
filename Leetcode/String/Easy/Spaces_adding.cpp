#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string addSpaces(string s, vector<int> &spaces)
    {
        int m = s.size();
        int n = spaces.size();

        string result;
        int first = 0;
        int second = 0;

        while (first < m)
        {
            if (second < n && first == spaces[second])
            {
                result.push_back(' ');
                second++;
            }
            result.push_back(s[first]);
            first++;
        }
        return result;
    }

    string addSpaces1(string &s, vector<int> &spaces)
    {
        const int m = spaces.size(), n = s.size();
        string t(n + m, ' ');
        spaces.push_back(n);

        int j = 0, i = 0;
        for (i = 0; i < n; i++)
        {
            while (i < n && i != spaces[j])
            {
                t[i + j] = s[i];
                i++;
            }
            if (j < m)
            {
                t[i + j + 1] = s[i];
                j++;
            }
        }
        return t;
    }
};
int main()
{
    return 0;
}