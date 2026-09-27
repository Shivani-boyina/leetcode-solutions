class Solution {
public:
    string reverseParentheses(string s) {
        vector<int> opened;
        string result = "";
        
        for (char c : s) {
            if (c == '(') {
                // Store the current length of the result string to know where this segment begins
                opened.push_back(result.length());
            } else if (c == ')') {
                // Get the start index of the matching '(' and reverse the substring from that point to the end
                int start = opened.back();
                opened.pop_back();
                reverse(result.begin() + start, result.end());
            } else {
                // Append normal lowercase letters to the result
                result.push_back(c);
            }
        }
        
        return result;
    }
};
