#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


string kangaroo(int x1, int v1, int x2, int v2) {
    
    if(v1 > v2 && (x2-x1) % (v1-v2) == 0) return "YES";
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int x1 = stoi(first_multiple_input[0]);

    int v1 = stoi(first_multiple_input[1]);

    int x2 = stoi(first_multiple_input[2]);

    int v2 = stoi(first_multiple_input[3]);

    string result = kangaroo(x1, v1, x2, v2);

    fout << result << "\n";

    fout.close();

    return 0;
}


 
