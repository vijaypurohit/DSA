/*
https://leetcode.com/problems/top-k-frequent-elements/
347. Top K Frequent Elements

*/
class Solution {
public:
    int n;
    int un;
    vector<int> ans;
    unordered_map<int, int> freq_map;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        n = nums.size();
        if(n==k) return nums;
        
        //1.build hashmap
        for(int &x: nums)
        {
            freq_map[x]++;
            // max_freq = max(max_freq, freq_map[x]);
        }
        
        //1. Priority Queue Min Heap
        // return using_priority_queue(k);
        
        //2. Bucket Sort
        // return using_buketSort(k);
        
        //3. Quick Select
        for(auto& x: freq_map)
            unique.push_back(x.first);
        // k-th top freq element is (n-k)th less frequent
        // (n-k)th less frequent ele takes its place (n-k) in a sorted array
        // all element on left are less frequent
        // all element on right are more frequent
        un = unique.size();
        quickSelect(0, un-1, un-k);
        ans.resize(k);
        copy(unique.begin() + un - k, unique.end(), ans.begin());
        return ans;
    }//end
    
    //MinHeap with Size k
    vector<int> using_priority_queue(int &k)
    {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq; 
        for(auto &x: freq_map){
            pq.push({x.second, x.first});
            if(pq.size()>k) pq.pop();
        } 
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        } 
        return ans;
    }
     
    int max_freq=0;
    vector<int> using_buketSort(int &k)
    {
        vector<vector<int>> bucket(max_freq+1);
        for(auto& x: freq_map)
            bucket[x.second].push_back(x.first);
        
        for(int i=max_freq; i>0; i--)
        {
            for(int &x: bucket[i])
            {
                ans.push_back(x);
                if(--k == 0) return ans;
            }
        }
        return ans;
    }
    
    vector<int> unique;
    void quickSelect(int left, int right, int k_smallest)
    {
        if(left==right) // base case if it contains only single element
            return;
        // randomly select a pivor among the paritition
        int pivot_index = left + rand()%(right-left+1);
        
        // do the partition to put it at correct place
        pivot_index = partition(left, right ,pivot_index);
        
        if(k_smallest == pivot_index)
            return;
        else if(k_smallest < pivot_index)
            quickSelect(left, pivot_index-1, k_smallest);// go left
        else
            quickSelect(pivot_index+1, right, k_smallest);// go right
    }
    
    int partition(int left, int right, int pivot_index)
    {
        int pivot_freq = freq_map[unique[pivot_index]];
        //1. move pivot to the end
        swap(unique[pivot_index], unique[right]);
        
        //2. move all less frequent element to the left
        int store_index = left;
        for(int i=left; i<right; i++)
        {
            if(freq_map[unique[i]] < pivot_freq)
            {
                swap(unique[store_index], unique[i]);
                store_index++;
            }
        }
        swap(unique[right], unique[store_index]);
        return store_index;
    }
};