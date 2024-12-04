class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int m=str1.size();
        int n=str2.size();

        if(m<n)return false;

        int first=-1;
        int second=-1;

        while(first<m && second<n){
            first++;
            second++;
            while(first<m){
                char next=char((str1[first]-'a'+1)%26+int('a'));
                if(str2[second]==str1[first] || str2[second]==next){
                    break;
                }
                first++;
            }
        }
        if(first==m && second<n){
            return false;
        }
        return true;
    }
};