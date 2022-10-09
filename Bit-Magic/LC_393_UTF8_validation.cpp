/*
https://leetcode.com/problems/utf-8-validation/
393. UTF-8 Validation

*/

class Solution {
public:
    bool validUtf8_(vector<int>& data) {
        int n = data.size();
        for(int i=0; i<n; i++)
        {
            if(data[i] > 247) // 1xxx xxxx 1111 0111->247
                return false;
            int numOfBytes=0;
            if((data[i] & 128) == 0) // 0xxx xxxx (128 -> 1000 0000)
                numOfBytes = 1;
            else if((data[i] & 224) == 192) // (224 -> 1110 0000)(192 -> 1100 0000)
                numOfBytes = 2;
            else if((data[i] & 240) == 224) // (240 -> 1111 0000)
                numOfBytes = 3;
            else if((data[i] & 248) == 240) // (248 -> 1111 1000)
                numOfBytes = 4;
            else
                return false;
            
            for(int b=1; b<numOfBytes; b++)
            {
                if(i+b >=n) return false;
                if((data[i+b] & 192) != 128) return false;
            }
            i = i + numOfBytes - 1;
        }
        return true;
    }//end
    
    bool validUtf8(vector<int>& data) {
        int n = data.size();
        int remaining=0;
        for(auto &x: data)
        {
            if(remaining==0)
            {
                if((x>>5) == 0b110) // 8-5 = 3 bits lhs
                    remaining = 1;
                else if ((x>>4) == 0b1110) // 8-4=4 bits lhs
                    remaining = 2;
                else if ((x >> 3)==0b11110) //8-3 = 5 bits lhs
                    remaining = 3;
                else if((x >> 7)!=0) // if 8th bit is not zero
                    return false;
            }
            else // check 10xx xxxx
            {
                if((x >> 6) != 0b10) return false;
                remaining--;
            }
        }
        return remaining==0;
    }//end
};