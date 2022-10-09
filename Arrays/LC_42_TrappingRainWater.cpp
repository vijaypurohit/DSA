/*
https://leetcode.com/problems/trapping-rain-water/
42. Trapping Rain Water
*/
class Solution {
public:
    /*
    int trap1(vector<int>& height) {
        
        int n = height.size();
        int lftMaxHt[n];
        int rgtMaxHt[n];
        
        int max=0;
        int trapCount=0;
        
        for(int i=0; i<n; i++)
        {
            if(max < height[i])
            {
                lftMaxHt[i] = height[i] ;
                max = lftMaxHt[i] ;
            }
            lftMaxHt[i] = max;
            // cout<<lftMaxHt[i]<<" ";
        }
        // cout<<endl;
        
        max=0;
        for(int i=n-1; i>=0; i--)
        {
            if(max < height[i])
            {
                rgtMaxHt[i] = height[i] ;
                max = rgtMaxHt[i] ;
            }
            rgtMaxHt[i] = max;
        }
        
        // for(int i=0; i<n; i++)
        // {
        //     cout<<rgtMaxHt[i]<<" ";
        // }
        //  cout<<endl;
        
        for(int i=0; i<n; i++)
        {
            trapCount += min(lftMaxHt[i], rgtMaxHt[i]) - height[i];
        }
        
        return trapCount;
    }// end
    
     int trap2(vector<int>& height) {
        
        int n = height.size();
        int trapCount=0;
         
        if(n<=2) return trapCount;
        
        vector<int> leftMax(n);
        vector<int> rightMax(n);
         
         leftMax[0] = height[0];
         rightMax[n-1] = height[n-1];
         
         for(int i=1; i<n ; i++)
         {
             leftMax[i] = max(leftMax[i-1], height[i]);
             rightMax[n-1-i] = max(rightMax[n-i], height[n-1-i]);
         }
         
         for(int i=0; i<n; i++)
        {
            trapCount += min(leftMax[i], rightMax[i]) - height[i];
        }
         return trapCount;
    }// end
    */
    //TWO Pointer Approach
    int trap_2ptr(int n, vector<int>& height) {  
        int ans=0;  
        int l=0, r=n-1;
        int mleft = height[l];
        int mright = height[r];
        
        while(l<r)
        {
            if(mleft < mright) //whichever is smaller height
            {
                l++;
                mleft = max(mleft, height[l]);
                ans+=mleft-height[l];
            }
            else
            {
                r--;
                mright = max(mright, height[r]);
                ans+=mright-height[r];
            }
        }//while
        
        return ans;
    }// end trap
    
    int trap_2stack(int n, vector<int>& height) { 
        int ans=0;  
        int r=0;
        stack<int> st;
        while(r<n)
        {
            while(!st.empty() and height[st.top()] < height[r]){
                int l = st.top(); st.pop();
                if(st.empty()) break;
                int dist = r - st.top() - 1;
                int ht = min(height[r], height[st.top()]) - height[l];
                ans += dist*ht;
            }
            st.push(r++);
        }//while
        
        return ans;
    }// end trap
   
    int trap(vector<int>& height) {  
        int n = height.size();
        if(n<=2) return 0; // required atleast three blocks to contain water
        // return trap_2ptr(n, height); // 
        return trap_2stack(n, height); // 
        
    }// end trap
};