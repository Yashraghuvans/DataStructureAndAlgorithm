#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


string kangaroo(int x1, int v1, int x2, int v2) {
    
    if(v1 > v2 && (x2-x1) % (v1-v2) == 0) return "YES";
    return "NO";
}

