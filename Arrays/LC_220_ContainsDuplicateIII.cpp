/*
https://leetcode.com/problems/contains-duplicate-iii/
*/
class Solution {
public:
    int n, k, t;
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        n = nums.size();
        k = indexDiff;
        t = valueDiff;
        // return UsingBuckets(nums);
        // return usingVector(nums);
        return usingMultiset(nums);
    }//
    
     bool usingMultiset(vector<int>& nums) { 
        multiset<long> ms;
        for(int i=0; i<n; i++)
        {
            if(i>k)
                ms.erase(nums[i-k-1]);
            auto lower = ms.lower_bound(nums[i]-t);
            if(lower != ms.end() and abs(nums[i]-*lower) <= t)
                return true;
            ms.insert(nums[i]);
        }
        return false;
    }//
    
    bool usingVector(vector<int>& nums) { 
        vector<pair<long, int>> v(n);
        for(int i=0; i<n; i++)
        {
            v[i].first = nums[i];
            v[i].second = i;
        }
        
        sort(v.begin(), v.end());
        
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n and ((v[j].first - v[i].first) <=t); j++)
            {
                if(abs(v[j].second - v[i].second) <= k)
                    return true;
            }
        }
        return false;
    }//
    
    bool UsingBuckets(vector<int>& nums) { 
        int bkt;
        unordered_map<int,int> buckets;
        // if(n==0 || k<0 || t<0) return false;
        for(int i=0; i<n; i++)
        {
            int x = nums[i];
            bkt = x / (t+1); // if (t==0)
            if(x < 0) --bkt; // for neg num we need to ensure floor division, so dec by 1
            /*
            if the bucket already exists then return true, as diff of <= t required
            and that means we already have a diff of <=t.
            */
            if(buckets.find(bkt) != buckets.end()) 
                return true;
            else
            {
                buckets[bkt] = x;
                // for(auto &b: buckets) cout<<b.first<<"->"<<b.second<<"] "; cout<<endl;
                if(buckets.find(bkt-1) != buckets.end() and (x - buckets[bkt-1])<=t)
                    return true;
                if(buckets.find(bkt+1) != buckets.end() and (buckets[bkt+1]-x)<=t)
                    return true;
                if(buckets.size()>k)
                {
                    int rem_key = nums[i-k]/(t+1);
                    if(nums[i-k] < 0) --rem_key;
                    buckets.erase(rem_key);
                }
            }
        }
        return false;
    }//
};