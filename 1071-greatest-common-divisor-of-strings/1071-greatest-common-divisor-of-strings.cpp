class Solution {
public:
    int get_gcd(int a, int b) {
        while (b != 0) {
            int remainder = a % b;
            a = b;
            b = remainder;
        }
        return a;
    }
    string gcdOfStrings(string str1, string str2) 
    {
        if(str1+str2 != str2+str1)
        return "";
        int gcdlen=get_gcd(str1.length(),str2.length());
        return str1.substr(0,gcdlen);
    }
};