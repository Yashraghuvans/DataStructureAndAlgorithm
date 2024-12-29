
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
void reverseString(vector<char>& s) {
        int start=0;
        int n=s.size();
        int end=n-1;
        while(start<end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
        
}
void ReversByFor(string &str){
    for(int i=0 , j=str.length()-1 ; i<j ; i++ , j--){
        swap(str[i],str[j]);
    }
  }
};
int main()
{
    Solution s;
    string str="hello";
    s.ReversByWhile(str);
    s.ReversByFor(str);
    cout<<str;
    return 0;
}
