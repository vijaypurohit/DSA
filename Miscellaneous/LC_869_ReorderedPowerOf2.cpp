/*
https://leetcode.com/problems/reordered-power-of-2/
*/

class Solution {
public:
    
    bool reorderedPowerOf2(int n) {
        
    //     unordered_set<string> powers = {
    //     "1", "2", "4", "8", "16", "32", "64", "128","256","512","1024","2048","4096","8192","16384","32768","65536", "131072", "262144","524288", "1048576", "2097152", "4194304", "8388608", "16777216", "33554432", "67108864", "134217728", "268435456", "536870912", "1073741824", "2147483648"
    // };
        if(!(n&(n-1)))return true;
        string s = to_string(n);
        sort(s.begin(), s.end());; //convert to string and then sort digits
        for(int i=0; i<30; i++)
        {
            // check each power of 2 one by one
            string power = to_string(1<<i);
            sort(power.begin(), power.end());
            if(s == power)
                return true;
        }
        return false;
    }//end
     
};