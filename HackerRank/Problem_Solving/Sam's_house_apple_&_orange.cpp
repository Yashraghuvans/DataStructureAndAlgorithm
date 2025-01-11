#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    
    
    int orange = 0, apple = 0;
    for(int app: apples) if(app + a >= s && app + a <=t) apple++;
    for(int orr: oranges) if(orr + b >= s && orr + b <=t) orange++;
    cout << apple << endl << orange;
    
    
}
