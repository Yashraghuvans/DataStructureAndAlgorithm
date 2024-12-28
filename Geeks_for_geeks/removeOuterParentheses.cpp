class Solution {
public:
    string removeOuterParentheses(string s) {
        string str="";
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==')')ans--;
            if(ans != 0)str.push_back(s[i]);
            
            if(s[i]=='(')ans++;
            
        }
        return str;
    }
};
