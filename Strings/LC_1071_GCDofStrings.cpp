/*
https://leetcode.com/problems/greatest-common-divisor-of-strings/
*/
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n1 = str1.size();
        int n2 = str2.size();
        
        // return (str1+str2 == str2+str1) ? str1.substr(0, __gcd(n1, n2)) : "";
        if(n1 < n2) return gcdOfStrings(str2, str1);
        if(n2 == 0) return str1;
        if(str1.substr(0, n2) != str2)
            return "";
        return gcdOfStrings(str1.substr(n2), str2);
    }
};