# Topicwise-Solutions-To-Coding-Questions

Solutions to the algorithmic problems in [LeetCode](https://leetcode.com/problemset/algorithms/), [GeeksForGeeks](https://practice.geeksforgeeks.org/explore/?problemType=full&page=1), [Hackerrank](https://www.hackerrank.com/domains/algorithms?filters%5Bstatus%5D%5B%5D=unsolved&badge_type=problem-solving), [Interviewbit](https://www.interviewbit.com/courses/programming/) and [Codeforces](https://codeforces.com/problemset) written in **C++** and **JAVA**

## What you can find in this repository

We have solved quite a number of problems from several topics. See the below table for further details.

## How to contribute?

1. Fork the repository
2. Do the desired changes (add/delete/modify)
3. Make a pull request

If you want to update the readme file as well, you have to install [Java](https://www.tutorialspoint.com/java/java_environment_setup.htm) and [Jsoup](https://www.tutorialspoint.com/jsoup/jsoup_environment.htm). Then you can run the [UpdateReadme.java](./UpdateReadme.java) file to update the readme file.

## When to contribute?

1. If there is no solution to a problem in the main branch
2. If your solution is asymptotically faster than the one in the main branch
3. If your algorithm is of the same time complexity but with reduced code size (In this case, comment out the original solution and make a pull request with your solution.)
4. If you have another method of solving the problem which is asymptotically slower than the original method (In this case, comment your solution in the main file and make a pull request.)
5. If you want to update the [UpdateReadme.java](./UpdateReadme.java) file

## Format for solution files

1. Paste the link for the question within comments.
2. Paste the solution.
3. Save with proper extension name.

## Description of auto-updation of Readme file

[UpdateReadme.java](./UpdateReadme.java) is the main file. It reads information (that are obtained online) from [OnlineInfo.csv](./OnlineInfo.csv) file. If you have updated the readme file with some online information without adding into csv file, then you need to run [OnlineToCSV.java](./OnlineToCSV.java) file to read that from readme and store in the csv file.

For difficulty level, csv file is already updated. For other online information columns you'll have to update it.

## Algorithms

Number of Problems Solved (23-Apr-2022 22:47:05)

| Topic Name | Java | CPP | 
| :--------: | :--------: | :--------: | 
| [Arrays](https://github.com/prateekshyap/DSA#arrays) | 66 | 15 |
| [BackTracking](https://github.com/prateekshyap/DSA#backtracking) | 18 | 0 |
| [Bit-Magic](https://github.com/prateekshyap/DSA#bit-magic) | 20 | 8 |
| [Codeforces](https://github.com/prateekshyap/DSA#codeforces) | 66 | 1 |
| [Disjoint-Set](https://github.com/prateekshyap/DSA#disjoint-set) | 0 | 0 |
| [Dynamic-Programming](https://github.com/prateekshyap/DSA#dynamic-programming) | 54 | 1 |
| [Graph](https://github.com/prateekshyap/DSA#graph) | 34 | 12 |
| [Greedy](https://github.com/prateekshyap/DSA#greedy) | 15 | 1 |
| [Hashing](https://github.com/prateekshyap/DSA#hashing) | 23 | 6 |
| [Heap](https://github.com/prateekshyap/DSA#heap) | 13 | 8 |
| [Linked-List](https://github.com/prateekshyap/DSA#linked-list) | 46 | 19 |
| [Matrix](https://github.com/prateekshyap/DSA#matrix) | 22 | 7 |
| [Miscellaneous](https://github.com/prateekshyap/DSA#miscellaneous) | 28 | 2 |
| [Queue](https://github.com/prateekshyap/DSA#queue) | 5 | 6 |
| [Recursion](https://github.com/prateekshyap/DSA#recursion) | 12 | 2 |
| [Searching](https://github.com/prateekshyap/DSA#searching) | 24 | 9 |
| [Segment-Tree](https://github.com/prateekshyap/DSA#segment-tree) | 0 | 0 |
| [Sorting](https://github.com/prateekshyap/DSA#sorting) | 9 | 7 |
| [Stack](https://github.com/prateekshyap/DSA#stack) | 19 | 7 |
| [Strings](https://github.com/prateekshyap/DSA#strings) | 29 | 13 |
| [Tree](https://github.com/prateekshyap/DSA#tree) | 94 | 25 |
| [Trie](https://github.com/prateekshyap/DSA#trie) | 10 | 0 |
| Total | 607 | 149 |

## Reference

* C++
	* [STL Time Complexity (Detailed)](http://www.cplusplus.com/reference/stl/)
	* [STL Time Complexity (Summary)](http://john-ahlgren.blogspot.com/2013/10/stl-container-performance.html)
	* [Data Structure and Algorithms Cheat Sheet](https://github.com/gibsjose/cpp-cheat-sheet/blob/master/Data%20Structures%20and%20Algorithms.md)
* JAVA
	* [Time Complexity](to-be-updated)

## Arrays

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Find Missing Observations|[LC](https://leetcode.com/problems/find-missing-observations/) |[Java](./Arrays/FindMissingObservations.java) ||O(n)||
|  2  |Sort An Array Of 0s 1s And 2s4231|[GFG](https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1#) |[Java](./Arrays/SortZeroOneTwo.java) [CPP](./Arrays/GFG_ARR_ArraySort0_1_2.cpp) |Easy|O(1)||
|  3  |Subarray With 0 Sum 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1) |[Java](./Arrays/SubarrayWithZeroSum.java) |Easy|O(n)||
|  4  |Plus One|[GFG](https://practice.geeksforgeeks.org/problems/plus-one/1/) |[Java](./Arrays/AddOne.java) |Easy|O(n)||
|  5  |Rearrange An Array With O1 Extra Space3142|[GFG](https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1) |[Java](./Arrays/RearrangeWithZeroExtraSpace.java) |Medium|O(n)||
|  6  |Kth Smallest Element5635|[GFG](https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1#) |[Java](./Arrays/KthSmallestElement.java) [CPP](./Arrays/GFG_ARR_KthSmallestElement.cpp) |Medium|O(1)||
|  7  |Next Permutation|[LC](https://leetcode.com/problems/next-permutation/) |[Java](./Arrays/NextPermutation.java) ||O(n)||
|  8  |Maximum Difference Of Zeros And Ones In Binary String4111|[GFG](https://practice.geeksforgeeks.org/problems/maximum-difference-of-zeros-and-ones-in-binary-string4111/1) |[Java](./Arrays/MaximumDifferenceInBinaryString.java) |Easy|O(n)||
|  9  |Subarray With Given Sum 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1) |[Java](./Arrays/SubarrayWithGivenSum.java) [CPP](./Arrays/GFG_ARR_SubarrayWithGivenSum.cpp) |Easy|O(1)||
|  10  |Smallest Subarray With Sum Greater Than X5651|[GFG](https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1) |[Java](./Arrays/SmallestSubarrayGreaterThanX.java) |null|O(n<sup>2</sup>)||
|  11  |Next Higher Palindromic Number Using The Same Set Of Digits5859|[GFG](https://practice.geeksforgeeks.org/problems/next-higher-palindromic-number-using-the-same-set-of-digits5859/1) |[Java](./Arrays/NextGreaterPalindrome.java) |Medium|O(n)||
|  12  |Number Of Good Ways To Split A String|[LC](https://leetcode.com/problems/number-of-good-ways-to-split-a-string/) |[Java](./Arrays/NumberOfGoodSplits.java) ||O(n)||
|  13  |Palindrome String0817|[GFG](https://practice.geeksforgeeks.org/problems/palindrome-string0817/1) |[Java](./Arrays/PalindromeString.java) |Easy|O(n)||
|  14  |Rearrange Array Alternately 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1) |[Java](./Arrays/AlternativeRearrangement.java) |Medium|O(n)||
|  15  |Find The Duplicate Number|[LC](https://leetcode.com/problems/find-the-duplicate-number/) |[Java](./Arrays/FindDuplicate.java) ||O(n)||
|  16  |Remove Duplicates From Sorted Array|[LC](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) |[Java](./Arrays/RemoveDuplicatesFromSortedArray.java) ||O(n<sup>2</sup>)||
|  17  |Large Factorial4721|[GFG](https://practice.geeksforgeeks.org/problems/large-factorial4721/1/) |[Java](./Arrays/LargeFactorialArray.java) |Medium|O(n)||
|  18  |Reverse An Array|[GFG](https://practice.geeksforgeeks.org/problems/reverse-an-array/0) |[Java](./Arrays/ReverseArray.java) [CPP](./Arrays/GFG_ARR_ReverseArray.cpp) |School|O(1)||
|  19  |Three Way Partitioning|[GFG](https://practice.geeksforgeeks.org/problems/three-way-partitioning/1) |[Java](./Arrays/ThreeWayPartitioning.java) |Easy|O(n)||
|  20  |Merge Intervals|[LC](https://leetcode.com/problems/merge-intervals/) |[Java](./Arrays/MergeIntervals.java) ||O(n<sup>2</sup>)||
|  21  |Minimum Number Of Jumps 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1) |[Java](./Arrays/MinimumJumps.java) |Medium|O(n)||
|  22  |Replace Elements With Greatest Element On Right Side|[LC](https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/) |[Java](./Arrays/ReplaceWithLargestOnRight.java) ||O(n<sup>2</sup>)||
|  23  |Longest Consecutive Sequence|[LC](https://leetcode.com/problems/longest-consecutive-sequence/) [GFG](https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1) |[Java](./Arrays/LongestConsecutiveSubsequence.java) |Medium|O(n<sup>2</sup>)||
|  24  |Sort Colors|[LC](https://leetcode.com/problems/sort-colors/) |[Java](./Arrays/ZeroOneTwoSort.java) ||O(n)||
|  25  |Minimum Size Subarray Sum|[LC](https://leetcode.com/problems/minimum-size-subarray-sum/) |[Java](./Arrays/MinimumSizeSubarraySum.java) ||O(n)||
|  26  |Trapping Rain Water|[LC](https://leetcode.com/problems/trapping-rain-water/) |[Java](./Arrays/TrappingRainWater.java) ||O(n)||
|  27  |Find Pivot Index|[LC](https://leetcode.com/problems/find-pivot-index/) [GFG](https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1) |[Java](./Arrays/EquilibriumPoint.java) [CPP](./Arrays/LC_724_ARR_EquilibriumPoints.cpp) |Easy|O(n)||
|  28  |Maximum Subarray|[LC](https://leetcode.com/problems/maximum-subarray/) |[Java](./Arrays/MaximumSumSubarray.java) ||O(n)||
|  29  |Factorials Of Large Numbers2508|[GFG](https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1) |[Java](./Arrays/LargeFactorial.java) |Medium|O(n<sup>2</sup>)||
|  30  |Array Of Alternate Ve And Ve Nos1401|[GFG](https://practice.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1) |[Java](./Arrays/AlternatePositiveNegative.java) |Easy|O(n<sup>2</sup>)||
|  31  |Insert Interval|[LC](https://leetcode.com/problems/insert-interval/) |[Java](./Arrays/InsertNewInterval.java) ||O(n<sup>2</sup>)||
|  32  |Stock Buy And Sell 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1) |[Java](./Arrays/StockBuyAndSell.java) |Medium|O(n<sup>2</sup>)||
|  33  |Inversion Of Array 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1) |[Java](./Arrays/InversionCount.java) |Medium|O(n)||
|  34  |Jump Game|[GFG](https://practice.geeksforgeeks.org/problems/jump-game/1/#) |[Java](./Arrays/JumpGame.java) |Medium|O(n)||
|  35  |Maximum Product Subarray3604|[GFG](https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1) |[Java](./Arrays/MaximumProductSubarray.java) |Medium|O(n)||
|  36  |Stickler Theif 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1#) |[CPP](./Arrays/GFG_ARR_MaxSumNonAdj_SticklerThief.cpp) |Easy|O(1)||
|  37  |Partition Array Into Three Parts With Equal Sum|[LC](https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/) |[Java](./Arrays/ThreeParts.java) [CPP](./Arrays/LC_1013_ARR_ThreeEqualParts.cpp) ||O(1)||
|  38  |Leaders In An Array 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1) |[Java](./Arrays/LeadersInArray.java) [CPP](./Arrays/GFG_ARR_LeadersInArray.cpp) |Easy|O(1)||
|  39  |Common Elements1132|[GFG](https://practice.geeksforgeeks.org/problems/common-elements1132/1) |[Java](./Arrays/CommonElements.java) |Easy|O(n)||
|  40  |Triplet Sum In Array 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1) |[CPP](./Arrays/GFG_ARR_TripletSum.cpp) |Medium|O(1)||
|  41  |Rotate Array|[LC](https://leetcode.com/problems/rotate-array/) |[Java](./Arrays/RotateArray.java) [CPP](./Arrays/LC_189_ARR_RotateArray.cpp) ||O(1)||
|  42  |Shortest Unsorted Continuous Subarray|[LC](https://leetcode.com/problems/shortest-unsorted-continuous-subarray/) |[Java](./Arrays/ShortestUnsortedContinuousSubarray.java) ||O(n)||
|  43  |Union Of Two Sorted Arrays|[GFG](https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays/1) |[Java](./Arrays/UnionSortedArrays.java) |Easy|O(n)||
|  44  |Union Of Two Arrays3538|[GFG](https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1#) |[Java](./Arrays/UnionArrays.java) [CPP](./Arrays/GFG_ARR_UnionTwoArrays.cpp) |Basic|O(1)||
|  45  |Intersection Of Two Arrays Ii|[LC](https://leetcode.com/problems/intersection-of-two-arrays-ii/) [GFG](https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1) [LC](https://leetcode.com/problems/intersection-of-two-arrays/) |[Java](./Arrays/IntersectionArrays.java) |Easy|O(n)||
|  46  |Move Zeroes|[LC](https://leetcode.com/problems/move-zeroes/) |[Java](./Arrays/MoveZeros.java) ||O(n<sup>2</sup>)||
|  47  |Contiguous Array|[LC](https://leetcode.com/problems/contiguous-array/) |[Java](./Arrays/ContiguousArray.java) ||O(n)||
|  48  |Move All Negative Elements To End1813|[GFG](https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1) |[Java](./Arrays/SegregateNegativePositive.java) |Easy|O(n)||
|  49  |Max Sum Subarray Of Size K5313|[GFG](https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1) |[Java](./Arrays/MaximumSumSubarrayOfSizeK.java) [CPP](./Arrays/GFG_ARR_MaximumSumSubarrayOfSizeK.cpp) |Basic|O(1)||
|  50  |Subarray Sum Equals K|[LC](https://leetcode.com/problems/subarray-sum-equals-k/submissions/) |[Java](./Arrays/TotalSubarrays.java) ||O(n)||
|  51  |Majority Element|[LC](https://leetcode.com/problems/majority-element/) |[Java](./Arrays/MajorityElement.java) ||O(n)||
|  52  |Count The Subarrays Having Product Less Than K1708|[GFG](https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1) |[Java](./Arrays/CountSubArrays.java) |Hard|O(n<sup>2</sup>)||
|  53  |Count Subarrays With Equal Number Of 1s And 0s 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/count-subarrays-with-equal-number-of-1s-and-0s-1587115620/1) |[Java](./Arrays/TotalSubarraysWithEqualZerosAndOnes.java) |Medium|O(n)||
|  54  |Max Circular Subarray Sum 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1) |[Java](./Arrays/MaxCircularSubarraySum.java) |Hard|O(n)||
|  55  |Maximize Number Of 1s0905|[GFG](https://practice.geeksforgeeks.org/problems/maximize-number-of-1s0905/1) |[Java](./Arrays/MaximizeOnes.java) |Medium|O(n)||
|  56  |Rotate And Delete 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/rotate-and-delete-1587115621/1) |[Java](./Arrays/RotateAndDelete.java) |Medium|O(n)||
|  57  |Remove Duplicates From Sorted Array Ii|[LC](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/) |[Java](./Arrays/RemoveDuplicatesFromSortedArray2.java) ||O(n<sup>2</sup>)||
|  58  |Cyclically Rotate An Array By One2614|[GFG](https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1) |[Java](./Arrays/SingleCyclicRotation.java) |Basic|O(n)||
|  59  |Zero Sum Subarrays1825|[GFG](https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1) |[Java](./Arrays/TotalZeroSumSubarrays.java) |Medium|O(n)||
|  60  |Count Pairs With Given Sum5022|[GFG](https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1) |[Java](./Arrays/CountPairSum.java) |Easy|O(n)||
|  61  |Maximum Index 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/maximum-index-1587115620/1) |[Java](./Arrays/MaximumIndex.java) |Medium|O(n<sup>2</sup>)||
|  62  |Distinct Absolute Array Elements4529|[GFG](https://practice.geeksforgeeks.org/problems/distinct-absolute-array-elements4529/1#) |[Java](./Arrays/DistinctAbsoluteArrayElements.java) [CPP](./Arrays/GFG_CountDistinct.cpp) |Easy|O(n<sup>2</sup>)||
|  63  |Number Of Sub Arrays Of Size K And Average Greater Than Or Equal To Threshold|[LC](https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/) |[Java](./Arrays/SubArrayAvgMoreThanThreshold.java) ||O(n)||
|  64  |Chocolate Distribution Problem3825|[GFG](https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1) |[Java](./Arrays/ChocolateDistribution.java) |Easy|O(n)||
|  65  |Product Of Array Except Self|[LC](https://leetcode.com/problems/product-of-array-except-self/) |[Java](./Arrays/ProductPuzzle.java) [CPP](./Arrays/LC_288_ARR_ProductOfArrayExceptSelf.cpp) ||O(n)||
|  66  |Majority Element Ii|[LC](https://leetcode.com/problems/majority-element-ii/) |[Java](./Arrays/MajorityElement-ii.java) ||O(n)||
|  67  |Merge Two Sorted Arrays5135|[GFG](https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1) |[Java](./Arrays/MergeWithoutExtraSpace.java) |Hard|O(n)||
|  68  |Pairs Of Songs With Total Durations Divisible By 60|[LC](https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/) |[Java](./Arrays/SongSelect.java) ||O(n)||
## BackTracking

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Word Break Part 23249|[GFG](https://practice.geeksforgeeks.org/problems/word-break-part-23249/1) |[Java](./BackTracking/WordBreak.java) |Hard|O(n<sup>2</sup>)||
|  2  |Word Search|[LC](https://leetcode.com/problems/word-search/) |[Java](./BackTracking/WordSearch.java) ||O(n<sup>2</sup>)||
|  3  |Generate Parentheses|[LC](https://leetcode.com/problems/generate-parentheses/) |[Java](./BackTracking/GenerateParantheses.java) ||O(n)||
|  4  |N Queens|[LC](https://leetcode.com/problems/n-queens/) |[Java](./BackTracking/NQueenSolver.java) ||O(n<sup>2</sup>)||
|  5  |Combination Sum 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/combination-sum-1587115620/1) |[Java](./BackTracking/CombinationSum.java) |Medium|O(n)||
|  6  |Permutations|[LC](https://leetcode.com/problems/permutations/) [GFG](https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string-1587115620/1) |[Java](./BackTracking/Permutation.java) |Easy|O(n)||
|  7  |Rat In A Maze Problem|[GFG](https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1) |[Java](./BackTracking/RatInMaze.java) |Medium|O(1)||
|  8  |Largest Number In K Swaps 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/largest-number-in-k-swaps-1587115620/1) |[Java](./BackTracking/LargestNumberInKSwaps.java) |Medium|O(n<sup>2</sup>)||
|  9  |Palindrome Partitioning Ii|[LC](https://leetcode.com/problems/palindrome-partitioning-ii/) |[Java](./BackTracking/MinimumNumberOfPartitions.java) ||O(n)||
|  10  |Solve The Sudoku 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/solve-the-sudoku-1587115621/1) |[Java](./BackTracking/SudokuSolver.java) |Hard|O(n<sup>2</sup>)||
|  11  |All Unique Permutations Of An Array|[GFG](https://practice.geeksforgeeks.org/problems/all-unique-permutations-of-an-array/1) |[Java](./BackTracking/UniquePermutations.java) |Medium|O(n)||
|  12  |Palindrome Partitioning|[LC](https://leetcode.com/problems/palindrome-partitioning/) |[Java](./BackTracking/PalindromicPartition.java) ||O(n)||
|  13  |Number Of Paths0926|[GFG](https://practice.geeksforgeeks.org/problems/number-of-paths0926/1) |[Java](./BackTracking/PossiblePaths.java) |Easy|O(1)||
|  14  |Design Add And Search Words Data Structure|[LC](https://leetcode.com/problems/design-add-and-search-words-data-structure/) |[Java](./BackTracking/AddSearchWord.java) ||O(n<sup>2</sup>)||
|  15  |Permutations Ii|[LC](https://leetcode.com/problems/permutations-ii/) |[Java](./BackTracking/IntegersWithDuplicatesPermutation.java) ||O(n)||
|  16  |Find Whether Path Exist5238|[GFG](https://practice.geeksforgeeks.org/problems/find-whether-path-exist5238/1/) |[Java](./BackTracking/FindIfPathExists.java) |Medium|O(n<sup>2</sup>)||
|  17  |Partition Array To K Subsets|[GFG](https://practice.geeksforgeeks.org/problems/partition-array-to-k-subsets/1) |[Java](./BackTracking/FindKPartitions.java) |Hard|O(n)||
|  18  |Word Search Ii|[LC](https://leetcode.com/problems/word-search-ii/) |[Java](./BackTracking/WordSearch2.java) ||O(n<sup>2</sup>)||
## Bit-Magic

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Ugly Number|[LC](https://leetcode.com/problems/ugly-number/) |[Java](./Bit-Magic/UglyNumber.java) ||O(n)||
|  2  |Ugly Number Ii|[LC](https://leetcode.com/problems/ugly-number-ii/) |[Java](./Bit-Magic/UglyNumber2.java) ||O(n)||
|  3  |Count Total Set Bits 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1) |[Java](./Bit-Magic/CountSetBitsInARange.java) |Medium|O(n)||
|  4  |Single Number Iii|[LC](https://leetcode.com/problems/single-number-iii/) |[Java](./Bit-Magic/TwoOddOccurringElements.java) [CPP](./Bit-Magic/LC_260_SingleNumber_III.cpp) ||O(1)||
|  5  |Trailing Zeroes In Factorial5134|[GFG](https://practice.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1) |[Java](./Bit-Magic/TrailingZeroes.java) |Easy|O(n)||
|  6  |Number Of 1 Bits|[LC](https://leetcode.com/problems/number-of-1-bits/) |[Java](./Bit-Magic/NoOfOneBits.java) [CPP](./Bit-Magic/LC_191_NumberOfBits.cpp) ||O(1)||
|  7  |Find Position Of Set Bit3706|[GFG](https://practice.geeksforgeeks.org/problems/find-position-of-set-bit3706/1) |[Java](./Bit-Magic/OnlySetBit.java) |Basic|O(n)||
|  8  |Sum Of Two Numbers Without Using Arithmetic Operators|[GFG](https://practice.geeksforgeeks.org/problems/sum-of-two-numbers-without-using-arithmetic-operators/1/#) |[Java](./Bit-Magic/SumWithoutArithmeticOperators.java) [CPP](./Bit-Magic/GFG_SumWithoutArithmeticOperators.cpp) |Easy|O(1)||
|  9  |Longest Consecutive 1s 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/longest-consecutive-1s-1587115620/1) |[Java](./Bit-Magic/LongestConsecutiveOnes.java) |Easy|O(n)||
|  10  |Permutation Sequence|[LC](https://leetcode.com/problems/permutation-sequence/) |[Java](./Bit-Magic/PermutationSequence.java) ||O(1)||
|  11  |Bit Difference 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1) |[Java](./Bit-Magic/BitDifference.java) |Basic|O(n)||
|  12  |Sum Of Two Integers|[LC](https://leetcode.com/problems/sum-of-two-integers/) |[Java](./Bit-Magic/SumWithoutArithmeticOperatorsNegative.java) [CPP](./Bit-Magic/LC_371_SumWithoutArithmeticOperatorsNegative.cpp) ||O(1)||
|  13  |Reverse Bits|[LC](https://leetcode.com/problems/reverse-bits/) [GFG](https://practice.geeksforgeeks.org/problems/reverse-bits-1611130171/1/) |[Java](./Bit-Magic/ReverseBits.java) |Easy|O(n)||
|  14  |Geek And Function V|[GFG](https://practice.geeksforgeeks.org/problems/geek-and-function-v/0) |[Java](./Bit-Magic/GeekAndFunctionV.java) |Easy|O(n<sup>2</sup>)||
|  15  |Missing Number In Array1416|[GFG](https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1) |[Java](./Bit-Magic/FindMissingNumber.java) [CPP](./Bit-Magic/GFG_BIT_CheckMissingNumber.cpp) |Easy|O(n<sup>2</sup>)||
|  16  |Nth Natural Number|[GFG](https://practice.geeksforgeeks.org/problems/nth-natural-number/1) |[Java](./Bit-Magic/NthNaturalNumber.java) |Hard|O(n)||
|  17  |Check Whether K Th Bit Is Set Or Not 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1) |[Java](./Bit-Magic/CheckKthBit.java) [CPP](./Bit-Magic/GFG_BIT_Check_Kth_Bit.cpp) |Easy|O(n)||
|  18  |Add Binary|[LC](https://leetcode.com/problems/add-binary/) |[Java](./Bit-Magic/AddBinary.java) ||O(n)||
|  19  |Single Number|[LC](https://leetcode.com/problems/single-number/) |[Java](./Bit-Magic/FindOddOccuringNumber.java) [CPP](./Bit-Magic/LC_136_Bit_SingleNumber.cpp) ||O(n)||
|  20  |Power Of Two|[LC](https://leetcode.com/problems/power-of-two/) |[Java](./Bit-Magic/PowerOfTwo.java) [CPP](./Bit-Magic/LC_231_Power_of_two.cpp) ||O(1)||
## Codeforces

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |617 A|[CF](https://codeforces.com/problemset/problem/617/A) |[Java](./Codeforces/Elephant.java) ||O(1)||
|  2  |158 A|[CF](https://codeforces.com/problemset/problem/158/A) |[Java](./Codeforces/NextRound.java) ||O(1)||
|  3  |1607 H|[CF](https://codeforces.com/problemset/problem/1607/H) |[Java](./Codeforces/BanquetPreparation.java) ||O(n<sup>2</sup>)||
|  4  |768 A|[CF](https://codeforces.com/problemset/problem/768/A) |[Java](./Codeforces/OathOfTheNightsWatch.java) ||O(n)||
|  5  |1426 B|[CF](https://codeforces.com/problemset/problem/1426/B) |[Java](./Codeforces/SymmetricMatrix.java) ||O(n<sup>4</sup>)||
|  6  |112 A|[CF](https://codeforces.com/problemset/problem/112/A) |[Java](./Codeforces/PetyaAndStrings.java) ||O(n)||
|  7  |1343 B|[CF](https://codeforces.com/problemset/problem/1343/B) |[Java](./Codeforces/BalancedArray.java) ||O(n<sup>2</sup>)||
|  8  |1385 B|[CF](https://codeforces.com/problemset/problem/1385/B) |[Java](./Codeforces/RestoreThePermutationByMerger.java) ||O(n<sup>2</sup>)||
|  9  |732 A|[CF](https://codeforces.com/problemset/problem/732/A) |[Java](./Codeforces/BuyAShovel.java) ||O(1)||
|  10  |711 A|[CF](https://codeforces.com/problemset/problem/711/A) |[Java](./Codeforces/BusToUdayLand.java) ||O(n)||
|  11  |50 A|[CF](https://codeforces.com/problemset/problem/50/A) |[Java](./Codeforces/DominoPiling.java) ||O(1)||
|  12  |71 A|[CF](https://codeforces.com/problemset/problem/71/A) |[Java](./Codeforces/WayTooLongWords.java) ||O(n)||
|  13  |1326 B|[CF](https://codeforces.com/problemset/problem/1326/B) |[Java](./Codeforces/Maximums.java) ||O(n)||
|  14  |231 A|[CF](https://codeforces.com/problemset/problem/231/A) |[Java](./Codeforces/Team.java) ||O(n)||
|  15  |1368 A|[CF](https://codeforces.com/problemset/problem/1368/A) |[Java](./Codeforces/CPlusEqual.java) ||O(n<sup>2</sup>)||
|  16  |469 A|[CF](https://codeforces.com/problemset/problem/469/A) |[Java](./Codeforces/IWannaBeTheGuy.java) ||O(n)||
|  17  |1475 B|[CF](https://codeforces.com/problemset/problem/1475/B) |[Java](./Codeforces/NewYearsNumber.java) ||O(n)||
|  18  |148 A|[CF](https://codeforces.com/problemset/problem/148/A) |[Java](./Codeforces/InsomniaCure.java) ||O(n)||
|  19  |709 A|[CF](https://codeforces.com/problemset/problem/709/A) |[Java](./Codeforces/Juicer.java) ||O(n)||
|  20  |318 A|[CF](https://codeforces.com/problemset/problem/318/A) |[Java](./Codeforces/EvenOdds.java) ||O(1)||
|  21  |339 A|[CF](https://codeforces.com/problemset/problem/339/A) |[Java](./Codeforces/HelpfulMaths.java) ||O(n)||
|  22  |749 A|[CF](https://codeforces.com/problemset/problem/749/A) |[Java](./Codeforces/BachGoldProblem.java) ||O(n)||
|  23  |200 B|[CF](https://codeforces.com/problemset/problem/200/B) |[Java](./Codeforces/Drinks.java) ||O(n)||
|  24  |1624 B|[CF](https://codeforces.com/problemset/problem/1624/B) |[Java](./Codeforces/MakeAP.java) ||O(n)||
|  25  |978 B|[CF](https://codeforces.com/problemset/problem/978/B) |[Java](./Codeforces/FileName.java) ||O(n)||
|  26  |1560 B|[CF](https://codeforces.com/problemset/problem/1560/B) |[Java](./Codeforces/WhoIsOpposite.java) ||O(n)||
|  27  |1350 A|[CF](https://codeforces.com/problemset/problem/1350/A) |[Java](./Codeforces/OracAndFactors.java) ||O(n<sup>2</sup>)||
|  28  |1543 B|[CF](https://codeforces.com/problemset/problem/1543/B) |[Java](./Codeforces/CustomizingTheTrack.java) ||O(n<sup>2</sup>)||
|  29  |263 A|[CF](https://codeforces.com/problemset/problem/263/A) |[Java](./Codeforces/BeautifulMatrix.java) ||O(n<sup>2</sup>)||
|  30  |282 A|[CF](https://codeforces.com/problemset/problem/282/A) |[Java](./Codeforces/BitParser.java) ||O(n)||
|  31  |439 A|[CF](https://codeforces.com/problemset/problem/439/A) |[Java](./Codeforces/DevuTheSingerAndChuruTheJoker.java) ||O(n)||
|  32  |1335 B|[CF](https://codeforces.com/problemset/problem/1335/B) |[Java](./Codeforces/ConstructTheString.java) ||O(n<sup>2</sup>)||
|  33  |1337 B|[CF](https://codeforces.com/problemset/problem/1337/B) |[Java](./Codeforces/KanaAndDragonQuestGame.java) ||O(n<sup>2</sup>)||
|  34  |115 A|[CF](https://codeforces.com/problemset/problem/115/A) |[Java](./Codeforces/Party.java) ||O(n)||
|  35  |59 A|[CF](https://codeforces.com/problemset/problem/59/A) |[Java](./Codeforces/Word.java) ||O(n)||
|  36  |34 B|[CF](https://codeforces.com/problemset/problem/34/B) |[Java](./Codeforces/Sale.java) ||O(n)||
|  37  |32 B|[CF](https://codeforces.com/problemset/problem/32/B) |[Java](./Codeforces/Borze.java) ||O(n)||
|  38  |1525 B|[CF](https://codeforces.com/problemset/problem/1525/B) |[Java](./Codeforces/PermutationSort.java) ||O(n<sup>2</sup>)||
|  39  |1294 A|[CF](https://codeforces.com/problemset/problem/1294/A) |[Java](./Codeforces/CollectingCoins.java) ||O(n)||
|  40  |490 A|[CF](https://codeforces.com/problemset/problem/490/A) |[Java](./Codeforces/TeamOlympiad.java) ||O(n)||
|  41  |1296 B|[CF](https://codeforces.com/problemset/problem/1296/B) |[Java](./Codeforces/FoodBuying.java) ||O(n<sup>2</sup>)||
|  42  |236 A|[CF](https://codeforces.com/problemset/problem/236/A) |[Java](./Codeforces/BoyOrGirl.java) ||O(n)||
|  43  |443 A|[CF](https://codeforces.com/problemset/problem/443/A) |[Java](./Codeforces/AntonAndLetters.java) ||O(n)||
|  44  |677 A|[CF](https://codeforces.com/problemset/problem/677/A) |[Java](./Codeforces/VanyaAndFence.java) ||O(n)||
|  45  |1325 B|[CF](https://codeforces.com/problemset/problem/1325/B) |[Java](./Codeforces/CopyCopyCopyCopyCopy.java) ||O(n<sup>2</sup>)||
|  46  |750 A|[CF](https://codeforces.com/problemset/problem/750/A) |[Java](./Codeforces/NewYearAndHurry.java) ||O(n)||
|  47  |1559 B|[CF](https://codeforces.com/problemset/problem/1559/B) |[Java](./Codeforces/MochaAndRedAndBlue.java) ||O(n<sup>2</sup>)||
|  48  |1367 B|[CF](https://codeforces.com/problemset/problem/1367/B) |[Java](./Codeforces/EvenArray.java) ||O(n<sup>2</sup>)||
|  49  |580 A|[CF](https://codeforces.com/problemset/problem/580/A) |[Java](./Codeforces/KefaAndFirstSteps.java) ||O(n)||
|  50  |1430 A|[CF](https://codeforces.com/problemset/problem/1430/A) |[Java](./Codeforces/NumberOfApartments.java) ||O(n)||
|  51  |141 A|[CF](https://codeforces.com/problemset/problem/141/A) |[Java](./Codeforces/AmusingJoke.java) ||O(n)||
|  52  |1283 A|[CF](https://codeforces.com/problemset/problem/1283/A) |[Java](./Codeforces/MinutesBeforeNewYear.java) ||O(n)||
|  53  |546 A|[CF](https://codeforces.com/problemset/problem/546/A) |[Java](./Codeforces/SoldierAndBananas.java) ||O(1)||
|  54  |4 A|[CF](https://codeforces.com/problemset/problem/4/A) |[Java](./Codeforces/Watermelon.java) ||O(1)||
|  55  |41 A|[CF](https://codeforces.com/problemset/problem/41/A) |[Java](./Codeforces/Translation.java) ||O(n)||
|  56  |1370 A|[CF](https://codeforces.com/problemset/problem/1370/A) |[Java](./Codeforces/MaximumGCD.java) [CPP](./Codeforces/A1370_MaximumGCD.cpp) ||O(1)||
|  57  |702 A|[CF](https://codeforces.com/problemset/problem/702/A) |[Java](./Codeforces/MaximumIncrease.java) ||O(n)||
|  58  |1353 B|[CF](https://codeforces.com/problemset/problem/1353/B) |[Java](./Codeforces/TwoArraysAndSwap.java) ||O(n<sup>2</sup>)||
|  59  |746 B|[CF](https://codeforces.com/problemset/problem/746/B) |[Java](./Codeforces/Decoding.java) ||O(n)||
|  60  |1374 B|[CF](https://codeforces.com/problemset/problem/1374/B) |[Java](./Codeforces/MultiplyBy2DivideBy6.java) ||O(n)||
|  61  |432 A|[CF](https://codeforces.com/problemset/problem/432/A) |[Java](./Codeforces/ChoosingTeams.java) ||O(n)||
|  62  |474 A|[CF](https://codeforces.com/problemset/problem/474/A) |[Java](./Codeforces/Keyboard.java) ||O(n)||
|  63  |977 B|[CF](https://codeforces.com/problemset/problem/977/B) |[Java](./Codeforces/TwoGram.java) ||O(n)||
|  64  |1311 A|[CF](https://codeforces.com/problemset/problem/1311/A) |[Java](./Codeforces/AddOddOrSubtractEven.java) ||O(n)||
|  65  |1141 B|[CF](https://codeforces.com/problemset/problem/1141/B) |[Java](./Codeforces/MaximalContinuousRest.java) ||O(n)||
|  66  |266 B|[CF](https://codeforces.com/problemset/problem/266/B) |[Java](./Codeforces/QueueAtSchool.java) ||O(n<sup>2</sup>)||
## Disjoint-Set

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
## Dynamic-Programming

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Decode Ways|[LC](https://leetcode.com/problems/decode-ways/) |[Java](./Dynamic-Programming/DecodeWays.java) ||O(n)||
|  2  |Longest Increasing Subsequence 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1) |[Java](./Dynamic-Programming/LongestIncreasingSubsequence.java) |Medium|O(n<sup>2</sup>)||
|  3  |Longest Palindromic Substring|[LC](https://leetcode.com/problems/longest-palindromic-substring/) |[Java](./Dynamic-Programming/LongestPalindromicSubstring.java) ||O(n)||
|  4  |Count Ways To Reach The Nth Stair 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1) [LC](https://leetcode.com/problems/climbing-stairs/) |[Java](./Dynamic-Programming/CountWaysToNthStair.java) |Medium|O(n)||
|  5  |Cutted Segments1642|[GFG](https://practice.geeksforgeeks.org/problems/cutted-segments1642/1/) |[Java](./Dynamic-Programming/MaximizeCuts.java) |Medium|O(n)||
|  6  |Arithmetic Slices|[LC](https://leetcode.com/problems/arithmetic-slices/) |[Java](./Dynamic-Programming/ArithmeticSlices.java) ||O(n<sup>2</sup>)||
|  7  |Maximum Sum Of Elements Not Part Of Lis|[GFG](https://practice.geeksforgeeks.org/problems/maximum-sum-of-elements-not-part-of-lis/1) |[Java](./Dynamic-Programming/MaxSumNotPartOfLIS.java) |Medium|O(n<sup>2</sup>)||
|  8  |Longest Common Subsequence 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1) |[Java](./Dynamic-Programming/LCS.java) |Medium|O(n<sup>2</sup>)||
|  9  |Bbt Counter4914|[GFG](https://practice.geeksforgeeks.org/problems/bbt-counter4914/1) |[Java](./Dynamic-Programming/BBTCounter.java) |Easy|O(n)||
|  10  |Min Cost Climbing Stairs|[LC](https://leetcode.com/problems/min-cost-climbing-stairs/) |[Java](./Dynamic-Programming/MinCostStairs.java) ||O(n)||
|  11  |Coin Change2448|[GFG](https://practice.geeksforgeeks.org/problems/coin-change2448/1/) [LC](https://leetcode.com/problems/coin-change/) |[Java](./Dynamic-Programming/CoinChange.java) |Medium|O(n<sup>2</sup>)||
|  12  |Number Of Coins1824|[GFG](https://practice.geeksforgeeks.org/problems/number-of-coins1824/1) |[Java](./Dynamic-Programming/MinimumCoins.java) |Medium|O(n<sup>2</sup>)||
|  13  |Subset Sum Problem2014|[GFG](https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1) |[Java](./Dynamic-Programming/PartitionArray.java) |Medium|O(n)||
|  14  |Friends Pairing Problem5425|[GFG](https://practice.geeksforgeeks.org/problems/friends-pairing-problem5425/1/) |[Java](./Dynamic-Programming/FriendsPairing.java) |Easy|O(n)||
|  15  |Minimum Path Sum|[LC](https://leetcode.com/problems/minimum-path-sum/) |[Java](./Dynamic-Programming/MinimumPathSum.java) ||O(n<sup>2</sup>)||
|  16  |Lcs Of Three Strings0028|[GFG](https://practice.geeksforgeeks.org/problems/lcs-of-three-strings0028/1) |[Java](./Dynamic-Programming/LCS3.java) |Medium|O(n<sup>3</sup>)||
|  17  |Minimum Cost For Tickets|[LC](https://leetcode.com/problems/minimum-cost-for-tickets/) |[Java](./Dynamic-Programming/MinimumCostForTickets.java) ||O(n<sup>2</sup>)||
|  18  |Painting The Fence3727|[GFG](https://practice.geeksforgeeks.org/problems/painting-the-fence3727/1/) |[Java](./Dynamic-Programming/PaintTheFence.java) |Medium|O(n)||
|  19  |Minimum Falling Path Sum Ii|[LC](https://leetcode.com/problems/minimum-falling-path-sum-ii/) |[Java](./Dynamic-Programming/MinimumFallingPathSum2.java) ||O(n)||
|  20  |Longest Palindromic Subsequence 1612327878|[GFG](https://practice.geeksforgeeks.org/problems/longest-palindromic-subsequence-1612327878/1) |[Java](./Dynamic-Programming/LongestPalindromicSubsequence.java) |Medium|O(n<sup>2</sup>)||
|  21  |Word Break1352|[GFG](https://practice.geeksforgeeks.org/problems/word-break1352/1) |[Java](./Dynamic-Programming/WordBreak.java) |Medium|O(n<sup>2</sup>)||
|  22  |N Th Tribonacci Number|[LC](https://leetcode.com/problems/n-th-tribonacci-number/) |[Java](./Dynamic-Programming/NthTribonacci.java) ||O(n)||
|  23  |House Robber|[LC](https://leetcode.com/problems/house-robber/) |[Java](./Dynamic-Programming/HouseRobber.java) ||O(n)||
|  24  |Edit Distance3702|[GFG](https://practice.geeksforgeeks.org/problems/edit-distance3702/1) |[Java](./Dynamic-Programming/EditDistance.java) |Medium|O(n<sup>2</sup>)||
|  25  |Subset Sum Problem 1611555638|[GFG](https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1) |[Java](./Dynamic-Programming/SubsetSum.java) |Medium|O(n<sup>2</sup>)||
|  26  |Largest Square Formed In A Matrix0806|[GFG](https://practice.geeksforgeeks.org/problems/largest-square-formed-in-a-matrix0806/1) |[Java](./Dynamic-Programming/MaxSquareOfOnes.java) |Medium|O(n)||
|  27  |Unique Paths Ii|[LC](https://leetcode.com/problems/unique-paths-ii/) |[Java](./Dynamic-Programming/UniquePathsWithObstacles.java) ||O(n<sup>2</sup>)||
|  28  |Longest Repeating Subsequence2004|[GFG](https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1) |[Java](./Dynamic-Programming/LongestRepeatingSubsequence.java) |Easy|O(n<sup>2</sup>)||
|  29  |Count Square Submatrices With All Ones|[LC](https://leetcode.com/problems/count-square-submatrices-with-all-ones/) |[Java](./Dynamic-Programming/CountCompleteSquaresInMatrix.java) [CPP](./Dynamic-Programming/LC_1277_CountSquareSubmatricesAllOnes.cpp) ||O(n<sup>2</sup>)||
|  30  |Path In Matrix3805|[GFG](https://practice.geeksforgeeks.org/problems/path-in-matrix3805/1) |[Java](./Dynamic-Programming/MaxPathSum.java) |Medium|O(n<sup>2</sup>)||
|  31  |Shortest Common Supersequence0322|[GFG](https://practice.geeksforgeeks.org/problems/shortest-common-supersequence0322/1/) |[Java](./Dynamic-Programming/ShortestCommonSupersequence.java) |Medium|O(n<sup>2</sup>)||
|  32  |Knapsack With Duplicate Items4201|[GFG](https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1) |[Java](./Dynamic-Programming/UnboundedKnapsack.java) |Easy|O(n)||
|  33  |Wiggle Subsequence|[LC](https://leetcode.com/problems/wiggle-subsequence/) |[Java](./Dynamic-Programming/WiggleSubsequence.java) ||O(n<sup>2</sup>)||
|  34  |Stickler Theif 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1/) |[Java](./Dynamic-Programming/SticklerThief.java) |Easy|O(n<sup>2</sup>)||
|  35  |Minimum Cost To Fill Given Weight In A Bag1956|[GFG](https://practice.geeksforgeeks.org/problems/minimum-cost-to-fill-given-weight-in-a-bag1956/1) |[Java](./Dynamic-Programming/BuyOranges.java) |Medium|O(n<sup>2</sup>)||
|  36  |Gold Mine Problem2608|[GFG](https://practice.geeksforgeeks.org/problems/gold-mine-problem2608/1/) |[Java](./Dynamic-Programming/GoldMine.java) |Easy|O(n<sup>2</sup>)||
|  37  |Nth Catalan Number0817|[GFG](https://practice.geeksforgeeks.org/problems/nth-catalan-number0817/1/) |[Java](./Dynamic-Programming/CatalanNumbers.java) |Easy|O(n<sup>2</sup>)||
|  38  |Matrix Chain Multiplication0303|[GFG](https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1) |[Java](./Dynamic-Programming/MatrixChainMultiplication.java) |Hard|O(n<sup>3</sup>)||
|  39  |Minimum Falling Path Sum|[LC](https://leetcode.com/problems/minimum-falling-path-sum/) |[Java](./Dynamic-Programming/MinimumFallingPathSum.java) ||O(n<sup>2</sup>)||
|  40  |Maximum Profit In Job Scheduling|[LC](https://leetcode.com/problems/maximum-profit-in-job-scheduling/) |[Java](./Dynamic-Programming/WeightedIntervalScheduling.java) ||O(n)||
|  41  |Wildcard Pattern Matching|[GFG](https://practice.geeksforgeeks.org/problems/wildcard-pattern-matching/1) |[Java](./Dynamic-Programming/WildcardMatching.java) |Medium|O(n<sup>2</sup>)||
|  42  |Box Stacking|[GFG](https://practice.geeksforgeeks.org/problems/box-stacking/1/) |[Java](./Dynamic-Programming/BoxStacking.java) |Medium|O(n<sup>2</sup>)||
|  43  |Unique Paths|[LC](https://leetcode.com/problems/unique-paths/) |[Java](./Dynamic-Programming/UniquePaths.java) ||O(n)||
|  44  |Maximum Length Of Repeated Subarray|[LC](https://leetcode.com/problems/maximum-length-of-repeated-subarray/) |[Java](./Dynamic-Programming/MaxLengthRepeatedSubarray.java) ||O(n<sup>2</sup>)||
|  45  |Counting Bits|[LC](https://leetcode.com/problems/counting-bits/) |[Java](./Dynamic-Programming/CountBitsInEachNumber.java) ||O(n<sup>2</sup>)||
|  46  |Ncr1019|[GFG](https://practice.geeksforgeeks.org/problems/ncr1019/1) |[Java](./Dynamic-Programming/BinomialCoefficients.java) |Medium|O(n<sup>2</sup>)||
|  47  |Egg Dropping Puzzle 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/egg-dropping-puzzle-1587115620/1) |[Java](./Dynamic-Programming/EggDrop.java) |Medium|O(n<sup>3</sup>)||
|  48  |Longest Common Substring1452|[GFG](https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1) |[Java](./Dynamic-Programming/LongestCommonSubstring.java) |Medium|O(n)||
|  49  |Reach A Given Score 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/reach-a-given-score-1587115621/1) |[Java](./Dynamic-Programming/ReachAGivenScore.java) |Easy|O(n)||
|  50  |House Robber Ii|[LC](https://leetcode.com/problems/house-robber-ii/) |[Java](./Dynamic-Programming/HouseRobber2.java) ||O(n)||
|  51  |0 1 Knapsack Problem0945|[GFG](https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1) |[Java](./Dynamic-Programming/BinaryKnapsack.java) |Medium|O(n<sup>2</sup>)||
|  52  |Get Minimum Squares0538|[GFG](https://practice.geeksforgeeks.org/problems/get-minimum-squares0538/1) |[Java](./Dynamic-Programming/MinimumSquaresSum.java) |Medium|O(n<sup>2</sup>)||
|  53  |Maximum Sum Increasing Subsequence4749|[GFG](https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1) |[Java](./Dynamic-Programming/MaximumSumIncreasingSubsequence.java) |Medium|O(n<sup>2</sup>)||
|  54  |Count Palindromic Subsequences|[GFG](https://practice.geeksforgeeks.org/problems/count-palindromic-subsequences/1) |[Java](./Dynamic-Programming/CountLongestPalindromicSubsequences.java) |Medium|O(n<sup>2</sup>)||
## Graph

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Implementing Dijkstra Set 1 Adjacency Matrix|[GFG](https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1#) |[Java](./Graph/ShortestPath.java) [CPP](./Graph/GFG_Graph_ShortestDistance_Dijkstra.cpp) |Medium|O(1)||
|  2  |Clone Graph|[LC](https://leetcode.com/problems/clone-graph/) |[Java](./Graph/CloneGraph.java) [CPP](./Graph/LC_133_Graph_CloneGraph.cpp) ||O(n<sup>2</sup>)||
|  3  |Topological Sort|[GFG](https://practice.geeksforgeeks.org/problems/topological-sort/1#) |[Java](./Graph/TopologicalSort.java) [CPP](./Graph/GFG_Graph_TopologicalSort.cpp) |Medium|O(1)||
|  4  |Number Of Provinces|[GFG](https://practice.geeksforgeeks.org/problems/number-of-provinces/1) |[Java](./Graph/NumberOfProvinces.java) |Medium|O(n<sup>3</sup>)||
|  5  |Find The Number Of Islands|[GFG](https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1#) |[Java](./Graph/NumberOfIslands.java) [CPP](./Graph/GFG_Graph_Numof_Islands.cpp) |Medium|O(1)||
|  6  |Print Adjacency List 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1#) |[Java](./Graph/PrintAdjList.java) [CPP](./Graph/GFG_Graph_AdjListPrint.cpp) |Easy|O(1)||
|  7  |Depth First Traversal For A Graph|[GFG](https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1) |[Java](./Graph/DFS.java) [CPP](./Graph/GFG_Graph_DFSTraversal.cpp) |Easy|O(n)||
|  8  |Journey To The Moon|[HR](https://www.hackerrank.com/challenges/journey-to-the-moon/problem) |[Java](./Graph/JourneyToMoon.java) ||O(n)||
|  9  |Euler Circuit In A Directed Graph|[GFG](https://practice.geeksforgeeks.org/problems/euler-circuit-in-a-directed-graph/1) |[Java](./Graph/EulerCircuit.java) |Medium|O(n<sup>2</sup>)||
|  10  |Strongly Connected Component Tarjanss Algo 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/strongly-connected-component-tarjanss-algo-1587115621/1/) |[Java](./Graph/Tarjan.java) |Hard|O(n<sup>2</sup>)||
|  11  |Detect Cycle In A Directed Graph|[GFG](https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1) |[Java](./Graph/DetectCycleInDirectedGraph.java) [CPP](./Graph/GFG_Graph_CycleDetectionDirected.cpp) |Medium|O(n)||
|  12  |Cheapest Flights Within K Stops|[LC](https://leetcode.com/problems/cheapest-flights-within-k-stops/) |[Java](./Graph/CheapestFlightWithinKStops.java) ||O(n<sup>2</sup>)||
|  13  |Strongly Connected Components Kosarajus Algo|[GFG](https://practice.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1#) |[Java](./Graph/Kosaraju.java) [CPP](./Graph/GFG_Graph_StronglyConnectedComp(Kosaraju).cpp) |Medium|O(1)||
|  14  |269f61832b146dd5e6d89b4ca18cbd2a2654ebbe|[GFG](https://practice.geeksforgeeks.org/problems/269f61832b146dd5e6d89b4ca18cbd2a2654ebbe/1/) |[Java](./Graph/CovidSpread.java) |Medium|O(n<sup>2</sup>)||
|  15  |Geekss Garden|[GFG](https://practice.geeksforgeeks.org/problems/geekss-garden/0) |[Java](./Graph/GeeksGarden.java) |Easy|O(n<sup>4</sup>)||
|  16  |Word Ladder|[LC](https://leetcode.com/problems/word-ladder/) |[Java](./Graph/WordLadder.java) ||O(n<sup>4</sup>)||
|  17  |Detect Cycle In An Undirected Graph|[GFG](https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1) |[Java](./Graph/DetectCycleInUndirectedGraph.java) [CPP](./Graph/GFG_Graph_CycleDetectionUnDirected.cpp) |Medium|O(n)||
|  18  |Length Of Largest Region Of 1s 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/length-of-largest-region-of-1s-1587115620/1) |[Java](./Graph/MaxAreaOfOnes.java) |Medium|O(n)||
|  19  |Rotting Oranges|[LC](https://leetcode.com/problems/rotting-oranges/) |[Java](./Graph/RottenOranges.java) ||O(n<sup>2</sup>)||
|  20  |Bridge Edge In Graph|[GFG](https://practice.geeksforgeeks.org/problems/bridge-edge-in-graph/1#) |[Java](./Graph/CheckIfBridge.java) |Medium|O(n)||
|  21  |Prerequisite Tasks|[GFG](https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1/) |[Java](./Graph/PrerequisiteTasks.java) |Medium|O(n<sup>2</sup>)||
|  22  |Steps By Knight5927|[GFG](https://practice.geeksforgeeks.org/problems/steps-by-knight5927/1/) |[Java](./Graph/MinimumStepsByKnight.java) |Medium|O(n)||
|  23  |Number Of Operations To Make Network Connected|[LC](https://leetcode.com/problems/number-of-operations-to-make-network-connected/) |[Java](./Graph/ConnectNetwork.java) ||O(n)||
|  24  |Employee Importance|[LC](https://leetcode.com/problems/employee-importance/) |[Java](./Graph/EmployeeImportance.java) ||O(n<sup>2</sup>)||
|  25  |Find The Town Judge|[LC](https://leetcode.com/problems/find-the-town-judge/) |[Java](./Graph/FindTownJudge.java) ||O(n<sup>2</sup>)||
|  26  |Possible Paths Between 2 Vertices 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/possible-paths-between-2-vertices-1587115620/1) |[Java](./Graph/PossiblePathsBetweenTwoVertices.java) |Medium|O(n)||
|  27  |Minimum Spanning Tree|[GFG](https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1#) |[Java](./Graph/MinimumSpanningTree.java) [CPP](./Graph/GFG_MST.cpp) |Medium|O(1)||
|  28  |Bfs Traversal Of Graph|[GFG](https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1) |[Java](./Graph/BFS.java) [CPP](./Graph/GFG_Graph_BFSTraversal.cpp) |Easy|O(n<sup>2</sup>)||
|  29  |Circle Of Strings4530|[GFG](https://practice.geeksforgeeks.org/problems/circle-of-strings4530/1) |[Java](./Graph/CircleOfStrings.java) |Medium|O(n)||
|  30  |Course Schedule|[LC](https://leetcode.com/problems/course-schedule/) |[CPP](./Graph/LC_207_CourseSchedule.cpp) ||O(1)||
|  31  |Bipartite Graph|[GFG](https://practice.geeksforgeeks.org/problems/bipartite-graph/1) |[Java](./Graph/CheckIfBipartite.java) |Medium|O(n<sup>3</sup>)||
|  32  |Minimum Swaps|[GFG](https://practice.geeksforgeeks.org/problems/minimum-swaps/1) |[Java](./Graph/MinimumSwapsToSort.java) |Medium|O(n)||
|  33  |Implementing Floyd Warshall2042|[GFG](https://practice.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1) |[Java](./Graph/FloydWarshall.java) |Medium|O(n)||
|  34  |Distance From The Source Bellman Ford Algorithm|[GFG](https://practice.geeksforgeeks.org/problems/distance-from-the-source-bellman-ford-algorithm/1/) [GFG](https://practice.geeksforgeeks.org/problems/negative-weight-cycle3504/1) |[Java](./Graph/BellmanFord.java) |Medium|O(n)||
|  35  |X Total Shapes3617|[GFG](https://practice.geeksforgeeks.org/problems/x-total-shapes3617/1/) |[Java](./Graph/XTotalShapes.java) |Medium|O(n<sup>3</sup>)||
## Greedy

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Largest Number With Given Sum 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/largest-number-with-given-sum-1587115620/1) |[Java](./Greedy/LargestNumberPossible.java) |Easy|O(n)||
|  2  |Fractional Knapsack 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1) |[Java](./Greedy/FractionalKnapsack.java) |Medium|O(n)||
|  3  |Merge Intervals|[LC](https://leetcode.com/problems/merge-intervals/) |[CPP](./Greedy/LC_56_MergeIntervals.cpp) ||O(1)||
|  4  |Maximize Toys0331|[GFG](https://practice.geeksforgeeks.org/problems/maximize-toys0331/1) |[Java](./Greedy/MaximizeToys.java) |Easy|O(n)||
|  5  |Maximize Sum After K Negations1149|[GFG](https://practice.geeksforgeeks.org/problems/maximize-sum-after-k-negations1149/1) |[Java](./Greedy/MaximumSumAfterKOps.java) |Easy|O(n)||
|  6  |Minimum Cost Of Ropes 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1) |[Java](./Greedy/MinimumCostRope.java) |Easy|O(n)||
|  7  |Shop In Candy Store1145|[GFG](https://practice.geeksforgeeks.org/problems/shop-in-candy-store1145/1) |[Java](./Greedy/BuyCandies.java) |Easy|O(n)||
|  8  |Coin Piles5152|[GFG](https://practice.geeksforgeeks.org/problems/coin-piles5152/1/) |[Java](./Greedy/CoinPiles.java) |Medium|O(n<sup>2</sup>)||
|  9  |Job Sequencing Problem 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1/) |[Java](./Greedy/JobScheduling.java) |Medium|O(n<sup>2</sup>)||
|  10  |Task Scheduler|[LC](https://leetcode.com/problems/task-scheduler/) |[Java](./Greedy/TaskScheduler.java) ||O(n)||
|  11  |Water Connection Problem5822|[GFG](https://practice.geeksforgeeks.org/problems/water-connection-problem5822/1) |[Java](./Greedy/WaterConnection.java) |Medium|O(n)||
|  12  |Chocolate Distribution Problem3825|[GFG](https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1) |[Java](./Greedy/ChocolateDistribution.java) |Easy|O(n)||
|  13  |N Meetings In One Room 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1/) |[Java](./Greedy/ActivitySelectionProblem.java) |Easy|O(n)||
|  14  |Pairs With Specific Difference1533|[GFG](https://practice.geeksforgeeks.org/problems/pairs-with-specific-difference1533/1) |[Java](./Greedy/SumOfPairsWithSpecificDifference.java) |Easy|O(n)||
|  15  |Max Length Chain|[GFG](https://practice.geeksforgeeks.org/problems/max-length-chain/1) |[Java](./Greedy/MaxLengthChain.java) |Medium|O(n)||
|  16  |Huffman Encoding3345|[GFG](https://practice.geeksforgeeks.org/problems/huffman-encoding3345/1/) |[Java](./Greedy/HuffmanCoding.java) |Medium|O(n)||
## Hashing

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Maximum Repeating Number4858|[GFG](https://practice.geeksforgeeks.org/problems/maximum-repeating-number4858/1) |[CPP](./Hashing/GFG_MostFreq.cpp) |Basic|O(1)||
|  2  |Uncommon Words From Two Sentences|[LC](https://leetcode.com/problems/uncommon-words-from-two-sentences/) |[Java](./Hashing/UncommonWords.java) [CPP](./Hashing/LC_884_UncommonWordsFromTwoSentences.cpp) ||O(1)||
|  3  |Unique Number Of Occurrences|[LC](https://leetcode.com/problems/unique-number-of-occurrences/) |[CPP](./Hashing/LC_1207_HT_UniqueNumOfOccurrences.cpp) ||O(1)||
|  4  |Group Anagrams|[LC](https://leetcode.com/problems/group-anagrams/) |[Java](./Hashing/GroupAnagrams.java) ||O(n<sup>3</sup>)||
|  5  |Count Pairs In Array Divisible By K|[GFG](https://practice.geeksforgeeks.org/problems/count-pairs-in-array-divisible-by-k/1) |[Java](./Hashing/CountPairsInArrayDivisibleByK.java) |Medium|O(n)||
|  6  |Longest Subarray With Sum Divisible By K1259|[GFG](https://practice.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k1259/1) |[Java](./Hashing/LongestSubarrayWithSumDivisibleByK.java) |Medium|O(n)||
|  7  |First Missing Positive|[LC](https://leetcode.com/problems/first-missing-positive/) |[Java](./Hashing/FirstMissingPositive.java) ||O(n)||
|  8  |Design Hashset|[LC](https://leetcode.com/problems/design-hashset/) |[Java](./Hashing/HashSetDesign.java) ||O(n)||
|  9  |Longest Palindrome By Concatenating Two Letter Words|[LC](https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/) |[Java](./Hashing/LongestPalindromeByConcatenatingTwoLetterWords.java) ||O(n)||
|  10  |Count Good Meals|[LC](https://leetcode.com/problems/count-good-meals/) |[Java](./Hashing/CountGoodMeals.java) ||O(n<sup>2</sup>)||
|  11  |Check If A String Contains All Binary Codes Of Size K|[LC](https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k/) |[Java](./Hashing/CheckAllBinaryCodesPresence.java) ||O(n)||
|  12  |Find Common Characters|[LC](https://leetcode.com/problems/find-common-characters/) |[Java](./Hashing/FindCommonCharacters.java) ||O(n<sup>2</sup>)||
|  13  |Top K Frequent Words|[LC](https://leetcode.com/problems/top-k-frequent-words/) |[Java](./Hashing/TopKFrequentWords.java) ||O(n)||
|  14  |Find All Duplicates In An Array|[LC](https://leetcode.com/problems/find-all-duplicates-in-an-array/) |[Java](./Hashing/FindDuplicates.java) ||O(n)||
|  15  |Most Common Word|[LC](https://leetcode.com/problems/most-common-word/) |[Java](./Hashing/MostFrequentStringIgnoringBannedOnes.java) ||O(n)||
|  16  |Find All Numbers Disappeared In An Array|[LC](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/) |[Java](./Hashing/FindDisappearedNumbers.java) ||O(n)||
|  17  |Most Frequent Word In An Array Of Strings3528|[GFG](https://practice.geeksforgeeks.org/problems/most-frequent-word-in-an-array-of-strings3528/1#) |[Java](./Hashing/MostFrequentString.java) [CPP](./Hashing/GFG_MostFreqWordInArrayOfStrings.cpp) |Medium|O(1)||
|  18  |In First But Second5423|[GFG](https://practice.geeksforgeeks.org/problems/in-first-but-second5423/1) |[Java](./Hashing/FindMissingInSecondArray.java) |Medium|O(n)||
|  19  |Find Unique Binary String|[LC](https://leetcode.com/problems/find-unique-binary-string/) |[Java](./Hashing/FindMissingBinaryString.java) ||O(n<sup>2</sup>)||
|  20  |Relative Sorting4323|[GFG](https://practice.geeksforgeeks.org/problems/relative-sorting4323/1) |[Java](./Hashing/RelativeSorting.java) |Medium|O(n<sup>2</sup>)||
|  21  |Top K Frequent Elements In Array|[GFG](https://practice.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1) |[Java](./Hashing/TopK.java) |Easy|O(n)||
|  22  |Design Hashmap|[LC](https://leetcode.com/problems/design-hashmap/) |[Java](./Hashing/HashMapDesign.java) [CPP](./Hashing/LC_706_DesignHashMap.cpp) ||O(n)||
|  23  |First Non Repeating Character In A Stream1216|[GFG](https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1) |[Java](./Hashing/FindFirstNonRepeatingCharacter.java) |Medium|O(n<sup>2</sup>)||
|  24  |Longest Substring Without Repeating Characters|[LC](https://leetcode.com/problems/longest-substring-without-repeating-characters/) |[Java](./Hashing/LongestUniqueSubstring.java) [CPP](./Hashing/GFG_LC3_LongestUniqueSubstring.cpp) ||O(1)||
|  25  |Unique Email Addresses|[LC](https://leetcode.com/problems/unique-email-addresses/) |[Java](./Hashing/UniqueEmailAddresses.java) ||O(n<sup>2</sup>)||
## Heap

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Find Smallest Range Containing Elements From K Lists|[GFG](https://practice.geeksforgeeks.org/problems/find-smallest-range-containing-elements-from-k-lists/1) |[Java](./Heap/SmallestRangeFromKArrays.java) |Hard|O(n)||
|  2  |Merge K Sorted Arrays|[GFG](https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1#) |[Java](./Heap/MergeKSortedArrays.java) [CPP](./Heap/GFG_MergeKSortedArrays.cpp) |Medium|O(1)||
|  3  |K Closest Points To Origin|[LC](https://leetcode.com/problems/k-closest-points-to-origin/) |[Java](./Heap/KClosestPointsToOrigin.java) [CPP](./Heap/LC_973_KClosestPointsToOrigin.cpp) ||O(n)||
|  4  |Kth Smallest Element5635|[GFG](https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1/) |[CPP](./Heap/GFG_KthSmallest.cpp) |Medium|O(1)||
|  5  |Minimum Sum4058|[GFG](https://practice.geeksforgeeks.org/problems/minimum-sum4058/1/) |[Java](./Heap/MinimumSum.java) |Medium|O(n)||
|  6  |Kth Largest Element In A Stream|[LC](https://leetcode.com/problems/kth-largest-element-in-a-stream/) |[Java](./Heap/KthLargestFromStream.java) ||O(n)||
|  7  |Minimum Cost Of Ropes 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1) |[Java](./Heap/MinCostOfRopes.java) |Easy|O(n)||
|  8  |K Largest Elements4206|[GFG](https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1/) |[Java](./Heap/KLargestElements.java) |Medium|O(n)||
|  9  |Kth Largest Element In An Array|[LC](https://leetcode.com/problems/kth-largest-element-in-an-array/) |[Java](./Heap/KthLargest.java) [CPP](./Heap/LC_215_KthLargestEleInArray.cpp) ||O(n)||
|  10  |Merge K Sorted Lists|[LC](https://leetcode.com/problems/merge-k-sorted-lists/) |[Java](./Heap/MergeKSortedLists.java) [CPP](./Heap/LC_23_MergerKSortedLists.cpp) ||O(1)||
|  11  |Find Median From Data Stream|[LC](https://leetcode.com/problems/find-median-from-data-stream/) [GFG](https://practice.geeksforgeeks.org/problems/find-median-in-a-stream-1587115620/1#.) |[Java](./Heap/MedianOfAStream.java) [CPP](./Heap/LC_295_FindMediaDataStream.cpp) |Hard|O(1)||
|  12  |Chinky And Diamonds3340|[GFG](https://practice.geeksforgeeks.org/problems/chinky-and-diamonds3340/1) |[Java](./Heap/MaximumDiamonds.java) |Easy|O(n)||
|  13  |Kth Largest Element In A Stream703.|[LC](https://leetcode.com/problems/kth-largest-element-in-a-stream703.) |[CPP](./Heap/LC_703_KthLargestEleInStream.cpp) ||O(1)||
|  14  |Find Nearest Point That Has The Same X Or Y Coordinate|[LC](https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/) |[Java](./Heap/NearestPoint.java) [CPP](./Heap/LC_1779_FindNearestPointThatHaxSameCoordinate.cpp) ||O(1)||
|  15  |Is Binary Tree Heap|[GFG](https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1/) |[Java](./Heap/IsHeap.java) |Easy|O(1)||
## Linked-List

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Rotate A Linked List|[GFG](https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1) |[Java](./Linked-List/RotateList.java) [CPP](./Linked-List/GFG_RotateLinkedList.cpp) |Medium|O(1)||
|  2  |Intersection Of Two Sorted Linked Lists|[GFG](https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1) |[Java](./Linked-List/IntersectionOfSortedLists.java) |Easy|O(n)||
|  3  |Swap Nodes In Pairs|[LC](https://leetcode.com/problems/swap-nodes-in-pairs/) |[Java](./Linked-List/SwapNodesInPairs.java) [CPP](./Linked-List/LC_24_SwapNodesInPairs.cpp) ||O(1)||
|  4  |Partition A Linked List Around A Given Value|[GFG](https://practice.geeksforgeeks.org/problems/partition-a-linked-list-around-a-given-value/1/#) |[Java](./Linked-List/Partition.java) [CPP](./Linked-List/GFG_PartitionLL.cpp) |Medium|O(1)||
|  5  |Sorted Insert For Circular Linked List|[GFG](https://practice.geeksforgeeks.org/problems/sorted-insert-for-circular-linked-list/1) |[Java](./Linked-List/SortedInsertForCircularLinkedList.java) |Easy|O(n)||
|  6  |Sort A Linked List|[GFG](https://practice.geeksforgeeks.org/problems/sort-a-linked-list/1) |[Java](./Linked-List/MergeSort.java) |Medium|O(n)||
|  7  |Remove Loop In Linked List|[GFG](https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1) |[Java](./Linked-List/RemoveCycle.java) [CPP](./Linked-List/GFG_RemoveLoopLL.cpp) |Medium|O(1)||
|  8  |Middle Of The Linked List|[LC](https://leetcode.com/problems/middle-of-the-linked-list/) |[Java](./Linked-List/FindMiddleNode.java) [CPP](./Linked-List/LC_876_MiddleOfTheLinkedList.cpp) ||O(n)||
|  9  |Delete N Nodes After M Nodes Of A Linked List|[GFG](https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1) |[Java](./Linked-List/LinkDelete.java) [CPP](./Linked-List/GFG_DeleteNnodesAfterMnodes.cpp) |Easy|O(1)||
|  10  |Add 1 To A Number Represented As Linked List|[GFG](https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1/) |[Java](./Linked-List/AddOne.java) |Easy|O(1)||
|  11  |Rotate List|[LC](https://leetcode.com/problems/rotate-list/) |[CPP](./Linked-List/LC_61_RotateList.cpp) ||O(n)||
|  12  |Remove Duplicates From Sorted List Ii|[LC](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/) |[Java](./Linked-List/RemoveDuplicates2.java) ||O(n)||
|  13  |Segregate Even And Odd Nodes In A Linked List5035|[GFG](https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1) |[Java](./Linked-List/SegregateOddEvenNumbers.java) [CPP](./Linked-List/GFG_SegregateEvenOddNodes.cpp) |Easy|O(1)||
|  14  |Linked List Cycle|[LC](https://leetcode.com/problems/linked-list-cycle/) |[Java](./Linked-List/DetectCycle.java) [CPP](./Linked-List/LC_141_DetectCycle.cpp) ||O(n)||
|  15  |Quick Sort On Linked List|[GFG](https://practice.geeksforgeeks.org/problems/quick-sort-on-linked-list/1) |[Java](./Linked-List/QuickSort.java) |Medium|O(n)||
|  16  |Given A Linked List Of 0s 1s And 2s Sort It|[GFG](https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1) |[Java](./Linked-List/ZeroOneTwo.java) |Easy|O(n)||
|  17  |Circular Linked List|[GFG](https://practice.geeksforgeeks.org/problems/circular-linked-list/1) |[Java](./Linked-List/CheckIfCircularLinkedList.java) [CPP](./Linked-List/GFG_LinkedL_CheckCircularLinkedList.cpp) |Basic|O(n)||
|  18  |Deletion And Reverse In Linked List|[GFG](https://practice.geeksforgeeks.org/problems/deletion-and-reverse-in-linked-list/1) |[Java](./Linked-List/DeleteAndReverseCircular.java) |Easy|O(n)||
|  19  |Intersection Of Two Linked List|[GFG](https://practice.geeksforgeeks.org/problems/intersection-of-two-linked-list/1) |[Java](./Linked-List/IntersectionOfLists.java) |Easy|O(n)||
|  20  |Polynomial Addition|[GFG](https://practice.geeksforgeeks.org/problems/polynomial-addition/1) |[Java](./Linked-List/PolynomialAddition.java) |Medium|O(n)||
|  21  |Nth Node From End Of Linked List|[GFG](https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1/#) [LC](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) |[Java](./Linked-List/NthNodeFromEnd.java) [CPP](./Linked-List/LC_19_RemoveNthNodeFromEndOfList.cpp) |Easy|O(1)||
|  22  |Reverse A Doubly Linked List|[GFG](https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1) |[Java](./Linked-List/ReverseDoublyLinkedList.java) |Easy|O(n<sup>2</sup>)||
|  23  |Length Of Longest Palindrome In Linked List|[GFG](https://practice.geeksforgeeks.org/problems/length-of-longest-palindrome-in-linked-list/1/) |[Java](./Linked-List/LongestPalindromeInLinkedList.java) |Medium|O(n)||
|  24  |Merge Sort On Doubly Linked List|[GFG](https://practice.geeksforgeeks.org/problems/merge-sort-on-doubly-linked-list/1) |[Java](./Linked-List/MergeSortDoubly.java) |Medium|O(n)||
|  25  |Given A Linked List Reverse Alternate Nodes And Append At The End|[GFG](https://practice.geeksforgeeks.org/problems/given-a-linked-list-reverse-alternate-nodes-and-append-at-the-end/) |[Java](./Linked-List/ReverseAlternateNodes.java) |null|O(n)||
|  26  |Check If Linked List Is Pallindrome|[GFG](https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1) |[Java](./Linked-List/CheckPalindrome.java) |Easy|O(n)||
|  27  |Remove Linked List Elements|[LC](https://leetcode.com/problems/remove-linked-list-elements/) |[Java](./Linked-List/RemoveLinkedListElements.java) [CPP](./Linked-List/LC_203_LinkedL_RemoveLinedListElements.cpp) ||O(1)||
|  28  |Merge Two Sorted Lists|[LC](https://leetcode.com/problems/merge-two-sorted-lists/submissions/) |[Java](./Linked-List/MergeTwoSortedLists.java) ||O(n)||
|  29  |Multiply Two Linked Lists|[GFG](https://practice.geeksforgeeks.org/problems/multiply-two-linked-lists/1) |[Java](./Linked-List/MultiplyLists.java) |Easy|O(n)||
|  30  |Delete Middle Of Linked List|[GFG](https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1) |[Java](./Linked-List/DeleteMiddleNode.java) [CPP](./Linked-List/GFG_DeleteMiddleLinkedList.cpp) |Easy|O(n)||
|  31  |Add Two Numbers|[LC](https://leetcode.com/problems/add-two-numbers/) |[Java](./Linked-List/AddLists.java) ||O(n)||
|  32  |Add Two Numbers Ii|[LC](https://leetcode.com/problems/add-two-numbers-ii/) [GFG](https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1) |[Java](./Linked-List/AddLists2.java) |Easy|O(n)||
|  33  |Odd Even Linked List|[LC](https://leetcode.com/problems/odd-even-linked-list/) |[Java](./Linked-List/OddEven.java) [CPP](./Linked-List/LC_328_OddEvenLL.cpp) ||O(1)||
|  34  |Delete Nodes Having Greater Value On Right|[GFG](https://practice.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1) |[Java](./Linked-List/FindLeaders.java) |Medium|O(1)||
|  35  |Convert Binary Number In A Linked List To Integer|[LC](https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/) |[Java](./Linked-List/ConvertToDecimal.java) ||O(1)||
|  36  |Flattening A Linked List|[GFG](https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1) [LC](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/) |[Java](./Linked-List/FlattenLinkedList.java) |Medium|O(n)||
|  37  |Implement Stack Using Queues|[LC](https://leetcode.com/problems/implement-stack-using-queues/) |[CPP](./Linked-List/LC_225_StackUsingQueue.cpp) ||O(1)||
|  38  |Reverse Nodes In K Group|[LC](https://leetcode.com/problems/reverse-nodes-in-k-group/) |[Java](./Linked-List/ReverseInGroups.java) [CPP](./Linked-List/LC_25_ReverseNodesInKGroup.cpp) ||O(1)||
|  39  |Split A Circular Linked List Into Two Halves|[GFG](https://practice.geeksforgeeks.org/problems/split-a-circular-linked-list-into-two-halves/1) |[Java](./Linked-List/DivideCircularList.java) |Easy|O(n)||
|  40  |Reverse Linked List Ii|[LC](https://leetcode.com/problems/reverse-linked-list-ii/) |[Java](./Linked-List/ReverseLinkedList2.java) ||O(n)||
|  41  |Reverse A Linked List In Groups Of Given Size|[GFG](https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1) |[CPP](./Linked-List/GFG_ReverseLLinGroupsOfGivenSize.cpp) |Medium|O(1)||
|  42  |Remove Duplicates From Sorted List|[LC](https://leetcode.com/problems/remove-duplicates-from-sorted-list/) |[Java](./Linked-List/RemoveDuplicates.java) ||O(n)||
|  43  |Merge 2 Sorted Linked List In Reverse Order|[GFG](https://practice.geeksforgeeks.org/problems/merge-2-sorted-linked-list-in-reverse-order/1) |[Java](./Linked-List/ReverseMerging.java) |Easy|O(n)||
|  44  |Clone A Linked List With Next And Random Pointer|[GFG](https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1) |[Java](./Linked-List/CloneList.java) |Hard|O(n)||
|  45  |Reverse Linked List|[LC](https://leetcode.com/problems/reverse-linked-list/) |[Java](./Linked-List/ReverseList.java) [CPP](./Linked-List/LC_206_LinkedL_ReverseLinkedList.cpp) ||O(1)||
|  46  |Linked List Of Strings Forms A Palindrome|[GFG](https://practice.geeksforgeeks.org/problems/linked-list-of-strings-forms-a-palindrome/1) |[Java](./Linked-List/CombinedStringPalindrome.java) |Easy|O(n)||
|  47  |Linked List Cycle Ii|[LC](https://leetcode.com/problems/linked-list-cycle-ii/) |[Java](./Linked-List/LocateCycle.java) [CPP](./Linked-List/LC_142_LLCyle2.cpp) ||O(1)||
|  48  |Partition List|[LC](https://leetcode.com/problems/partition-list/) |[Java](./Linked-List/PartitionList.java) ||O(n)||
## Matrix

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Search A 2d Matrix|[LC](https://leetcode.com/problems/search-a-2d-matrix/) |[Java](./Matrix/SearchMatrix.java) [CPP](./Matrix/LC_74_Search2DMatrix.cpp) ||O(1)||
|  2  |Prettyprint|[IB](https://www.interviewbit.com/problems/prettyprint/) |[Java](./Matrix/PrettyPrint.java) ||O(n<sup>2</sup>)||
|  3  |Transpose Matrix|[LC](https://leetcode.com/problems/transpose-matrix/) |[Java](./Matrix/Transpose.java) [CPP](./Matrix/LC_867_TransposeMatrix.cpp) ||O(1)||
|  4  |Spiral Matrix Ii|[LC](https://leetcode.com/problems/spiral-matrix-ii/) |[Java](./Matrix/SpiralStorage.java) ||O(n<sup>2</sup>)||
|  5  |Set Matrix Zeroes|[LC](https://leetcode.com/problems/set-matrix-zeroes/) |[Java](./Matrix/FillMatrixWithZero.java) ||O(n<sup>2</sup>)||
|  6  |Valid Sudoku|[LC](https://leetcode.com/problems/valid-sudoku/) |[Java](./Matrix/IsValidSudoku.java) ||O(n<sup>2</sup>)||
|  7  |Find Nth Element Of Spiral Matrix|[GFG](https://practice.geeksforgeeks.org/problems/find-nth-element-of-spiral-matrix/1) |[Java](./Matrix/NthSpiralElement.java) |Medium|O(n<sup>2</sup>)||
|  8  |Max Rectangle|[GFG](https://practice.geeksforgeeks.org/problems/max-rectangle/1/) |[Java](./Matrix/LargestRectangle.java) |Medium|O(n<sup>2</sup>)||
|  9  |Row With Minimum Number Of 1s5430|[GFG](https://practice.geeksforgeeks.org/problems/row-with-minimum-number-of-1s5430/1) |[Java](./Matrix/RowWithMinimumOnes.java) |Easy|O(n)||
|  10  |Largest Zigzag Sequence5416|[GFG](https://practice.geeksforgeeks.org/problems/largest-zigzag-sequence5416/1) |[Java](./Matrix/LargestZigzagSum.java) |Easy|O(n<sup>3</sup>)||
|  11  |Row With Max 1s0023|[GFG](https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1) |[Java](./Matrix/MaximumOnes.java) |Medium|O(n<sup>2</sup>)||
|  12  |Diagonal Morning Assembly0028|[GFG](https://practice.geeksforgeeks.org/problems/diagonal-morning-assembly0028/1/) |[Java](./Matrix/SortDiagonally.java) |Medium|O(n<sup>2</sup>)||
|  13  |Boundary Elements Of Matrix1102|[GFG](https://practice.geeksforgeeks.org/problems/boundary-elements-of-matrix1102/1) |[Java](./Matrix/BoundaryElements.java) [CPP](./Matrix/GFG_BoundaryTraversal.cpp) |Easy|O(n)||
|  14  |Spirally Traversing A Matrix 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1) [LC](https://leetcode.com/problems/spiral-matrix/) |[Java](./Matrix/SpiralTraversal.java) |Medium|O(n)||
|  15  |Rank Of Matrix|[GFG](https://practice.geeksforgeeks.org/problems/rank-of-matrix/0) |[Java](./Matrix/RankOfAMatrix.java) |Medium|O(n<sup>2</sup>)||
|  16  |Flood Fill|[LC](https://leetcode.com/problems/flood-fill/) |[CPP](./Matrix/LC_733_Mat_FloodFill.cpp) ||O(1)||
|  17  |Print Diagonally1623|[GFG](https://practice.geeksforgeeks.org/problems/print-diagonally1623/1) |[Java](./Matrix/AntiDiagonalTraversal.java) |Medium|O(n<sup>2</sup>)||
|  18  |Rotate Image|[LC](https://leetcode.com/problems/rotate-image/) |[Java](./Matrix/RotateImage.java) [CPP](./Matrix/LC_48_RotateImage.cpp) ||O(1)||
|  19  |Spiral Matrix|[LC](https://leetcode.com/problems/spiral-matrix/) |[CPP](./Matrix/LC_54_Spiral.cpp) ||O(1)||
|  20  |Search In A Matrix 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1#) [LC](https://leetcode.com/problems/search-a-2d-matrix-ii/) |[Java](./Matrix/SearchMatrix2.java) [CPP](./Matrix/LC_74_Search2DMatrix-2.cpp) |Medium|O(1)||
|  21  |Count Servers That Communicate|[LC](https://leetcode.com/problems/count-servers-that-communicate/) |[Java](./Matrix/CountServers.java) ||O(n<sup>2</sup>)||
|  22  |Boolean Matrix Problem 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/boolean-matrix-problem-1587115620/1) |[Java](./Matrix/BooleanMatrixFlooding.java) |Medium|O(n<sup>2</sup>)||
|  23  |Kth Element In Matrix|[GFG](https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1) |[Java](./Matrix/kthSmallestElement.java) |Medium|O(n)||
|  24  |Game Of Life|[LC](https://leetcode.com/problems/game-of-life/) |[Java](./Matrix/LifeGame.java) ||O(n<sup>2</sup>)||
## Miscellaneous

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Insert Delete Getrandom O1|[LC](https://leetcode.com/problems/insert-delete-getrandom-o1/) |[Java](./Miscellaneous/InsertDeleteRandom.java) ||O(n)||
|  2  |Minimum Depth Of Binary Tree|[LC](https://leetcode.com/problems/minimum-depth-of-binary-tree/) |[Java](./Miscellaneous/MinDepth.java) ||O(1)||
|  3  |Replace By X|[GFG](https://practice.geeksforgeeks.org/problems/replace-by-x/0) |[Java](./Miscellaneous/ReplaceByX.java) |Easy|O(n)||
|  4  |Smallest Factorial Number5929|[GFG](https://practice.geeksforgeeks.org/problems/smallest-factorial-number5929/1) |[Java](./Miscellaneous/SmallestFactorialNumber.java) [CPP](./Miscellaneous/GFG_Misc_SmallestFactorialNum.cpp) |Easy|O(1)||
|  5  |Binary Search|[GFG](https://practice.geeksforgeeks.org/problems/binary-search/1) |[Java](./Miscellaneous/EatBananasInKHours.java) |Basic|O(n)||
|  6  |Print Pattern3549|[GFG](https://practice.geeksforgeeks.org/problems/print-pattern3549/1) |[Java](./Miscellaneous/PrintPattern.java) |Easy|O(1)||
|  7  |You And Your Books|[GFG](https://practice.geeksforgeeks.org/problems/you-and-your-books/1) |[Java](./Miscellaneous/YourBooks.java) |Easy|O(n)||
|  8  |Longest Subarray With Atmost K Even Elements|[GFG](https://practice.geeksforgeeks.org/problems/longest-subarray-with-atmost-k-even-elements/0) |[Java](./Miscellaneous/LongestSubarrayWithAtMostKEvenElements.java) |Easy|O(n<sup>2</sup>)||
|  9  |Design Underground System|[LC](https://leetcode.com/problems/design-underground-system/) |[Java](./Miscellaneous/UnderGroundSystemDesign.java) ||O(n)||
|  10  |K Subarray Sum|[GFG](https://practice.geeksforgeeks.org/problems/k-subarray-sum/0) |[Java](./Miscellaneous/KSubArraySum.java) |Easy|O(n<sup>2</sup>)||
|  11  |Binary Searchable Elements|[GFG](https://practice.geeksforgeeks.org/problems/binary-searchable-elements/1) |[Java](./Miscellaneous/BinarySearchableElements.java) |Medium|O(n)||
|  12  |Sum Of Two Numbers Without Using Arithmetic Operators|[GFG](https://practice.geeksforgeeks.org/problems/sum-of-two-numbers-without-using-arithmetic-operators/1/#) |[CPP](./Miscellaneous/GFG_Misc_SumWithoutArithmeticOperators.cpp) |Easy|O(1)||
|  13  |Minimum Operations To Reduce X To Zero|[LC](https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/) |[Java](./Miscellaneous/MinOpsToReduceXToZero.java) ||O(n<sup>2</sup>)||
|  14  |Substring With Concatenation Of All Words|[LC](https://leetcode.com/problems/substring-with-concatenation-of-all-words/) |[Java](./Miscellaneous/SubstringWithConcatenationOfAllWords.java) ||O(n<sup>2</sup>)||
|  15  |Get Watched Videos By Your Friends|[LC](https://leetcode.com/problems/get-watched-videos-by-your-friends/) |[Java](./Miscellaneous/GetWatchedVideosByYourFriends.java) ||O(n<sup>3</sup>)||
|  16  |Sum Of Square Numbers|[LC](https://leetcode.com/problems/sum-of-square-numbers/) |[Java](./Miscellaneous/SumOfSquareNumbers.java) ||O(n<sup>2</sup>)||
|  17  |Shortest Subarray To Be Removed To Make Array Sorted|[LC](https://leetcode.com/problems/shortest-subarray-to-be-removed-to-make-array-sorted/submissions/) |[Java](./Miscellaneous/RemoveShortesSubarray.java) ||O(n)||
|  18  |Basic Calculator|[LC](https://leetcode.com/problems/basic-calculator/) |[Java](./Miscellaneous/BasicCalculator.java) ||O(n<sup>2</sup>)||
|  19  |Zigzag Conversion|[LC](https://leetcode.com/problems/zigzag-conversion/) |[Java](./Miscellaneous/ZigzagConversion.java) ||O(n<sup>2</sup>)||
|  20  |Sorting Elements Of An Array By Frequency 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency-1587115621/1) |[Java](./Miscellaneous/SortByFrequency.java) |Medium|O(n<sup>2</sup>)||
|  21  |Geek And Bridges|[GFG](https://practice.geeksforgeeks.org/problems/geek-and-bridges/0) |[Java](./Miscellaneous/GeekAndBridges.java) |Easy|O(n<sup>3</sup>)||
|  22  |Geek Onacci Number|[GFG](https://practice.geeksforgeeks.org/problems/geek-onacci-number/0) |[Java](./Miscellaneous/GeekONacciNumber.java) |Easy|O(n<sup>2</sup>)||
|  23  |Letter Combinations Of A Phone Number|[LC](https://leetcode.com/problems/letter-combinations-of-a-phone-number/) |[Java](./Miscellaneous/LetterCombinations.java) ||O(n)||
|  24  |Basic Calculator Ii|[LC](https://leetcode.com/problems/basic-calculator-ii/) |[Java](./Miscellaneous/BasicCalculator2.java) ||O(n<sup>2</sup>)||
|  25  |Unique Morse Code Words|[LC](https://leetcode.com/problems/unique-morse-code-words/) |[Java](./Miscellaneous/MorseCodeParsing.java) ||O(n<sup>2</sup>)||
|  26  |Cosmic Number|[GFG](https://practice.geeksforgeeks.org/problems/cosmic-number/0) |[Java](./Miscellaneous/CosmicNumber.java) |Easy|O(n<sup>2</sup>)||
|  27  |Reach The Target|[GFG](https://practice.geeksforgeeks.org/problems/reach-the-target/0) |[Java](./Miscellaneous/ReachTheTarget.java) |Easy|O(n)||
|  28  |Array Of Doubled Pairs|[LC](https://leetcode.com/problems/array-of-doubled-pairs/) |[Java](./Miscellaneous/ArrayOfDoubledPairs.java) ||O(n)||
|  29  |Integer To English Words|[LC](https://leetcode.com/problems/integer-to-english-words/) |[Java](./Miscellaneous/IntegerToEnglishWords.java) ||O(n)||
## Queue

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Validate Binary Search Tree|[LC](https://leetcode.com/problems/validate-binary-search-tree/) |[CPP](./Queue/LC_98_ValidateBST.cpp) ||O(1)||
|  2  |Level Order Traversal|[GFG](https://practice.geeksforgeeks.org/problems/level-order-traversal/1/#) [LC](https://leetcode.com/problems/binary-tree-level-order-traversal/) |[CPP](./Queue/LC_102_BinaryTreeLevelOrderTraversal.cpp) |Easy|O(1)||
|  3  |N Ary Tree Level Order Traversal|[LC](https://leetcode.com/problems/n-ary-tree-level-order-traversal/) |[CPP](./Queue/LC_429_NaryTreeLevelOrderTraversal.cpp) ||O(1)||
|  4  |Maximum Of All Subarrays Of Size K3101|[GFG](https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1) |[Java](./Queue/MaximumOfAllSubarrays.java) |Medium|O(n)||
|  5  |Sliding Window Maximum|[LC](https://leetcode.com/problems/sliding-window-maximum/) |[Java](./Queue/SlidingWindowMaximum.java) ||O(n<sup>2</sup>)||
|  6  |Page Faults In Lru5603|[GFG](https://practice.geeksforgeeks.org/problems/page-faults-in-lru5603/1) [LC](https://leetcode.com/problems/lru-cache/) |[Java](./Queue/LRUCache.java) |Medium|O(n)||
|  7  |Implement Queue Using Stacks|[LC](https://leetcode.com/problems/implement-queue-using-stacks/) |[Java](./Queue/QueueUsingStack.java) [CPP](./Queue/GFG_ImplQueueUsingStack.cpp) ||O(1)||
|  8  |Height Of Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1/#) [LC](https://leetcode.com/problems/maximum-depth-of-binary-tree/) |[CPP](./Queue/LC_104_MaxDepthBinTree.cpp) |Medium|O(1)||
|  9  |Circular Tour 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/circular-tour-1587115620/1) |[Java](./Queue/CircularTour.java) |Medium|O(n)||
|  10  |Binary Tree Zigzag Level Order Traversal|[LC](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/) |[CPP](./Queue/LC_103_BinaryTreeZigZagLevelOrderTraversal.cpp) ||O(1)||
## Recursion

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Letter Case Permutation|[LC](https://leetcode.com/problems/letter-case-permutation/) |[Java](./Recursion/LetterCasePermutations.java) ||O(1)||
|  2  |Pascals Triangle Ii|[LC](https://leetcode.com/problems/pascals-triangle-ii/) |[Java](./Recursion/PascalsTriangle2.java) ||O(n)||
|  3  |Restore Ip Addresses|[LC](https://leetcode.com/problems/restore-ip-addresses/) [GFG](https://practice.geeksforgeeks.org/problems/generate-ip-addresses/1) |[Java](./Recursion/RestoreIPAddresses.java) |Medium|O(n)||
|  4  |Tower Of Hanoi 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1) |[Java](./Recursion/TOH.java) |Medium|O(1)||
|  5  |Flood Fill Algorithm1856|[GFG](https://practice.geeksforgeeks.org/problems/flood-fill-algorithm1856/1) |[Java](./Recursion/FloodFill.java) |Medium|O(1)||
|  6  |Josephus Problem|[GFG](https://practice.geeksforgeeks.org/problems/josephus-problem/1) |[Java](./Recursion/Josephus.java) |Easy|O(1)||
|  7  |Combinations|[LC](https://leetcode.com/problems/combinations/) |[Java](./Recursion/Combinations.java) ||O(n)||
|  8  |Flood Fill|[LC](https://leetcode.com/problems/flood-fill/) |[CPP](./Recursion/LC_733_FloodFill.cpp) ||O(1)||
|  9  |Subsets 1613027340|[GFG](https://practice.geeksforgeeks.org/problems/subsets-1613027340/1) [LC](https://leetcode.com/problems/subsets/) |[Java](./Recursion/Subsets.java) |Medium|O(n)||
|  10  |Palindrome String0817|[GFG](https://practice.geeksforgeeks.org/problems/palindrome-string0817/1) |[Java](./Recursion/PalindromeString.java) [CPP](./Recursion/GFG_STR_PalindromeString.cpp) |Easy|O(1)||
|  11  |Number Of Paths0926|[GFG](https://practice.geeksforgeeks.org/problems/number-of-paths0926/1) |[Java](./Recursion/NumberOfPaths.java) |Easy|O(1)||
|  12  |Gray Code|[LC](https://leetcode.com/problems/gray-code/) |[Java](./Recursion/generateGrayCode.java) ||O(n)||
|  13  |Pascals Triangle|[LC](https://leetcode.com/problems/pascals-triangle/) |[Java](./Recursion/PascalsTriangle.java) ||O(n)||
## Searching

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Find Missing And Repeating2512|[GFG](https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1) |[Java](./Searching/FindRepeatingMissing.java) |Medium|O(n)||
|  2  |Find Pair Given Difference1559|[GFG](https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1) |[Java](./Searching/FindPairWithGivenDifference.java) |Easy|O(n)||
|  3  |K Diff Pairs In An Array|[LC](https://leetcode.com/problems/k-diff-pairs-in-an-array/) |[Java](./Searching/CountKDiffUniquePairs.java) ||O(n)||
|  4  |Triplet Sum In Array 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1) |[Java](./Searching/TripletWithGivenSum.java) [CPP](./Searching/GFG_TripletSum.cpp) |Medium|O(1)||
|  5  |3sum Closest|[LC](https://leetcode.com/problems/3sum-closest/) |[Java](./Searching/TripletWithSumClosestToGivenSum.java) ||O(n<sup>2</sup>)||
|  6  |Binary Search|[GFG](https://practice.geeksforgeeks.org/problems/binary-search/1#) |[CPP](./Searching/GFG_BinarySearch.cpp) |Basic|O(1)||
|  7  |4sum|[LC](https://leetcode.com/problems/4sum/) |[Java](./Searching/CountQuadrupletsWithGivenSum.java) ||O(n<sup>4</sup>)||
|  8  |Find First And Last Position Of Element In Sorted Array|[LC](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) |[Java](./Searching/FirstAndLastPositions.java) [CPP](./Searching/LC_34_FindFirstLastPositionElement.cpp) ||O(1)||
|  9  |Triplets With Sum With Given Range|[GFG](https://practice.geeksforgeeks.org/problems/triplets-with-sum-with-given-range/1/) |[Java](./Searching/CountTripletsWithSumInRange.java) |Medium|O(n<sup>2</sup>)||
|  10  |Four Elements2452|[GFG](https://practice.geeksforgeeks.org/problems/four-elements2452/1) |[Java](./Searching/QuadrupletsWithGivenSum.java) |Easy|O(n<sup>3</sup>)||
|  11  |Arithmetic Number2815|[GFG](https://practice.geeksforgeeks.org/problems/arithmetic-number2815/1) |[Java](./Searching/FindPresenceInAP.java) |Easy|O(1)||
|  12  |Count The Zeros2550|[GFG](https://practice.geeksforgeeks.org/problems/count-the-zeros2550/1) |[CPP](./Searching/GFG_Count_NumOfOnes.cpp) |Easy|O(1)||
|  13  |Pair With Given Sum In A Sorted Array4940|[GFG](https://practice.geeksforgeeks.org/problems/pair-with-given-sum-in-a-sorted-array4940/1) |[Java](./Searching/CountPairSumInSortedArray.java) |Easy|O(n)||
|  14  |Find K Closest Elements|[LC](https://leetcode.com/problems/find-k-closest-elements/) |[Java](./Searching/FindKClosestElements.java) ||O(n)||
|  15  |3d27d4683c121c1f152ee8f41279255dc4430cf6|[GFG](https://practice.geeksforgeeks.org/problems/3d27d4683c121c1f152ee8f41279255dc4430cf6/1/) |[Java](./Searching/TernarySearch.java) |Medium|O(n<sup>2</sup>)||
|  16  |Square Root|[GFG](https://practice.geeksforgeeks.org/problems/square-root/1/) [LC](https://leetcode.com/problems/sqrtx/) |[Java](./Searching/FindSquareRoot.java) [CPP](./Searching/LC_64_Sqrt_GFG_Sqrt.cpp) |Medium|O(1)||
|  17  |Count Triplets With Sum Smaller Than X5549|[GFG](https://practice.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1) |[Java](./Searching/CountTripletsWithSumSmallerThanX.java) |Medium|O(n<sup>2</sup>)||
|  18  |Two Sum|[LC](https://leetcode.com/problems/two-sum/) |[Java](./Searching/PairWithSum.java) [CPP](./Searching/LC_1_TwoSum.cpp) ||O(1)||
|  19  |3sum|[LC](https://leetcode.com/problems/3sum/) |[Java](./Searching/FindTripletsWithGivenSum.java) ||O(n<sup>3</sup>)||
|  20  |Guess Number Higher Or Lower|[LC](https://leetcode.com/problems/guess-number-higher-or-lower/) |[Java](./Searching/GuessHigherLower.java) ||O(n)||
|  21  |Two Sum Ii Input Array Is Sorted|[LC](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) |[Java](./Searching/PairWithSumInSortedArray.java) [CPP](./Searching/LC_167_TwoSumII.cpp) ||O(1)||
|  22  |First Bad Version|[LC](https://leetcode.com/problems/first-bad-version/) |[Java](./Searching/FirstBadVersion.java) ||O(n)||
|  23  |Search Insert Position Of K In A Sorted Array|[GFG](https://practice.geeksforgeeks.org/problems/search-insert-position-of-k-in-a-sorted-array/1/) |[Java](./Searching/SearchInsertPosition.java) |Easy|O(1)||
|  24  |Kth Smallest Number In Multiplication Table|[LC](https://leetcode.com/problems/kth-smallest-number-in-multiplication-table/) |[Java](./Searching/KthSmallestInMultiplicationTable.java) ||O(n)||
|  25  |Count Possible Triangles 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/count-possible-triangles-1587115620/1/) |[Java](./Searching/CountTriangles.java) |Medium|O(n<sup>3</sup>)||
|  26  |Search In Rotated Sorted Array|[LC](https://leetcode.com/problems/search-in-rotated-sorted-array/) |[Java](./Searching/SortedRotatedArraySearch.java) [CPP](./Searching/LC_33_SearchRotatedSortedArray.cpp) ||O(n)||
## Segment-Tree

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
## Sorting

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Heap Sort|[GFG](https://practice.geeksforgeeks.org/problems/heap-sort/1) |[Java](./Sorting/HeapSort.java) [CPP](./Sorting/GFG_HeapSort.cpp) |Medium|O(1)||
|  2  |Bubble Sort|[GFG](https://practice.geeksforgeeks.org/problems/bubble-sort/1) |[Java](./Sorting/BubbleSort.java) [CPP](./Sorting/GFG_BubbleSort.cpp) |Easy|O(n<sup>2</sup>)||
|  3  |Quick Sort|[GFG](https://practice.geeksforgeeks.org/problems/quick-sort/1) |[Java](./Sorting/QuickSort.java) [CPP](./Sorting/GFG_QuickSort.cpp) |Medium|O(1)||
|  4  |Selection Sort|[GFG](https://practice.geeksforgeeks.org/problems/selection-sort/1#) |[Java](./Sorting/SelectionSort.java) [CPP](./Sorting/GFG_SelectionSort.cpp) |Easy|O(n)||
|  5  |Merge Sort|[GFG](https://practice.geeksforgeeks.org/problems/merge-sort/1) |[Java](./Sorting/MergeSort.java) [CPP](./Sorting/GFG_MergeSort.cpp) |Medium|O(1)||
|  6  |Arithmetic Subarrays|[LC](https://leetcode.com/problems/arithmetic-subarrays/) |[Java](./Sorting/ArithmeticSubArrays.java) ||O(n<sup>3</sup>)||
|  7  |Insertion Sort|[GFG](https://practice.geeksforgeeks.org/problems/insertion-sort/1#) |[Java](./Sorting/InsertionSort.java) [CPP](./Sorting/GFG_InsertionSort.cpp) |Easy|O(1)||
|  8  |Nearly Sorted Algorithm|[GFG](https://practice.geeksforgeeks.org/problems/nearly-sorted-algorithm/0) |[Java](./Sorting/NearlySortedAlgorithm.java) |Medium|O(n<sup>2</sup>)||
|  9  |Counting Sort|[GFG](https://practice.geeksforgeeks.org/problems/counting-sort/1) |[Java](./Sorting/CountingSort.java) [CPP](./Sorting/GFG_CountingSort.cpp) |Easy|O(n<sup>2</sup>)||
## Stack

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Largest Rectangle In Histogram|[LC](https://leetcode.com/problems/largest-rectangle-in-histogram/) [GFG](https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1) |[Java](./Stack/LargestRectangleInHistogram.java) |Medium|O(n)||
|  2  |Longest Valid Parentheses|[LC](https://leetcode.com/problems/longest-valid-parentheses/) |[Java](./Stack/ValidParenthesesSubstring.java) ||O(n)||
|  3  |Decode The String2444|[GFG](https://practice.geeksforgeeks.org/problems/decode-the-string2444/1) |[Java](./Stack/DecodeString.java) |Easy|O(n)||
|  4  |Implement Two Stacks In An Array|[GFG](https://practice.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1) |[Java](./Stack/TwoStacksInOneArray.java) |Easy|O(n)||
|  5  |Implement Stack Using Linked List|[GFG](https://practice.geeksforgeeks.org/problems/implement-stack-using-linked-list/1) |[CPP](./Stack/StackUsingLinkListImplementation.cpp) |Basic|O(1)||
|  6  |Implement Stack Using Array|[GFG](https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1) |[CPP](./Stack/StackUsingArrayImplementation.cpp) |Basic|O(1)||
|  7  |Min Stack|[LC](https://leetcode.com/problems/min-stack/) [GFG](https://practice.geeksforgeeks.org/problems/special-stack/1) |[Java](./Stack/StackWithFindMin.java) |Easy|O(n)||
|  8  |Design A Stack With Increment Operation|[LC](https://leetcode.com/problems/design-a-stack-with-increment-operation/) |[Java](./Stack/StackWithIncrementOperation.java) ||O(n<sup>2</sup>)||
|  9  |Simplify Path|[LC](https://leetcode.com/problems/simplify-path/) |[Java](./Stack/ParsePath.java) ||O(n)||
|  10  |Implement Stack Using Queues|[LC](https://leetcode.com/problems/implement-stack-using-queues/) |[Java](./Stack/StackUsingQueue.java) ||O(n)||
|  11  |Next Greater Element I|[LC](https://leetcode.com/problems/next-greater-element-i/) |[Java](./Stack/NextGreaterElement.java) [CPP](./Stack/LC_469_NextGreaterEle1.cpp) ||O(1)||
|  12  |Evaluation Of Postfix Expression1735|[GFG](https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1) [LC](https://leetcode.com/problems/evaluate-reverse-polish-notation/) |[Java](./Stack/PostfixEvaluation.java) |Easy|O(n)||
|  13  |The Celebrity Problem|[GFG](https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1) |[Java](./Stack/CelebrityProblem.java) |Medium|O(n<sup>2</sup>)||
|  14  |Valid Parentheses|[LC](https://leetcode.com/problems/valid-parentheses/) |[Java](./Stack/ValidParentheses.java) [CPP](./Stack/LC_20_ValidParentheses.cpp) ||O(1)||
|  15  |Maximum Of Minimum For Every Window Size3453|[GFG](https://practice.geeksforgeeks.org/problems/maximum-of-minimum-for-every-window-size3453/1#) |[Java](./Stack/MaxOfMins.java) |Hard|O(n<sup>2</sup>)||
|  16  |Daily Temperatures|[LC](https://leetcode.com/problems/daily-temperatures/) |[Java](./Stack/DailyTemperatures.java) ||O(n<sup>2</sup>)||
|  17  |Stock Span Problem 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1#) |[Java](./Stack/StockSpanProblem.java) [CPP](./Stack/GFG_StockSpanP.cpp) |Medium|O(n<sup>2</sup>)||
|  18  |Next Greater Element Ii|[LC](https://leetcode.com/problems/next-greater-element-ii/) |[Java](./Stack/NextGreaterElementCircular.java) ||O(n<sup>2</sup>)||
|  19  |Evaluate Reverse Polish Notation|[LC](https://leetcode.com/problems/evaluate-reverse-polish-notation/) |[CPP](./Stack/GFG_LC_EvaluationOfPostFix.cpp) ||O(1)||
|  20  |Online Stock Span|[LC](https://leetcode.com/problems/online-stock-span/) |[Java](./Stack/OnlineStockSpanProblem.java) ||O(n)||
|  21  |Sort A Stack|[GFG](https://practice.geeksforgeeks.org/problems/sort-a-stack/1) |[Java](./Stack/SortStack.java) |Easy|O(n<sup>2</sup>)||
|  22  |Infix To Postfix 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1#) |[Java](./Stack/InfixToPostfix.java) [CPP](./Stack/GFG_InfxToPostFix.cpp) |Easy|O(1)||
## Strings

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Uncommon Words From Two Sentences|[LC](https://leetcode.com/problems/uncommon-words-from-two-sentences/) |[CPP](./Strings/LC_884_STR_UncommonWordsFromTwoSentences.cpp) ||O(1)||
|  2  |Permutation In String|[LC](https://leetcode.com/problems/permutation-in-string/) |[Java](./Strings/PermutationInStrings.java) ||O(n)||
|  3  |Smallest Window In A String Containing All The Characters Of Another String 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/smallest-window-in-a-string-containing-all-the-characters-of-another-string-1587115621/1) [LC](https://leetcode.com/problems/minimum-window-substring/) |[Java](./Strings/MinimumWindowSubstring.java) |Medium|O(n<sup>2</sup>)||
|  4  |Valid Anagram|[LC](https://leetcode.com/problems/valid-anagram/) |[Java](./Strings/AnagramCheck.java) [CPP](./Strings/LC_242_ValidAnagram.cpp) ||O(n)||
|  5  |Longest Palindrome|[LC](https://leetcode.com/problems/longest-palindrome/) |[Java](./Strings/LongestPalindrome.java) ||O(n)||
|  6  |Text Justification|[LC](https://leetcode.com/problems/text-justification/) |[Java](./Strings/TextJustification.java) ||O(n<sup>3</sup>)||
|  7  |Valid Palindrome|[LC](https://leetcode.com/problems/valid-palindrome/) |[Java](./Strings/CheckPalindrome.java) ||O(n)||
|  8  |Implement Atoi|[GFG](https://practice.geeksforgeeks.org/problems/implement-atoi/1) |[Java](./Strings/Atoi.java) [CPP](./Strings/GFG_ImplementAtoi.cpp) |Medium|O(n)||
|  9  |Rearrange Spaces Between Words|[LC](https://leetcode.com/problems/rearrange-spaces-between-words/) |[Java](./Strings/RearrangeSpaces.java) [CPP](./Strings/LC_1592_STR_RearrangeSpaceBwWords.cpp) ||O(1)||
|  10  |Count Number Of Homogenous Substrings|[LC](https://leetcode.com/problems/count-number-of-homogenous-substrings/) |[Java](./Strings/CountHomogeneousSubstrings.java) [CPP](./Strings/LC_1759_STR_CountNumOfHomogenousSubstring.cpp) ||O(n)||
|  11  |First Unique Character In A String|[LC](https://leetcode.com/problems/first-unique-character-in-a-string/) |[Java](./Strings/FirstUniqueCharacter.java) [CPP](./Strings/GFG_NonRepeatingChar.cpp) ||O(n)||
|  12  |Count And Say|[LC](https://leetcode.com/problems/count-and-say/) |[Java](./Strings/CountAndSay.java) ||O(n<sup>2</sup>)||
|  13  |Goat Latin|[LC](https://leetcode.com/problems/goat-latin/) |[Java](./Strings/GoatLatin.java) ||O(n)||
|  14  |Palindrome String0817|[GFG](https://practice.geeksforgeeks.org/problems/palindrome-string0817/1) |[CPP](./Strings/GFG_STR_PalindromeString.cpp) |Easy|O(1)||
|  15  |Valid Palindrome Ii|[LC](https://leetcode.com/problems/valid-palindrome-ii/) |[Java](./Strings/CheckPalindrome2.java) ||O(n)||
|  16  |Find All Anagrams In A String|[LC](https://leetcode.com/problems/find-all-anagrams-in-a-string/) |[Java](./Strings/AnagramSearch.java) [CPP](./Strings/LC_438_FindAllAnagramsString.cpp) ||O(n<sup>2</sup>)||
|  17  |Longest Prefix Suffix2527|[GFG](https://practice.geeksforgeeks.org/problems/longest-prefix-suffix2527/1) |[Java](./Strings/LongestPrefixSuffix.java) |Medium|O(n)||
|  18  |Reverse A String|[GFG](https://practice.geeksforgeeks.org/problems/reverse-a-string/1#) |[CPP](./Strings/GFG_STR_ReverseString.cpp) |Basic|O(1)||
|  19  |Multiply Strings|[LC](https://leetcode.com/problems/multiply-strings) |[Java](./Strings/MultiplyStrings.java) ||O(n<sup>2</sup>)||
|  20  |Valid Number|[LC](https://leetcode.com/problems/valid-number/) |[Java](./Strings/ValidNumber.java) ||O(n)||
|  21  |Maximum Number Of Vowels In A Substring Of Given Length|[LC](https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/) |[Java](./Strings/MaximumNumberOfVowelsInASubstringOfGivenLength.java) [CPP](./Strings/LC_1456_MaxVowelsInSubString.cpp) ||O(1)||
|  22  |Longest Even Length Substring|[GFG](https://practice.geeksforgeeks.org/problems/longest-even-length-substring/0) |[Java](./Strings/LongestEvenLengthSubstring.java) |Medium|O(n<sup>3</sup>)||
|  23  |Reorganize String|[LC](https://leetcode.com/problems/reorganize-string/) |[Java](./Strings/ReorganizeString.java) ||O(n)||
|  24  |Verifying An Alien Dictionary|[LC](https://leetcode.com/problems/verifying-an-alien-dictionary/) |[Java](./Strings/VerifyAlienDictionary.java) ||O(n<sup>2</sup>)||
|  25  |Find First Repeated Character4108|[GFG](https://practice.geeksforgeeks.org/problems/find-first-repeated-character4108/1/) |[CPP](./Strings/GFG_FirstRepeatedChar.cpp) |Basic|O(1)||
|  26  |Rearrange Characters4649|[GFG](https://practice.geeksforgeeks.org/problems/rearrange-characters4649/1) |[Java](./Strings/RearrangeCharacters.java) |Medium|O(n<sup>2</sup>)||
|  27  |Validate An Ip Address 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/validate-an-ip-address-1587115621/1) |[Java](./Strings/ValidateIPAddress.java) |Medium|O(n)||
|  28  |Unique Morse Code Words|[LC](https://leetcode.com/problems/unique-morse-code-words/) |||O(1)||
|  29  |Consecutive Characters|[LC](https://leetcode.com/problems/consecutive-characters/) |[Java](./Strings/ConsecutiveCharacters.java) [CPP](./Strings/LC_1446_STR_Consecutive_Characters.cpp) ||O(n)||
|  30  |First Non Repeating Character In A Stream1216|[GFG](https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1) |[Java](./Strings/FirstUniqueCharacterInAStream.java) |Medium|O(n<sup>2</sup>)||
|  31  |Rotate String|[LC](https://leetcode.com/problems/rotate-string/) |[Java](./Strings/StringRotationCheck.java) [CPP](./Strings/LC_796_RotateString.cpp) ||O(1)||
|  32  |Longest K Unique Characters Substring0853|[GFG](https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1/) |[Java](./Strings/LongestKUniqueCharacters.java) |Easy|O(n<sup>2</sup>)||
|  33  |Number Of Substrings With Only 1s|[LC](https://leetcode.com/problems/number-of-substrings-with-only-1s/) |[Java](./Strings/CountConsecutiveOnes.java) ||O(n)||
## Tree

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Count Number Of Subtrees Having Given Sum|[GFG](https://practice.geeksforgeeks.org/problems/count-number-of-subtrees-having-given-sum/1) |[Java](./Tree/CountNumberOfSubtreesHavingGivenSum.java) |Medium|O(1)||
|  2  |Maximum Width Of Tree|[GFG](https://practice.geeksforgeeks.org/problems/maximum-width-of-tree/1) |[Java](./Tree/MaximumWidthOfTree.java) |Easy|O(n<sup>2</sup>)||
|  3  |Flatten Binary Tree To Linked List|[LC](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/) |[Java](./Tree/BinaryTreeToSLL.java) ||O(n<sup>2</sup>)||
|  4  |Diagonal Traversal Of Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1) |[Java](./Tree/DiagonalTraversal.java) |Medium|O(n<sup>2</sup>)||
|  5  |Paths From Root With A Specified Sum|[GFG](https://practice.geeksforgeeks.org/problems/paths-from-root-with-a-specified-sum/1) |[Java](./Tree/PathsFromRootWithASpecifiedSum.java) |Medium|O(n)||
|  6  |Boundary Traversal Of Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1) |[Java](./Tree/BoundaryTraversal.java) [CPP](./Tree/GFG_BoundaryTraversal.cpp) |Medium|O(1)||
|  7  |Convert Sorted Array To Binary Search Tree|[LC](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/) |[CPP](./Tree/GFG_LC_108_SortedArrayToBST.cpp) ||O(1)||
|  8  |Unique Bsts 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/unique-bsts-1587115621/1#) |[Java](./Tree/UniqueBSTs.java) |Medium|O(n<sup>2</sup>)||
|  9  |Find Duplicate Subtrees|[LC](https://leetcode.com/problems/find-duplicate-subtrees/) |[Java](./Tree/FindDuplicateSubTrees.java) ||O(n)||
|  10  |Path Sum|[LC](https://leetcode.com/problems/path-sum/) |[Java](./Tree/IsPathSumPresent.java) [CPP](./Tree/LC_112_PathSum.cpp) ||O(1)||
|  11  |Print Nodes Having K Leaves|[GFG](https://practice.geeksforgeeks.org/problems/print-nodes-having-k-leaves/1) |[Java](./Tree/PrintNodesHavingKLeaves.java) |Medium|O(1)||
|  12  |Burning Tree|[GFG](https://practice.geeksforgeeks.org/problems/burning-tree/1) |[Java](./Tree/BurnTree.java) |Hard|O(1)||
|  13  |Delete Node In A Bst|[LC](https://leetcode.com/problems/delete-node-in-a-bst/) |[Java](./Tree/DeleteFromBST.java) [CPP](./Tree/LC_450_DeleteFromBST.cpp) ||O(n)||
|  14  |Bottom View Of Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1) |[Java](./Tree/BottomView.java) |Medium|O(n)||
|  15  |Lowest Common Ancestor In A Bst|[GFG](https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1) |[Java](./Tree/FindLowestCommonAncestor.java) |Easy|O(n)||
|  16  |Leaf At Same Level|[GFG](https://practice.geeksforgeeks.org/problems/leaf-at-same-level/1) |[Java](./Tree/LeafAtSameLevel.java) [CPP](./Tree/GFG_Tree_LeafAtSameLevel.cpp) |Easy|O(1)||
|  17  |N Ary Tree Preorder Traversal|[LC](https://leetcode.com/problems/n-ary-tree-preorder-traversal/) |[Java](./Tree/NAryPreOrder.java) ||O(n)||
|  18  |Brothers From Different Root|[GFG](https://practice.geeksforgeeks.org/problems/brothers-from-different-root/1#) |[Java](./Tree/BrothersFromDifferentRoots.java) |Easy|O(n)||
|  19  |Path Sum Iii|[LC](https://leetcode.com/problems/path-sum-iii/) |[Java](./Tree/PathSum3.java) ||O(1)||
|  20  |Unique Binary Search Trees Ii|[LC](https://leetcode.com/problems/unique-binary-search-trees-ii/) |[Java](./Tree/UniqueBinarySearchTrees.java) ||O(n)||
|  21  |N Ary Tree Level Order Traversal|[LC](https://leetcode.com/problems/n-ary-tree-level-order-traversal/) |[Java](./Tree/NAryLevelOrderTraversal.java) ||O(n<sup>3</sup>)||
|  22  |Count Bst Nodes That Lie In A Given Range|[GFG](https://practice.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1/) |[Java](./Tree/CountNodesInRange.java) [CPP](./Tree/GFG_CountBSTnodesInRange.cpp) |Medium|O(1)||
|  23  |Maximum Difference Between Node And Ancestor|[LC](https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/) |[Java](./Tree/MaximumDifferenceBetweenAncestorAndNode.java) ||O(n)||
|  24  |Construct String From Binary Tree|[LC](https://leetcode.com/problems/construct-string-from-binary-tree/) |[Java](./Tree/BinaryTreeToString.java) ||O(1)||
|  25  |Inorder Successor In Bst|[GFG](https://practice.geeksforgeeks.org/problems/inorder-successor-in-bst/1) |[Java](./Tree/FindInorderSuccessor.java) [CPP](./Tree/GFG_inOrderSuccBST.cpp) |Easy|O(1)||
|  26  |Binary Tree To Bst|[GFG](https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1) |[Java](./Tree/BinaryTreeToBST.java) |Easy|O(1)||
|  27  |Path Sum Ii|[LC](https://leetcode.com/problems/path-sum-ii/) |[Java](./Tree/FindAllPathsWithGivenSum.java) ||O(n)||
|  28  |Largest Bst|[GFG](https://practice.geeksforgeeks.org/problems/largest-bst/1) |[Java](./Tree/LargestBST.java) |Medium|O(1)||
|  29  |Populate Inorder Successor For All Nodes|[GFG](https://practice.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1#) |[Java](./Tree/PopulateInorderSuccessors.java) [CPP](./Tree/GFG_PopulateInorderSuccForAllNodes.cpp) |Medium|O(1)||
|  30  |Right View Of Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1) |[Java](./Tree/RightView.java) [CPP](./Tree/GFG_Tree_RightView.cpp) |Easy|O(1)||
|  31  |Count Good Nodes In Binary Tree|[LC](https://leetcode.com/problems/count-good-nodes-in-binary-tree/) |[Java](./Tree/CountGoodNodes.java) ||O(1)||
|  32  |Preorder Traversal Iterative|[GFG](https://practice.geeksforgeeks.org/problems/preorder-traversal-iterative/0/) |[Java](./Tree/IterativePreOrder.java) |Medium|O(n)||
|  33  |Balanced Binary Tree|[LC](https://leetcode.com/problems/balanced-binary-tree/) |[Java](./Tree/CheckIfBalanced.java) ||O(1)||
|  34  |Maximum Path Sum|[GFG](https://practice.geeksforgeeks.org/problems/maximum-path-sum/1) |[Java](./Tree/MaximumPathSumBetweenTwoLeaves.java) |Hard|O(1)||
|  35  |Single Valued Subtree|[GFG](https://practice.geeksforgeeks.org/problems/single-valued-subtree/1) |[Java](./Tree/SingleValuedSubtree.java) |Medium|O(1)||
|  36  |Connect Nodes At Same Level|[GFG](https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1) |[Java](./Tree/ConnectNodesAtSameLevel.java) |Medium|O(n)||
|  37  |Binary Tree Level Order Traversal|[LC](https://leetcode.com/problems/binary-tree-level-order-traversal/) |[Java](./Tree/LevelOrderTraversal.java) [CPP](./Tree/LC_102_BinaryTreeLevelOrderTraversal.cpp) ||O(1)||
|  38  |Invert Binary Tree|[LC](https://leetcode.com/problems/invert-binary-tree/) |[CPP](./Tree/LC_226_Tree_InvertBinaryTree.cpp) ||O(1)||
|  39  |Sum Of K Smallest Elements In Bst3029|[GFG](https://practice.geeksforgeeks.org/problems/sum-of-k-smallest-elements-in-bst3029/1) |[Java](./Tree/SumOfKSmallestElements.java) |Easy|O(n)||
|  40  |Tree From Postorder And Inorder|[GFG](https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1/) |[Java](./Tree/BuildTreeFromInAndPost.java) |Medium|O(n)||
|  41  |Inorder Traversal Iterative|[GFG](https://practice.geeksforgeeks.org/problems/inorder-traversal-iterative/0/) |[Java](./Tree/IterativeInOrder.java) |Medium|O(n)||
|  42  |Maximum Sum Leaf To Root Path|[GFG](https://practice.geeksforgeeks.org/problems/maximum-sum-leaf-to-root-path/1) |[Java](./Tree/MaxSumPath.java) |Medium|O(1)||
|  43  |Cousins In Binary Tree|[LC](https://leetcode.com/problems/cousins-in-binary-tree/) |[Java](./Tree/AreCousins.java) ||O(n<sup>2</sup>)||
|  44  |Node At Distance|[GFG](https://practice.geeksforgeeks.org/problems/node-at-distance/1) |[Java](./Tree/NodeAtDistance.java) |Medium|O(1)||
|  45  |Construct Tree 1|[GFG](https://practice.geeksforgeeks.org/problems/construct-tree-1/1/) |[Java](./Tree/BuildTreeFromInAndPre.java) |Medium|O(n)||
|  46  |Pairs Violating Bst Property|[GFG](https://practice.geeksforgeeks.org/problems/pairs-violating-bst-property/1) |[Java](./Tree/PairsViolatingBSTProperty.java) |Medium|O(n)||
|  47  |Maximum Depth Of Binary Tree|[LC](https://leetcode.com/problems/maximum-depth-of-binary-tree/) |[Java](./Tree/Height.java) [CPP](./Tree/LC_104_MaxDepthBinaryTree.cpp) ||O(1)||
|  48  |Diameter Of Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1) |[Java](./Tree/Diameter.java) |Easy|O(1)||
|  49  |Sum Of The Longest Bloodline Of A Tree|[GFG](https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1#) |[Java](./Tree/SumOfLongestBloodLine.java) [CPP](./Tree/GFG_Tree_SumLongestBloodlineOfaTree.cpp) |Easy|O(1)||
|  50  |Maximum Path Sum From Any Node|[GFG](https://practice.geeksforgeeks.org/problems/maximum-path-sum-from-any-node/1) |[Java](./Tree/MaximumPathSumFromAnyNode.java) |Medium|O(1)||
|  51  |Array To Bst4443|[GFG](https://practice.geeksforgeeks.org/problems/array-to-bst4443/1) [LC](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/) |[Java](./Tree/SortedArrayToBalancedBST.java) |Easy|O(n)||
|  52  |Symmetric Tree|[GFG](https://practice.geeksforgeeks.org/problems/symmetric-tree/1) |[Java](./Tree/CheckMirror.java) [CPP](./Tree/LC_101_Tree_Symmetric.cpp) |Easy|O(1)||
|  53  |Transform To Sum Tree|[GFG](https://practice.geeksforgeeks.org/problems/transform-to-sum-tree/1) |[Java](./Tree/ConvertIntoSumTree.java) |Easy|O(1)||
|  54  |Merge Two Bst S|[GFG](https://practice.geeksforgeeks.org/problems/merge-two-bst-s/1) |[Java](./Tree/MergeTwoBSTs.java) |Hard|O(n)||
|  55  |Two Mirror Trees|[GFG](https://practice.geeksforgeeks.org/problems/two-mirror-trees/1) |[Java](./Tree/TwoMirrorTrees.java) |Easy|O(1)||
|  56  |Insert Into A Binary Search Tree|[LC](https://leetcode.com/problems/insert-into-a-binary-search-tree/) |[Java](./Tree/InsertIntoBST.java) [CPP](./Tree/LC_701_InsertIntoBST.cpp) ||O(1)||
|  57  |Children Sum Parent|[GFG](https://practice.geeksforgeeks.org/problems/children-sum-parent/1/#) |[CPP](./Tree/GFG_ChildrenSumParent.cpp) |Easy|O(1)||
|  58  |Add All Greater Values To Every Node In A Bst|[GFG](https://practice.geeksforgeeks.org/problems/add-all-greater-values-to-every-node-in-a-bst/1) |[Java](./Tree/GreaterValueAddition.java) |Medium|O(1)||
|  59  |Serialize And Deserialize A Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1) [LC](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/) |[Java](./Tree/SerializeAndDeserialize.java) |Medium|O(1)||
|  60  |Mirror Tree|[GFG](https://practice.geeksforgeeks.org/problems/mirror-tree/1) |[Java](./Tree/Mirror.java) |Easy|O(1)||
|  61  |N Ary Tree Postorder Traversal|[LC](https://leetcode.com/problems/n-ary-tree-postorder-traversal/) |[Java](./Tree/NAryPostOrder.java) ||O(n)||
|  62  |Binary Tree Zigzag Level Order Traversal|[LC](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/) |[Java](./Tree/ZigzagLevelOrderTraversal.java) ||O(n<sup>2</sup>)||
|  63  |Min Distance Between Two Given Nodes Of A Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1/) |[Java](./Tree/FindDistance.java) |Medium|O(1)||
|  64  |Binary Tree K Level Sum3857|[GFG](https://practice.geeksforgeeks.org/problems/binary-tree-k-level-sum3857/1) |[Java](./Tree/KLevelSum.java) |Easy|O(n<sup>2</sup>)||
|  65  |Print A Binary Tree In Vertical Order|[GFG](https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1) |[Java](./Tree/VerticalTraversal.java) |Medium|O(n<sup>2</sup>)||
|  66  |Cousins Of A Given Node|[GFG](https://practice.geeksforgeeks.org/problems/cousins-of-a-given-node/1) |[Java](./Tree/Cousins.java) |Medium|O(n<sup>2</sup>)||
|  67  |Check If Subtree|[GFG](https://practice.geeksforgeeks.org/problems/check-if-subtree/1) |[Java](./Tree/CheckIfSubtree.java) |Medium|O(n)||
|  68  |Postorder Traversal Iterative|[GFG](https://practice.geeksforgeeks.org/problems/postorder-traversal-iterative/0/) |[Java](./Tree/IterativePostOrder.java) |Medium|O(n)||
|  69  |Predecessor And Successor|[GFG](https://practice.geeksforgeeks.org/problems/predecessor-and-successor/1/) |[Java](./Tree/SuccAndPre.java) |Easy|O(1)||
|  70  |Preorder Traversal And Bst4006|[GFG](https://practice.geeksforgeeks.org/problems/preorder-traversal-and-bst4006/1/) |[Java](./Tree/CheckIfPreorderOfBST.java) |Medium|O(n)||
|  71  |Populating Next Right Pointers In Each Node|[LC](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/) |[Java](./Tree/PopulateRightPointers.java) ||O(n<sup>2</sup>)||
|  72  |Reverse Level Order Traversal|[GFG](https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1#) |[Java](./Tree/ReverseLevelOrder.java) [CPP](./Tree/GFG_Tree_ReverseOrderTraversal.cpp) |Easy|O(1)||
|  73  |Number Of Turns In Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/number-of-turns-in-binary-tree/1) |[Java](./Tree/NumberOfTurnsInBinaryTree.java) |Hard|O(1)||
|  74  |Remove Bst Keys Outside Given Range|[GFG](https://practice.geeksforgeeks.org/problems/remove-bst-keys-outside-given-range/1/) |[Java](./Tree/RemoveNodesOutsideRange.java) |Medium|O(n<sup>2</sup>)||
|  75  |Find A Pair With Given Target In Bst|[GFG](https://practice.geeksforgeeks.org/problems/find-a-pair-with-given-target-in-bst/1) |[Java](./Tree/FindPairInBST.java) [CPP](./Tree/GFG_FindPairWithSumBST.cpp) |Medium|O(n)||
|  76  |Validate Binary Search Tree|[LC](https://leetcode.com/problems/validate-binary-search-tree/) |[Java](./Tree/IsBST.java) [CPP](./Tree/LC_98_ValidateBST.cpp) ||O(1)||
|  77  |Find The Distance Between Two Nodes4402|[GFG](https://practice.geeksforgeeks.org/problems/find-the-distance-between-two-nodes4402/1) |[Java](./Tree/ShortestDistance.java) |Easy|O(n)||
|  78  |Find The Closest Element In Bst|[GFG](https://practice.geeksforgeeks.org/problems/find-the-closest-element-in-bst/1) |[Java](./Tree/ClosestElementInBST.java) |Medium|O(n)||
|  79  |Check Whether Bst Contains Dead End|[GFG](https://practice.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1) |[Java](./Tree/CheckDeadEnd.java) |Easy|O(1)||
|  80  |Binary Tree To Dll|[GFG](https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/1) |[Java](./Tree/BinaryTreeToDLL.java) |Hard|O(1)||
|  81  |Determine If Two Trees Are Identical|[GFG](https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1) |[Java](./Tree/CheckIfIdentical.java) [CPP](./Tree/GFG_DetermineIfTwoTreesIdentical.cpp) |Easy|O(1)||
|  82  |Binary Search Tree Iterator|[LC](https://leetcode.com/problems/binary-search-tree-iterator/) |[Java](./Tree/BinarySearchTreeIterator.java) ||O(n)||
|  83  |Foldable Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/foldable-binary-tree/1) |[Java](./Tree/FoldableBinaryTree.java) |Medium|O(1)||
|  84  |Left View Of Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1#) |[Java](./Tree/LeftView.java) [CPP](./Tree/GFG_Tree_LeftView.cpp) |Easy|O(1)||
|  85  |Top View Of Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1) |[Java](./Tree/TopView.java) |Medium|O(n)||
|  86  |Check For Balanced Tree|[GFG](https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1) |[CPP](./Tree/GFG_Tree_BalancedTree.cpp) |Easy|O(1)||
|  87  |Kth Smallest Element In A Bst|[LC](https://leetcode.com/problems/kth-smallest-element-in-a-bst/) [GFG](https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1) |[Java](./Tree/KthSmallestElement.java) |Easy|O(1)||
|  88  |Maximum Level Sum Of A Binary Tree|[LC](https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/) |[Java](./Tree/MaxLevelSum.java) ||O(n<sup>2</sup>)||
|  89  |Find Mode In Binary Search Tree|[LC](https://leetcode.com/problems/find-mode-in-binary-search-tree/) |[Java](./Tree/FindMode.java) ||O(n)||
|  90  |Duplicate Subtree In Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/duplicate-subtree-in-binary-tree/1/) |[Java](./Tree/CheckForDuplicateSubtrees.java) |Medium|O(n<sup>4</sup>)||
|  91  |Largest Value In Each Level|[GFG](https://practice.geeksforgeeks.org/problems/largest-value-in-each-level/1) |[Java](./Tree/LargestValueInEachLevel.java) |Easy|O(n<sup>2</sup>)||
|  92  |Trim A Binary Search Tree|[LC](https://leetcode.com/problems/trim-a-binary-search-tree/) |[CPP](./Tree/LC_669_TrimBST.cpp) ||O(n<sup>2</sup>)||
|  93  |Bst To Greater Sum Tree|[GFG](https://practice.geeksforgeeks.org/problems/bst-to-greater-sum-tree/1) |[Java](./Tree/BstToGreaterSumTree.java) |Medium|O(1)||
|  94  |Maximum Difference Between Node And Its Ancestor|[GFG](https://practice.geeksforgeeks.org/problems/maximum-difference-between-node-and-its-ancestor/1) |[Java](./Tree/MaximumDifferenceAncestorNode.java) |Medium|O(n)||
|  95  |Sum Tree|[GFG](https://practice.geeksforgeeks.org/problems/sum-tree/1) |[Java](./Tree/CheckSumTree.java) |Medium|O(1)||
|  96  |Ffd66b6a0bf7cefb9987fa455974b6ea5695709e|[GFG](https://practice.geeksforgeeks.org/problems/ffd66b6a0bf7cefb9987fa455974b6ea5695709e/1) |[Java](./Tree/BinarySearch.java) |Easy|O(n<sup>2</sup>)||
|  97  |Merge Two Binary Trees|[LC](https://leetcode.com/problems/merge-two-binary-trees/) |[Java](./Tree/MergeTwoBinaryTrees.java) [CPP](./Tree/LC_617_MergeTwoBST.cpp) ||O(1)||
|  98  |Nodes At Given Distance In Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/nodes-at-given-distance-in-binary-tree/1) |[Java](./Tree/FindNodesAtDistanceK.java) |Hard|O(n)||
## Trie

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Short Encoding Of Words|[LC](https://leetcode.com/problems/short-encoding-of-words/) |[Java](./Trie/ShortestEncoding.java) ||O(n<sup>2</sup>)||
|  2  |Unique Rows In Boolean Matrix|[GFG](https://practice.geeksforgeeks.org/problems/unique-rows-in-boolean-matrix/1) |[Java](./Trie/UniqueRowsInMatrix.java) |Easy|O(n)||
|  3  |Shortest Unique Prefix For Every Word|[GFG](https://practice.geeksforgeeks.org/problems/shortest-unique-prefix-for-every-word/0/) |[Java](./Trie/ShortestUniquePrefixForEveryWord.java) |Hard|O(n)||
|  4  |Maximum Xor Of Two Numbers In An Array|[LC](https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/) |[Java](./Trie/MaximumXorPair.java) ||O(n)||
|  5  |Minimum Xor Value Pair|[GFG](https://practice.geeksforgeeks.org/problems/minimum-xor-value-pair/1/) |[Java](./Trie/MinimumXorPair.java) |Medium|O(n)||
|  6  |Stream Of Characters|[LC](https://leetcode.com/problems/stream-of-characters/) |[Java](./Trie/StreamOfCharacters.java) ||O(n)||
|  7  |Trie Insert And Search0651|[GFG](https://practice.geeksforgeeks.org/problems/trie-insert-and-search0651/1) |[Java](./Trie/Trie.java) |Medium|O(1)||
|  8  |Implement Trie Prefix Tree|[LC](https://leetcode.com/problems/implement-trie-prefix-tree/) |[Java](./Trie/TriePrefixTree.java) ||O(n)||
|  9  |Search Suggestions System|[LC](https://leetcode.com/problems/search-suggestions-system/) |[Java](./Trie/SearchSuggestionSystem.java) ||O(n<sup>2</sup>)||
|  10  |Phone Directory4628|[GFG](https://practice.geeksforgeeks.org/problems/phone-directory4628/1) |[Java](./Trie/PhoneDirectory.java) |Hard|O(n)||
