class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int i = 0, j = 0;
        int n1 = word1.length();
        int n2 = word2.length();
        result.reserve(n1 + n2);
        while (i < n1 && j < n2) {
            result.push_back(word1[i++]);
            result.push_back(word2[j++]);
        }
        while (i < n1) {
            result.push_back(word1[i++]);
        }
        while (j < n2) {
            result.push_back(word2[j++]);
        }
        return result;
    }
};
