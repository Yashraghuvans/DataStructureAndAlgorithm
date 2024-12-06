#include <bits/stdc++.h>

using namespace std;
string timeConversion(string s) {
    string frm = s.substr(0 , 2) + s.substr((s.size()-2), 2);
    unordered_map<string,string> hourMap = {
        {"12AM", "00"}, {"01AM", "01"}, {"02AM", "02"}, {"03AM", "03"},
        {"04AM", "04"}, {"05AM", "05"}, {"06AM", "06"}, {"07AM", "07"},
        {"08AM", "08"}, {"09AM", "09"}, {"10AM", "10"}, {"11AM", "11"},
        {"12PM", "12"}, {"01PM", "13"}, {"02PM", "14"}, {"03PM", "15"},
        {"04PM", "16"}, {"05PM", "17"}, {"06PM", "18"}, {"07PM", "19"},
        {"08PM", "20"}, {"09PM", "21"}, {"10PM", "22"}, {"11PM", "23"}
    };
    return (hourMap[frm] + s.substr(2, 6));
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
