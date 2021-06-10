/*https://leetcode.com/problems/longest-consecutive-sequence/*/

//hashing
class Solution {
    public int longestConsecutive(int[] arr) {
        int N = arr.length;
        HashMap<Integer,Integer> map = new HashMap<Integer,Integer>();

        //put everything into the hash table
	    for (int i = 0; i < N; ++i)
	        map.put(arr[i],1);
	    int maxCount = 0;
	    for (int i = 0; i < N; ++i)
	    {
	    	//if the element is the first element of the sequence
	        if (!map.containsKey(arr[i]-1))
	        {
	            int p = arr[i];
	            int count = 1;

	            //find out the consecutive elements count
	            while (map.containsKey(p+1))
	            {
	                ++count;
	                ++p;
	            }

	            //update maximum count
	            if (count > maxCount)
	                maxCount = count;
	        }
	    }
	    return maxCount;
    }
}

//priorirty queue
class Solution {
    public int longestConsecutive(int[] arr) {
        if (arr.length == 0) return 0;
        int N = arr.length;
        int maxCount = 1;
	    PriorityQueue<Integer> pq = new PriorityQueue<Integer>();

	    //add everything to priority queue
	    for (int i = 0; i < N; ++i)
	        pq.add(arr[i]);
	    int prevElem = Integer.MIN_VALUE, newElem = Integer.MIN_VALUE, count = 1;
	    while (!pq.isEmpty())
	    {
	    	//get two consecutive elements
	        prevElem = newElem;
	        newElem = pq.poll();

	        //if the gap is 1, increase count
	        if (prevElem+1 == newElem)
	        {
	            ++count;
	        }
	        else if (prevElem == newElem)
	        {}

	    	//if sequence breaks. update maximum count and reset count
	        else
	        {
	            if (count > maxCount)
	                maxCount = count;
	            count = 1;
	        }
	    }

	    //update maximum count
	    if (count > maxCount)
	        maxCount = count;
	    return maxCount;
    }
}

//Should be non efficient but... no idea why it takes less time
class Solution {
    public int longestConsecutive(int[] nums) {
        if (nums.length == 0) return 0;

        //sort the array, rest same as priority queue logic
        Arrays.sort(nums);
        int maxLen = 1;
        int currLen = 1;
        int length = nums.length;
        for (int i = 1; i < length; i++) {
            // Seeing the same element does not increase the sequence
            if (nums[i] == nums[i-1])
                continue;
            
            if (nums[i] == nums[i-1] + 1) {
                currLen++;
            } else {
                maxLen = Math.max(maxLen, currLen);
                currLen = 1;
            }
        }
        return Math.max(maxLen, currLen);
    }
}