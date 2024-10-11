#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string compareFrac(string str) {
      int a, b, c, d;
      stringstream ss(str);
      char slash, comma;
      ss >> a >> slash >> b >> comma;
    
  
      ss >> c >> slash >> d;
      int left = a * d;
      int right = b * c;
    
    if (left > right) {
        return to_string(a) + "/" + to_string(b);
    } else if (left < right) {
        return to_string(c) + "/" + to_string(d);
    } else {
        return "equal";
    }
       
    }
};

int main(){
  return 0;
}
