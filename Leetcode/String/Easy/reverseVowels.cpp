class Solution {
public:
    string reverseVowels(string s) {
        set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int first = 0;
        int last = s.size() - 1;

        while (first < last) {
            if (vowels.count(s[first]) && vowels.count(s[last])) {
                swap(s[first], s[last]);
                first++;
                last--;
            } else if (!vowels.count(s[first])) {
                first++;
            } else {
                last--;
            }
        }

        return s;
    }
};
