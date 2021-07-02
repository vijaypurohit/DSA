/*https://practice.geeksforgeeks.org/problems/painting-the-fence3727/1/*/

class Solution
{
    public static final long m = 1000000007;
    long countWays(int n,int k)
    {   //base case
        if (n == 1) return k;
        long[] table = new long[n];

        //first post can be coloured by k colours
        table[0] = k;

        //for second post we can have k*k combinations
        table[1] = (long)Math.pow(k,2)%m;

        /*
        For all other posts, the logic goes as follows - 
        We can paint the current post (say i) in two ways, 
        either it can be same with i-1 post or different from i-1 post
        So we can paint the i post with k-1 colours
        to make it different from i-1 post
        Hence the value becomes (number of combinations till i-1 post * k-1)
        Then we can paint the i post with just 1 colour
        to make it same as i-1 post
        But we have several such combinations
        i.e. the number of combinations done till i-2 post
        After that we can paint both i-1 and i with the same colour
        but that colour should be different from i-2 post
        so again we have k-1 colour options
        Hence the value becomes (number of combinations till i-2 post * k-1)
        Both the values will be added
        */

        for (int i = 2; i < n; ++i)
            table[i] = ((table[i-1]*(k-1))%m+(table[i-2]*(k-1))%m)%m;
        return table[n-1];
    }
}