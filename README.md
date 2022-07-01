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

Number of Problems Solved (01-Jul-2022 20:15:45)

| Topic Name | Java | CPP | 
| :--------: | :--------: | :--------: | 
| [Arrays](https://github.com/prateekshyap/DSA#arrays) | 93 | 44 |
| [BackTracking](https://github.com/prateekshyap/DSA#backtracking) | 22 | 5 |
| [Bit-Magic](https://github.com/prateekshyap/DSA#bit-magic) | 26 | 21 |
| [Codeforces](https://github.com/prateekshyap/DSA#codeforces) | 76 | 1 |
| [Disjoint-Set](https://github.com/prateekshyap/DSA#disjoint-set) | 4 | 0 |
| [Dynamic-Programming](https://github.com/prateekshyap/DSA#dynamic-programming) | 110 | 15 |
| [Graph](https://github.com/prateekshyap/DSA#graph) | 63 | 19 |
| [Greedy](https://github.com/prateekshyap/DSA#greedy) | 19 | 7 |
| [Hashing](https://github.com/prateekshyap/DSA#hashing) | 39 | 9 |
| [Heap](https://github.com/prateekshyap/DSA#heap) | 22 | 9 |
| [Linked-List](https://github.com/prateekshyap/DSA#linked-list) | 55 | 20 |
| [Matrix](https://github.com/prateekshyap/DSA#matrix) | 36 | 20 |
| [Miscellaneous](https://github.com/prateekshyap/DSA#miscellaneous) | 57 | 3 |
| [Queue](https://github.com/prateekshyap/DSA#queue) | 6 | 6 |
| [Recursion](https://github.com/prateekshyap/DSA#recursion) | 13 | 12 |
| [Searching](https://github.com/prateekshyap/DSA#searching) | 33 | 31 |
| [Segment-Tree](https://github.com/prateekshyap/DSA#segment-tree) | 2 | 0 |
| [Sorting](https://github.com/prateekshyap/DSA#sorting) | 11 | 7 |
| [Stack](https://github.com/prateekshyap/DSA#stack) | 24 | 7 |
| [Strings](https://github.com/prateekshyap/DSA#strings) | 56 | 14 |
| [Tree](https://github.com/prateekshyap/DSA#tree) | 139 | 26 |
| [Trie](https://github.com/prateekshyap/DSA#trie) | 12 | 2 |
| Total | 918 | 278 |

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
|  1  |Submajority Vote|[BS](https://binarysearch.com/problems/Submajority-Vote) [LC](https://leetcode.com/problems/majority-element-ii/) |[Java](./Arrays/MajorityElement-ii.java) ||O(n)||
|  2  |Find Missing Observations|[LC](https://leetcode.com/problems/find-missing-observations/) |[Java](./Arrays/FindMissingObservations.java) ||O(n)||
|  3  |Subarray With 0 Sum 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1#) |[Java](./Arrays/SubarrayWithZeroSum.java) [CPP](./Arrays/GFG_SubarrayWithZeroSum.cpp) |Easy|O(1)||
|  4  |Plus One|[GFG](https://practice.geeksforgeeks.org/problems/plus-one/1/) |[Java](./Arrays/AddOne.java) |Easy|O(n)||
|  5  |Kth Smallest Element5635|[GFG](https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1#) |[Java](./Arrays/KthSmallestElement.java) [CPP](./Arrays/GFG_ARR_KthSmallestElement.cpp) |Medium|O(1)||
|  6  |Next Permutation|[LC](https://leetcode.com/problems/next-permutation/) |[Java](./Arrays/NextPermutation.java) [CPP](./Arrays/LC_31_NextPermutation.cpp) ||O(1)||
|  7  |Longest Continuous Subarray With Absolute Diff Less Than Or Equal To Limit|[LC](https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/) |[Java](./Arrays/LongestContiguousSubarrayWithAbsoluteDiffLessThanOrEqualToLimit.java) ||O(n<sup>2</sup>)||
|  8  |Summary Ranges|[LC](https://leetcode.com/problems/summary-ranges/) |[Java](./Arrays/SummaryRanges.java) ||O(n)||
|  9  |Subarray With Given Sum 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1#) |[Java](./Arrays/SubarrayWithGivenSum.java) [CPP](./Arrays/GFG_SubarrayWithGivenSum.cpp) |Easy|O(1)||
|  10  |Crush|[HR](https://www.hackerrank.com/challenges/crush/) |[Java](./Arrays/ArrayManipulation.java) ||O(n)||
|  11  |Smallest Subarray With Sum Greater Than X5651|[GFG](https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1) |[Java](./Arrays/SmallestSubarrayGreaterThanX.java) |null|O(n<sup>2</sup>)||
|  12  |Next Higher Palindromic Number Using The Same Set Of Digits5859|[GFG](https://practice.geeksforgeeks.org/problems/next-higher-palindromic-number-using-the-same-set-of-digits5859/1) |[Java](./Arrays/NextGreaterPalindrome.java) |Medium|O(n)||
|  13  |Number Of Good Ways To Split A String|[LC](https://leetcode.com/problems/number-of-good-ways-to-split-a-string/) |[Java](./Arrays/NumberOfGoodSplits.java) [CPP](./Arrays/LC_1525_NumOfGoodWaysToSplit.cpp) ||O(1)||
|  14  |Palindrome String0817|[GFG](https://practice.geeksforgeeks.org/problems/palindrome-string0817/1) |[Java](./Arrays/PalindromeString.java) |Easy|O(1)||
|  15  |XOR Range Queries|[BS](https://binarysearch.com/problems/XOR-Range-Queries) |[Java](./Arrays/XORRangeQueries.java) ||O(n)||
|  16  |Find The Duplicate Number|[LC](https://leetcode.com/problems/find-the-duplicate-number/) |[Java](./Arrays/FindDuplicate.java) [CPP](./Arrays/LC_287_FindDuplicateNumber.cpp) ||O(n)||
|  17  |Remove Duplicates From Sorted Array|[LC](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) |[Java](./Arrays/RemoveDuplicatesFromSortedArray.java) [CPP](./Arrays/LC_26_RemoveDuplicatesSortedArray.cpp) ||O(1)||
|  18  |Large Factorial4721|[GFG](https://practice.geeksforgeeks.org/problems/large-factorial4721/1/) |[Java](./Arrays/LargeFactorialArray.java) |Medium|O(n)||
|  19  |Merge Intervals|[LC](https://leetcode.com/problems/merge-intervals/) [GFG](https://practice.geeksforgeeks.org/problems/8a644e94faaa94968d8665ba9e0a80d1ae3e0a2d/1/#) |[Java](./Arrays/MergeIntervals.java) [CPP](./Arrays/LC_56_MergeIntervals.cpp) |Medium|O(1)||
|  20  |Replace Elements With Greatest Element On Right Side|[LC](https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/) |[Java](./Arrays/ReplaceWithLargestOnRight.java) ||O(n<sup>2</sup>)||
|  21  |Longest Consecutive Sequence|[LC](https://leetcode.com/problems/longest-consecutive-sequence/) [GFG](https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1) |[Java](./Arrays/LongestConsecutiveSubsequence.java) |Medium|O(n<sup>2</sup>)||
|  22  |Find Pivot Index|[LC](https://leetcode.com/problems/find-pivot-index/) [GFG](https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1) |[Java](./Arrays/EquilibriumPoint.java) [CPP](./Arrays/LC_724_ARR_EquilibriumPoints.cpp) |Easy|O(n)||
|  23  |Best Time To Buy And Sell Stock|[LC](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) |[CPP](./Arrays/LC_121_BestTimeToBuySellStock.cpp) ||O(1)||
|  24  |Pick From Both Sides|[IB](https://www.interviewbit.com/problems/pick-from-both-sides/) |[Java](./Arrays/PickFromBothSides.java) ||O(n)||
|  25  |Insert Interval|[LC](https://leetcode.com/problems/insert-interval/) |[Java](./Arrays/InsertNewInterval.java) [CPP](./Arrays/LC_57_InsertInterval.cpp) ||O(n)||
|  26  |Inversion Of Array 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1) |[Java](./Arrays/InversionCount.java) |Medium|O(n)||
|  27  |Jump Game|[GFG](https://practice.geeksforgeeks.org/problems/jump-game/1/#) |[Java](./Arrays/JumpGame.java) |Medium|O(n)||
|  28  |Partition Array Into Three Parts With Equal Sum|[LC](https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/) |[Java](./Arrays/ThreeParts.java) [CPP](./Arrays/LC_1013_ARR_ThreeEqualParts.cpp) ||O(1)||
|  29  |Common Elements1132|[GFG](https://practice.geeksforgeeks.org/problems/common-elements1132/1) |[Java](./Arrays/CommonElements.java) |Easy|O(n)||
|  30  |Set Split|[BS](https://binarysearch.com/problems/Set-Split) |[Java](./Arrays/SetSplit.java) ||O(n)||
|  31  |Union Of Two Arrays3538|[GFG](https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1#) |[Java](./Arrays/UnionArrays.java) [CPP](./Arrays/GFG_UnionTwoArrays.cpp) |Basic|O(1)||
|  32  |Largest Subarray Of 0s And 1s|[GFG](https://practice.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1/) [LC](https://leetcode.com/problems/contiguous-array/) |[CPP](./Arrays/LC_525_ContiguousArrayZeroOne.cpp) |Easy|O(1)||
|  33  |Largest Number Formed From An Array1117|[GFG](https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1/) |[Java](./Arrays/LargestNumberFormedFromAnArray.java) |Medium|O(n)||
|  34  |Subarray Sum Equals K|[LC](https://leetcode.com/problems/subarray-sum-equals-k/) |[Java](./Arrays/TotalSubarrays.java) [CPP](./Arrays/LC_560_CountSubarraySumEqualsK.cpp) ||O(1)||
|  35  |Majority Element|[LC](https://leetcode.com/problems/majority-element/) [GFG](https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1/) |[Java](./Arrays/MajorityElement.java) [CPP](./Arrays/LC_169_MajorityElement.cpp) |Medium|O(1)||
|  36  |Remove Duplicates Occurring More Than Twice|[BS](https://binarysearch.com/problems/Remove-Duplicates-Occurring-More-Than-Twice) [LC](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/) |[Java](./Arrays/RemoveDuplicatesFromSortedArray2.java) [CPP](./Arrays/LC_80_RemoveDuplicatesFromSortedArrayII.cpp) ||O(n)||
|  37  |Zero Sum Subarrays1825|[GFG](https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1) |[Java](./Arrays/TotalZeroSumSubarrays.java) [CPP](./Arrays/GFG_CountSubarrySumZero.cpp) |Medium|O(1)||
|  38  |Smallest Sum Contiguous Subarray|[GFG](https://practice.geeksforgeeks.org/problems/smallest-sum-contiguous-subarray/1/) |[Java](./Arrays/SmallestSumContiguousSubarray.java) |Medium|O(n)||
|  39  |Number Of K Length Sublists With Average At Least Target|[BS](https://binarysearch.com/problems/Number-of-K-Length-Sublists-with-Average-at-Least-Target) |[Java](./Arrays/KLengthSublistsWithAverageAtLeastTarget.java) ||O(n)||
|  40  |Maximum Index 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/maximum-index-1587115620/1) |[Java](./Arrays/MaximumIndex.java) |Medium|O(n<sup>2</sup>)||
|  41  |Number Of Sub Arrays Of Size K And Average Greater Than Or Equal To Threshold|[LC](https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/) |[Java](./Arrays/SubArrayAvgMoreThanThreshold.java) [CPP](./Arrays/LC_1343_NumOfSubArrayofSizeKandAvgGreaterThanThreshold.cpp) ||O(1)||
|  42  |Chocolate Distribution Problem3825|[GFG](https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1) |[Java](./Arrays/ChocolateDistribution.java) |Easy|O(n)||
|  43  |Merge Two Sorted Arrays5135|[GFG](https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1#) |[Java](./Arrays/MergeWithoutExtraSpace.java) [CPP](./Arrays/GFG_MergeWithoutExtraArray.cpp) |Hard|O(1)||
|  44  |Pairs Of Songs With Total Durations Divisible By 60|[LC](https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/) |[Java](./Arrays/SongSelect.java) ||O(n)||
|  45  |Sort An Array Of 0s 1s And 2s4231|[GFG](https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1#) |[Java](./Arrays/SortZeroOneTwo.java) [CPP](./Arrays/GFG_ARR_ArraySort0_1_2.cpp) |Easy|O(1)||
|  46  |Largest And Smallest Difference|[BS](https://binarysearch.com/problems/Largest-and-Smallest-Difference) |[Java](./Arrays/LargestAndSmallestDifference.java) ||O(n)||
|  47  |Rearrange An Array With O1 Extra Space3142|[GFG](https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1) |[Java](./Arrays/RearrangeWithZeroExtraSpace.java) |Medium|O(n<sup>2</sup>)||
|  48  |Smallest Subset With Greater Sum|[GFG](https://practice.geeksforgeeks.org/problems/smallest-subset-with-greater-sum/1/) |[Java](./Arrays/SmallestSubsetWithGreaterSum.java) |Easy|O(n)||
|  49  |Sum Of All Odd Length Subarrays|[LC](https://leetcode.com/problems/sum-of-all-odd-length-subarrays/) |[Java](./Arrays/SumOfAllOddLengthSubarrays.java) ||O(n<sup>2</sup>)||
|  50  |Maximum Difference Of Zeros And Ones In Binary String4111|[GFG](https://practice.geeksforgeeks.org/problems/maximum-difference-of-zeros-and-ones-in-binary-string4111/1#.) |[Java](./Arrays/MaximumDifferenceInBinaryString.java) [CPP](./Arrays/GFG_MaxDiffZerosAndOnesinBinary.cpp) |Easy|O(1)||
|  51  |Minimize The Heights3351|[GFG](https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1/) |[Java](./Arrays/MinimizeTheHeights.java) |Medium|O(n)||
|  52  |Max Distance Between Same Elements|[GFG](https://practice.geeksforgeeks.org/problems/max-distance-between-same-elements/1) |[Java](./Arrays/MaxDistanceBetweenSameElement.java) |Easy|O(n)||
|  53  |K Distinct Window|[BS](https://binarysearch.com/problems/K-Distinct-Window) |[Java](./Arrays/KDistinctWindow.java) ||O(n)||
|  54  |Rearrange Array Alternately 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1) |[Java](./Arrays/AlternativeRearrangement.java) |Medium|O(n)||
|  55  |Partitions|[IB](https://www.interviewbit.com/problems/partitions/) |[Java](./Arrays/Partitions.java) ||O(n<sup>2</sup>)||
|  56  |Median Of 2 Sorted Arrays Of Different Sizes|[GFG](https://practice.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1/) |[Java](./Arrays/MedianOfTwoSortedArraysOfDifferentSizes.java) |Hard|O(n)||
|  57  |Maximum Product Subset Of An Array|[GFG](https://practice.geeksforgeeks.org/problems/maximum-product-subset-of-an-array/1/) |[Java](./Arrays/MaximumProductSubsetOfAnArray.java) |Medium|O(n)||
|  58  |Wave Array 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/) |[Java](./Arrays/WaveArray.java) |Easy|O(n)||
|  59  |Reverse An Array|[GFG](https://practice.geeksforgeeks.org/problems/reverse-an-array/0) |[Java](./Arrays/ReverseArray.java) [CPP](./Arrays/GFG_ARR_ReverseArray.cpp) |School|O(1)||
|  60  |Three Way Partitioning|[GFG](https://practice.geeksforgeeks.org/problems/three-way-partitioning/1) |[Java](./Arrays/ThreeWayPartitioning.java) |Easy|O(n)||
|  61  |Find Target Indices After Sorting Array|[LC](https://leetcode.com/problems/find-target-indices-after-sorting-array/) |[Java](./Arrays/FindTargetIndicesAfterSortingArray.java) ||O(n)||
|  62  |Minimum Number Of Jumps 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1) |[Java](./Arrays/MinimumJumps.java) |Medium|O(n)||
|  63  |Subarrays With K Different Integers|[LC](https://leetcode.com/problems/subarrays-with-k-different-integers/) |[Java](./Arrays/SubarraysWithKDifferentIntegers.java) ||O(n)||
|  64  |Sort Colors|[LC](https://leetcode.com/problems/sort-colors/) |[Java](./Arrays/ZeroOneTwoSort.java) [CPP](./Arrays/LC_775_SortColors.cpp) ||O(1)||
|  65  |Minimum Size Subarray Sum|[LC](https://leetcode.com/problems/minimum-size-subarray-sum/) |[Java](./Arrays/MinimumSizeSubarraySum.java) [CPP](./Arrays/LC_209_MinSizeSubArraySum.cpp) ||O(1)||
|  66  |Trapping Rain Water|[LC](https://leetcode.com/problems/trapping-rain-water/) |[Java](./Arrays/TrappingRainWater.java) [CPP](./Arrays/LC_42_TrappingRainWater.cpp) ||O(1)||
|  67  |Maximum Subarray|[LC](https://leetcode.com/problems/maximum-subarray/) [GFG](https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1/) |[Java](./Arrays/MaximumSumSubarray.java) [CPP](./Arrays/LC_53_MaximumSubarray.cpp) |Medium|O(1)||
|  68  |Factorials Of Large Numbers2508|[GFG](https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1) |[Java](./Arrays/LargeFactorial.java) |Medium|O(n<sup>2</sup>)||
|  69  |Array Of Alternate Ve And Ve Nos1401|[GFG](https://practice.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1) |[Java](./Arrays/AlternatePositiveNegative.java) |Easy|O(n<sup>2</sup>)||
|  70  |Stock Buy And Sell 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1#) |[CPP](./Arrays/GFG_StockBuyAndSell.cpp) |Medium|O(1)||
|  71  |Maximum Product Subarray3604|[GFG](https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1) |[Java](./Arrays/MaximumProductSubarray.java) |Medium|O(n)||
|  72  |Stickler Theif 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1#) |[CPP](./Arrays/GFG_ARR_MaxSumNonAdj_SticklerThief.cpp) |Easy|O(1)||
|  73  |Leaders In An Array 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1) |[Java](./Arrays/LeadersInArray.java) [CPP](./Arrays/GFG_ARR_LeadersInArray.cpp) |Easy|O(1)||
|  74  |Triplet Sum In Array 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1) |[CPP](./Arrays/GFG_ARR_TripletSum.cpp) |Medium|O(1)||
|  75  |Rotate Array|[LC](https://leetcode.com/problems/rotate-array/) |[Java](./Arrays/RotateArray.java) [CPP](./Arrays/LC_189_ARR_RotateArray.cpp) ||O(1)||
|  76  |Sum Of Middle Elements Of Two Sorted Arrays2305|[GFG](https://practice.geeksforgeeks.org/problems/sum-of-middle-elements-of-two-sorted-arrays2305/1/) |[Java](./Arrays/SumOfMiddleElementsOfTwoSortedArrays.java) |Medium|O(n)||
|  77  |Shortest Unsorted Continuous Subarray|[LC](https://leetcode.com/problems/shortest-unsorted-continuous-subarray/) |[Java](./Arrays/ShortestUnsortedContinuousSubarray.java) ||O(n)||
|  78  |Union Of Two Sorted Arrays|[GFG](https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays/1#) |[Java](./Arrays/UnionSortedArrays.java) [CPP](./Arrays/GFG_UnionTwoSortedArrays.cpp) |Easy|O(1)||
|  79  |Best Time To Buy And Sell Stock Ii|[LC](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/) [GFG](https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1) |[Java](./Arrays/StockBuyAndSell.java) |Medium|O(n)||
|  80  |Intersection Of Two Arrays Ii|[LC](https://leetcode.com/problems/intersection-of-two-arrays-ii/) [GFG](https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1#) [LC](https://leetcode.com/problems/intersection-of-two-arrays/) |[Java](./Arrays/IntersectionArrays.java) [CPP](./Arrays/GFG_IntersectionOfTwoArrays.cpp) |Easy|O(1)||
|  81  |Move Zeroes|[LC](https://leetcode.com/problems/move-zeroes/) |[Java](./Arrays/MoveZeros.java) ||O(n<sup>2</sup>)||
|  82  |Contiguous Array|[LC](https://leetcode.com/problems/contiguous-array/) |[Java](./Arrays/ContiguousArray.java) ||O(n)||
|  83  |Move All Negative Elements To End1813|[GFG](https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1#) |[Java](./Arrays/SegregateNegativePositive.java) [CPP](./Arrays/GFG_MoveAllNegEleToEnd.cpp) |Easy|O(1)||
|  84  |Fruit Into Baskets|[LC](https://leetcode.com/problems/fruit-into-baskets/) |[Java](./Arrays/FruitIntoBaskets.java) ||O(n<sup>2</sup>)||
|  85  |Shortest Subarray With Sum At Least K|[LC](https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k/) |[Java](./Arrays/ShortestSubarrayWithSumAtLeastK.java) ||O(n<sup>2</sup>)||
|  86  |Max Sum Subarray Of Size K5313|[GFG](https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1) |[Java](./Arrays/MaximumSumSubarrayOfSizeK.java) [CPP](./Arrays/GFG_ARR_MaximumSumSubarrayOfSizeK.cpp) |Basic|O(1)||
|  87  |Ways To Make A Fair Array|[LC](https://leetcode.com/problems/ways-to-make-a-fair-array/) |[Java](./Arrays/WaysToMakeAFairArray.java) ||O(n)||
|  88  |Count The Subarrays Having Product Less Than K1708|[GFG](https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1) |[Java](./Arrays/CountSubArrays.java) |Hard|O(n<sup>2</sup>)||
|  89  |Count Subarrays With Equal Number Of 1s And 0s 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/count-subarrays-with-equal-number-of-1s-and-0s-1587115620/1#) |[Java](./Arrays/TotalSubarraysWithEqualZerosAndOnes.java) [CPP](./Arrays/GFG_CountSubarrWithEqual1sAnd0s.cpp) |Medium|O(1)||
|  90  |Max Circular Subarray Sum 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1) |[Java](./Arrays/MaxCircularSubarraySum.java) |Hard|O(n)||
|  91  |Maximize Number Of 1s0905|[GFG](https://practice.geeksforgeeks.org/problems/maximize-number-of-1s0905/1) |[Java](./Arrays/MaximizeOnes.java) |Medium|O(n)||
|  92  |Rotate And Delete 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/rotate-and-delete-1587115621/1) |[Java](./Arrays/RotateAndDelete.java) |Medium|O(n)||
|  93  |Cyclically Rotate An Array By One2614|[GFG](https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1#) |[Java](./Arrays/SingleCyclicRotation.java) [CPP](./Arrays/GFG_CyclicallyRotateAnArrayByOne.cpp) |Basic|O(1)||
|  94  |Dropped Sensor Metric|[BS](https://binarysearch.com/problems/Dropped-Sensor-Metric) |[CPP](./Arrays/BS_DroppedSensorMetric.cpp) ||O(1)||
|  95  |Count Pairs With Given Sum5022|[GFG](https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1) |[Java](./Arrays/CountPairSum.java) |Easy|O(n)||
|  96  |Max Consecutive Ones Iii|[LC](https://leetcode.com/problems/max-consecutive-ones-iii/) |[Java](./Arrays/MaxConsecutiveOnes3.java) ||O(n<sup>2</sup>)||
|  97  |Distinct Absolute Array Elements4529|[GFG](https://practice.geeksforgeeks.org/problems/distinct-absolute-array-elements4529/1#) |[Java](./Arrays/DistinctAbsoluteArrayElements.java) [CPP](./Arrays/GFG_CountDistinct.cpp) |Easy|O(n<sup>2</sup>)||
|  98  |Arithmetic Sequences|[BS](https://binarysearch.com/problems/Arithmetic-Sequences) |[Java](./Arrays/ArithmeticSequences.java) ||O(n<sup>2</sup>)||
|  99  |Product Of Array Except Self|[LC](https://leetcode.com/problems/product-of-array-except-self/) |[Java](./Arrays/ProductPuzzle.java) [CPP](./Arrays/LC_288_ARR_ProductOfArrayExceptSelf.cpp) ||O(1)||
|  100  |Majority Element Ii|[LC](https://leetcode.com/problems/majority-element-ii/) |[CPP](./Arrays/LC_229_MajorityElementII.cpp) ||O(1)||
## BackTracking

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Combination Sum Iii|[LC](https://leetcode.com/problems/combination-sum-iii/) |[Java](./BackTracking/CombinationSum3.java) ||O(n)||
|  2  |Word Break Part 23249|[GFG](https://practice.geeksforgeeks.org/problems/word-break-part-23249/1) |[Java](./BackTracking/WordBreak.java) |Hard|O(n<sup>2</sup>)||
|  3  |Word Search|[LC](https://leetcode.com/problems/word-search/) |[Java](./BackTracking/WordSearch.java) ||O(n<sup>2</sup>)||
|  4  |Generate Parentheses|[LC](https://leetcode.com/problems/generate-parentheses/) |[Java](./BackTracking/GenerateParantheses.java) ||O(n)||
|  5  |N Queens|[LC](https://leetcode.com/problems/n-queens/) |[Java](./BackTracking/NQueenSolver.java) ||O(n<sup>2</sup>)||
|  6  |Combination Sum Ii|[LC](https://leetcode.com/problems/combination-sum-ii/) |[Java](./BackTracking/CombinationSum2.java) ||O(n)||
|  7  |Combination Sum Iv|[LC](https://leetcode.com/problems/combination-sum-iv/) |[Java](./BackTracking/CombinationSum4.java) ||O(n)||
|  8  |Rat In A Maze Problem|[GFG](https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#) |[Java](./BackTracking/RatInMaze.java) [CPP](./BackTracking/GFG_RatInMaze.cpp) |Medium|O(1)||
|  9  |Permutations|[LC](https://leetcode.com/problems/permutations/) [GFG](https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string-1587115620/1#) |[Java](./BackTracking/Permutation.java) [CPP](./BackTracking/GFG_StringPermutations.cpp) |Easy|O(1)||
|  10  |Largest Number In K Swaps 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/largest-number-in-k-swaps-1587115620/1) |[Java](./BackTracking/LargestNumberInKSwaps.java) |Medium|O(n<sup>2</sup>)||
|  11  |Palindrome Partitioning Ii|[LC](https://leetcode.com/problems/palindrome-partitioning-ii/) |[Java](./BackTracking/MinimumNumberOfPartitions.java) ||O(n)||
|  12  |Combination Sum|[LC](https://leetcode.com/problems/combination-sum/) [GFG](https://practice.geeksforgeeks.org/problems/combination-sum-1587115620/1) |[Java](./BackTracking/CombinationSum.java) |Medium|O(n)||
|  13  |Solve The Sudoku 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/solve-the-sudoku-1587115621/1) |[Java](./BackTracking/SudokuSolver.java) |Hard|O(n<sup>2</sup>)||
|  14  |All Unique Permutations Of An Array|[GFG](https://practice.geeksforgeeks.org/problems/all-unique-permutations-of-an-array/1) |[Java](./BackTracking/UniquePermutations.java) |Medium|O(n)||
|  15  |Number Of Paths0926|[GFG](https://practice.geeksforgeeks.org/problems/number-of-paths0926/1#) |[Java](./BackTracking/PossiblePaths.java) [CPP](./BackTracking/GFG_NumOfPaths.cpp) |Easy|O(1)||
|  16  |Palindrome Partitioning|[LC](https://leetcode.com/problems/palindrome-partitioning/) |[Java](./BackTracking/PalindromicPartition.java) ||O(1)||
|  17  |Generate All Possible Parentheses|[GFG](https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1) [LC](https://leetcode.com/problems/generate-parentheses/) |[CPP](./BackTracking/LC_22_GenParenthesis.cpp) |Medium|O(1)||
|  18  |Design Add And Search Words Data Structure|[LC](https://leetcode.com/problems/design-add-and-search-words-data-structure/) |[Java](./BackTracking/AddSearchWord.java) ||O(n<sup>2</sup>)||
|  19  |Permutations Ii|[LC](https://leetcode.com/problems/permutations-ii/) |[Java](./BackTracking/IntegersWithDuplicatesPermutation.java) [CPP](./BackTracking/LC_47_Permutations2.cpp) ||O(n)||
|  20  |Fair Distribution Of Cookies|[LC](https://leetcode.com/problems/fair-distribution-of-cookies/) |[Java](./BackTracking/FairDistributionOfCookies.java) ||O(n)||
|  21  |Find Whether Path Exist5238|[GFG](https://practice.geeksforgeeks.org/problems/find-whether-path-exist5238/1/) |[Java](./BackTracking/FindIfPathExists.java) |Medium|O(n<sup>2</sup>)||
|  22  |Partition Array To K Subsets|[GFG](https://practice.geeksforgeeks.org/problems/partition-array-to-k-subsets/1) |[Java](./BackTracking/FindKPartitions.java) |Hard|O(n)||
|  23  |Word Search Ii|[LC](https://leetcode.com/problems/word-search-ii/) |[Java](./BackTracking/WordSearch2.java) ||O(n<sup>2</sup>)||
## Bit-Magic

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Minimum Updates To Make Bitwise OR Equal To Target|[BS](https://binarysearch.com/problems/Minimum-Updates-to-Make-Bitwise-OR-Equal-to-Target) |[Java](./Bit-Magic/MinimumUpdatesToMakeBitwiseOrEqualToTarget.java) ||O(n)||
|  2  |Ugly Number|[LC](https://leetcode.com/problems/ugly-number/) |[Java](./Bit-Magic/UglyNumber.java) [CPP](./Bit-Magic/LC_263_UglyNumber.cpp) ||O(1)||
|  3  |Maximum Subset Xor|[GFG](https://practice.geeksforgeeks.org/problems/maximum-subset-xor/1/) |[Java](./Bit-Magic/MaximumSubsetXOR.java) |Hard|O(n<sup>2</sup>)||
|  4  |Number Of 1 Bits|[LC](https://leetcode.com/problems/number-of-1-bits/) |[Java](./Bit-Magic/NoOfOneBits.java) [CPP](./Bit-Magic/LC_191_NumberOfBits.cpp) ||O(1)||
|  5  |Finding The Numbers0215|[GFG](https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1#) |[Java](./Bit-Magic/NonRepeatingNumbers.java) |Easy|O(n)||
|  6  |Find Position Of Set Bit3706|[GFG](https://practice.geeksforgeeks.org/problems/find-position-of-set-bit3706/1) |[Java](./Bit-Magic/OnlySetBit.java) [CPP](./Bit-Magic/GFG_FindPosOfSetBit.cpp) |Basic|O(1)||
|  7  |Sum Of Two Numbers Without Using Arithmetic Operators|[GFG](https://practice.geeksforgeeks.org/problems/sum-of-two-numbers-without-using-arithmetic-operators/1/#) |[Java](./Bit-Magic/SumWithoutArithmeticOperators.java) [CPP](./Bit-Magic/GFG_SumWithoutArithmeticOperators.cpp) |Easy|O(1)||
|  8  |Bit Difference 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1) |[Java](./Bit-Magic/BitDifference.java) [CPP](./Bit-Magic/GFG_BitDiff.cpp) |Basic|O(n)||
|  9  |Sum Of Two Integers|[LC](https://leetcode.com/problems/sum-of-two-integers/) |[Java](./Bit-Magic/SumWithoutArithmeticOperatorsNegative.java) [CPP](./Bit-Magic/LC_371_SumWithoutArithmeticOperatorsNegative.cpp) ||O(1)||
|  10  |Missing Number In Array1416|[GFG](https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1) |[Java](./Bit-Magic/FindMissingNumber.java) [CPP](./Bit-Magic/GFG_BIT_CheckMissingNumber.cpp) |Easy|O(n<sup>2</sup>)||
|  11  |Nth Natural Number|[GFG](https://practice.geeksforgeeks.org/problems/nth-natural-number/1#) |[Java](./Bit-Magic/NthNaturalNumber.java) [CPP](./Bit-Magic/GFG_NthNaturalNum.cpp) |Hard|O(1)||
|  12  |Sort By Set Bit Count1153|[GFG](https://practice.geeksforgeeks.org/problems/sort-by-set-bit-count1153/1#) |[Java](./Bit-Magic/SortBySetBitCount.java) |Easy|O(n)||
|  13  |Add Binary|[LC](https://leetcode.com/problems/add-binary/) |[Java](./Bit-Magic/AddBinary.java) [CPP](./Bit-Magic/LC_67_AddBinary.cpp) ||O(n)||
|  14  |Ugly Number Ii|[LC](https://leetcode.com/problems/ugly-number-ii/) |[Java](./Bit-Magic/UglyNumber2.java) [CPP](./Bit-Magic/LC_264_UglyNumberII.cpp) ||O(1)||
|  15  |Count Total Set Bits 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1) |[Java](./Bit-Magic/CountSetBitsInARange.java) [CPP](./Bit-Magic/GFG_CountTotalSetBits.cpp) |Medium|O(n)||
|  16  |Trailing Zeroes In Factorial5134|[GFG](https://practice.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1) |[Java](./Bit-Magic/TrailingZeroes.java) [CPP](./Bit-Magic/GFG_TrainlingZeroesInFactorial.cpp) |Easy|O(1)||
|  17  |Single Number Iii|[LC](https://leetcode.com/problems/single-number-iii/) |[Java](./Bit-Magic/TwoOddOccurringElements.java) [CPP](./Bit-Magic/LC_260_SingleNumber_III.cpp) ||O(1)||
|  18  |Longest Consecutive Run Of 1s In Binary|[BS](https://binarysearch.com/problems/Longest-Consecutive-Run-of-1s-in-Binary) [GFG](https://practice.geeksforgeeks.org/problems/longest-consecutive-1s-1587115620/1) |[Java](./Bit-Magic/LongestConsecutivesRunOfOnesInBinary.java) [CPP](./Bit-Magic/GFG_LongestConsecutive1.cpp) |Easy|O(1)||
|  19  |Maximum Xor After Operations|[LC](https://leetcode.com/problems/maximum-xor-after-operations/) |[Java](./Bit-Magic/MaximumXORAfterOperations.java) ||O(n)||
|  20  |Permutation Sequence|[LC](https://leetcode.com/problems/permutation-sequence/) |[Java](./Bit-Magic/PermutationSequence.java) [CPP](./Bit-Magic/LC_60_PermutationSeq.cpp) ||O(n)||
|  21  |Reverse Bits|[LC](https://leetcode.com/problems/reverse-bits/) [GFG](https://practice.geeksforgeeks.org/problems/reverse-bits-1611130171/1/) |[Java](./Bit-Magic/ReverseBits.java) [CPP](./Bit-Magic/LC_190_GFG_ReverseBits.cpp) |Easy|O(1)||
|  22  |Geek And Function V|[GFG](https://practice.geeksforgeeks.org/problems/geek-and-function-v/0) |[Java](./Bit-Magic/GeekAndFunctionV.java) |Easy|O(n<sup>2</sup>)||
|  23  |Check Whether K Th Bit Is Set Or Not 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1) |[Java](./Bit-Magic/CheckKthBit.java) [CPP](./Bit-Magic/GFG_BIT_Check_Kth_Bit.cpp) |Easy|O(n)||
|  24  |Single Number|[LC](https://leetcode.com/problems/single-number/) |[Java](./Bit-Magic/FindOddOccuringNumber.java) [CPP](./Bit-Magic/LC_136_Bit_SingleNumber.cpp) ||O(n)||
|  25  |Jump Game|[GFG](https://practice.geeksforgeeks.org/problems/jump-game/1/#) |[CPP](./Bit-Magic/GFG_JumpGame.cpp) |Medium|O(1)||
|  26  |Power Of Two|[LC](https://leetcode.com/problems/power-of-two/) |[Java](./Bit-Magic/PowerOfTwo.java) [CPP](./Bit-Magic/LC_231_Power_of_two.cpp) ||O(1)||
## Codeforces

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |617 A|[CF](https://codeforces.com/problemset/problem/617/A) |[Java](./Codeforces/Elephant.java) ||O(1)||
|  2  |158 A|[CF](https://codeforces.com/problemset/problem/158/A) |[Java](./Codeforces/NextRound.java) ||O(1)||
|  3  |1462 C|[CF](https://codeforces.com/problemset/problem/1462/C) |[Java](./Codeforces/UniqueNumber.java) ||O(n<sup>2</sup>)||
|  4  |1401 A|[CF](https://codeforces.com/problemset/problem/1401/A) |[Java](./Codeforces/DistanceAndAxis.java) ||O(n)||
|  5  |1607 H|[CF](https://codeforces.com/problemset/problem/1607/H) |[Java](./Codeforces/BanquetPreparation.java) ||O(n<sup>2</sup>)||
|  6  |768 A|[CF](https://codeforces.com/problemset/problem/768/A) |[Java](./Codeforces/OathOfTheNightsWatch.java) ||O(n)||
|  7  |1426 B|[CF](https://codeforces.com/problemset/problem/1426/B) |[Java](./Codeforces/SymmetricMatrix.java) ||O(n<sup>4</sup>)||
|  8  |112 A|[CF](https://codeforces.com/problemset/problem/112/A) |[Java](./Codeforces/PetyaAndStrings.java) ||O(n)||
|  9  |1343 B|[CF](https://codeforces.com/problemset/problem/1343/B) |[Java](./Codeforces/BalancedArray.java) ||O(n<sup>2</sup>)||
|  10  |1385 B|[CF](https://codeforces.com/problemset/problem/1385/B) |[Java](./Codeforces/RestoreThePermutationByMerger.java) ||O(n<sup>2</sup>)||
|  11  |732 A|[CF](https://codeforces.com/problemset/problem/732/A) |[Java](./Codeforces/BuyAShovel.java) ||O(1)||
|  12  |711 A|[CF](https://codeforces.com/problemset/problem/711/A) |[Java](./Codeforces/BusToUdayLand.java) ||O(n)||
|  13  |50 A|[CF](https://codeforces.com/problemset/problem/50/A) |[Java](./Codeforces/DominoPiling.java) ||O(1)||
|  14  |71 A|[CF](https://codeforces.com/problemset/problem/71/A) |[Java](./Codeforces/WayTooLongWords.java) ||O(n)||
|  15  |1326 B|[CF](https://codeforces.com/problemset/problem/1326/B) |[Java](./Codeforces/Maximums.java) ||O(n)||
|  16  |1324 A|[CF](https://codeforces.com/problemset/problem/1324/A) |[Java](./Codeforces/YetAnotherTetrisProblem.java) ||O(n<sup>2</sup>)||
|  17  |231 A|[CF](https://codeforces.com/problemset/problem/231/A) |[Java](./Codeforces/Team.java) ||O(n)||
|  18  |1368 A|[CF](https://codeforces.com/problemset/problem/1368/A) |[Java](./Codeforces/CPlusEqual.java) ||O(n<sup>2</sup>)||
|  19  |469 A|[CF](https://codeforces.com/problemset/problem/469/A) |[Java](./Codeforces/IWannaBeTheGuy.java) ||O(n)||
|  20  |1475 B|[CF](https://codeforces.com/problemset/problem/1475/B) |[Java](./Codeforces/NewYearsNumber.java) ||O(n)||
|  21  |148 A|[CF](https://codeforces.com/problemset/problem/148/A) |[Java](./Codeforces/InsomniaCure.java) ||O(n)||
|  22  |129 A|[CF](https://codeforces.com/problemset/problem/129/A) |[Java](./Codeforces/Cookies.java) ||O(n)||
|  23  |709 A|[CF](https://codeforces.com/problemset/problem/709/A) |[Java](./Codeforces/Juicer.java) ||O(n)||
|  24  |1208 A|[CF](https://codeforces.com/problemset/problem/1208/A) |[Java](./Codeforces/XORinacci.java) ||O(n)||
|  25  |318 A|[CF](https://codeforces.com/problemset/problem/318/A) |[Java](./Codeforces/EvenOdds.java) ||O(1)||
|  26  |339 A|[CF](https://codeforces.com/problemset/problem/339/A) |[Java](./Codeforces/HelpfulMaths.java) ||O(n)||
|  27  |749 A|[CF](https://codeforces.com/problemset/problem/749/A) |[Java](./Codeforces/BachGoldProblem.java) ||O(n)||
|  28  |200 B|[CF](https://codeforces.com/problemset/problem/200/B) |[Java](./Codeforces/Drinks.java) ||O(n)||
|  29  |999 B|[CF](https://codeforces.com/problemset/problem/999/B) |[Java](./Codeforces/ReversingEncryption.java) ||O(n)||
|  30  |1624 B|[CF](https://codeforces.com/problemset/problem/1624/B) |[Java](./Codeforces/MakeAP.java) ||O(n)||
|  31  |978 B|[CF](https://codeforces.com/problemset/problem/978/B) |[Java](./Codeforces/FileName.java) ||O(n)||
|  32  |496 A|[CF](https://codeforces.com/problemset/problem/496/A) |[Java](./Codeforces/MinimumDifficulty.java) ||O(n)||
|  33  |1560 B|[CF](https://codeforces.com/problemset/problem/1560/B) |[Java](./Codeforces/WhoIsOpposite.java) ||O(n)||
|  34  |1350 A|[CF](https://codeforces.com/problemset/problem/1350/A) |[Java](./Codeforces/OracAndFactors.java) ||O(n<sup>2</sup>)||
|  35  |1543 B|[CF](https://codeforces.com/problemset/problem/1543/B) |[Java](./Codeforces/CustomizingTheTrack.java) ||O(n<sup>2</sup>)||
|  36  |263 A|[CF](https://codeforces.com/problemset/problem/263/A) |[Java](./Codeforces/BeautifulMatrix.java) ||O(n<sup>2</sup>)||
|  37  |282 A|[CF](https://codeforces.com/problemset/problem/282/A) |[Java](./Codeforces/BitParser.java) ||O(n)||
|  38  |439 A|[CF](https://codeforces.com/problemset/problem/439/A) |[Java](./Codeforces/DevuTheSingerAndChuruTheJoker.java) ||O(n)||
|  39  |991 B|[CF](https://codeforces.com/problemset/problem/991/B) |[Java](./Codeforces/GettingAnA.java) ||O(n)||
|  40  |1335 B|[CF](https://codeforces.com/problemset/problem/1335/B) |[Java](./Codeforces/ConstructTheString.java) ||O(n<sup>2</sup>)||
|  41  |1144 B|[CF](https://codeforces.com/problemset/problem/1144/B) |[Java](./Codeforces/ParityAlternatedDeletions.java) ||O(n)||
|  42  |1337 B|[CF](https://codeforces.com/problemset/problem/1337/B) |[Java](./Codeforces/KanaAndDragonQuestGame.java) ||O(n<sup>2</sup>)||
|  43  |115 A|[CF](https://codeforces.com/problemset/problem/115/A) |[Java](./Codeforces/Party.java) ||O(n)||
|  44  |59 A|[CF](https://codeforces.com/problemset/problem/59/A) |[Java](./Codeforces/Word.java) ||O(n)||
|  45  |34 B|[CF](https://codeforces.com/problemset/problem/34/B) |[Java](./Codeforces/Sale.java) ||O(n)||
|  46  |32 B|[CF](https://codeforces.com/problemset/problem/32/B) |[Java](./Codeforces/Borze.java) ||O(n)||
|  47  |320 A|[CF](https://codeforces.com/problemset/problem/320/A) |[Java](./Codeforces/MagicNumbers.java) ||O(n)||
|  48  |1525 B|[CF](https://codeforces.com/problemset/problem/1525/B) |[Java](./Codeforces/PermutationSort.java) ||O(n<sup>2</sup>)||
|  49  |1294 A|[CF](https://codeforces.com/problemset/problem/1294/A) |[Java](./Codeforces/CollectingCoins.java) ||O(n)||
|  50  |490 A|[CF](https://codeforces.com/problemset/problem/490/A) |[Java](./Codeforces/TeamOlympiad.java) ||O(n)||
|  51  |1296 B|[CF](https://codeforces.com/problemset/problem/1296/B) |[Java](./Codeforces/FoodBuying.java) ||O(n<sup>2</sup>)||
|  52  |236 A|[CF](https://codeforces.com/problemset/problem/236/A) |[Java](./Codeforces/BoyOrGirl.java) ||O(n)||
|  53  |443 A|[CF](https://codeforces.com/problemset/problem/443/A) |[Java](./Codeforces/AntonAndLetters.java) ||O(n)||
|  54  |677 A|[CF](https://codeforces.com/problemset/problem/677/A) |[Java](./Codeforces/VanyaAndFence.java) ||O(n)||
|  55  |1325 B|[CF](https://codeforces.com/problemset/problem/1325/B) |[Java](./Codeforces/CopyCopyCopyCopyCopy.java) ||O(n<sup>2</sup>)||
|  56  |750 A|[CF](https://codeforces.com/problemset/problem/750/A) |[Java](./Codeforces/NewYearAndHurry.java) ||O(n)||
|  57  |1559 B|[CF](https://codeforces.com/problemset/problem/1559/B) |[Java](./Codeforces/MochaAndRedAndBlue.java) ||O(n<sup>2</sup>)||
|  58  |1367 B|[CF](https://codeforces.com/problemset/problem/1367/B) |[Java](./Codeforces/EvenArray.java) ||O(n<sup>2</sup>)||
|  59  |580 A|[CF](https://codeforces.com/problemset/problem/580/A) |[Java](./Codeforces/KefaAndFirstSteps.java) ||O(n)||
|  60  |1430 A|[CF](https://codeforces.com/problemset/problem/1430/A) |[Java](./Codeforces/NumberOfApartments.java) ||O(n)||
|  61  |141 A|[CF](https://codeforces.com/problemset/problem/141/A) |[Java](./Codeforces/AmusingJoke.java) ||O(n)||
|  62  |1283 A|[CF](https://codeforces.com/problemset/problem/1283/A) |[Java](./Codeforces/MinutesBeforeNewYear.java) ||O(n)||
|  63  |546 A|[CF](https://codeforces.com/problemset/problem/546/A) |[Java](./Codeforces/SoldierAndBananas.java) ||O(1)||
|  64  |4 A|[CF](https://codeforces.com/problemset/problem/4/A) |[Java](./Codeforces/Watermelon.java) ||O(1)||
|  65  |41 A|[CF](https://codeforces.com/problemset/problem/41/A) |[Java](./Codeforces/Translation.java) ||O(n)||
|  66  |1370 A|[CF](https://codeforces.com/problemset/problem/1370/A) |[Java](./Codeforces/MaximumGCD.java) [CPP](./Codeforces/A1370_MaximumGCD.cpp) ||O(1)||
|  67  |702 A|[CF](https://codeforces.com/problemset/problem/702/A) |[Java](./Codeforces/MaximumIncrease.java) ||O(n)||
|  68  |1353 B|[CF](https://codeforces.com/problemset/problem/1353/B) |[Java](./Codeforces/TwoArraysAndSwap.java) ||O(n<sup>2</sup>)||
|  69  |746 B|[CF](https://codeforces.com/problemset/problem/746/B) |[Java](./Codeforces/Decoding.java) ||O(n)||
|  70  |1374 B|[CF](https://codeforces.com/problemset/problem/1374/B) |[Java](./Codeforces/MultiplyBy2DivideBy6.java) ||O(n)||
|  71  |432 A|[CF](https://codeforces.com/problemset/problem/432/A) |[Java](./Codeforces/ChoosingTeams.java) ||O(n)||
|  72  |474 A|[CF](https://codeforces.com/problemset/problem/474/A) |[Java](./Codeforces/Keyboard.java) ||O(n)||
|  73  |977 B|[CF](https://codeforces.com/problemset/problem/977/B) |[Java](./Codeforces/TwoGram.java) ||O(n)||
|  74  |1311 A|[CF](https://codeforces.com/problemset/problem/1311/A) |[Java](./Codeforces/AddOddOrSubtractEven.java) ||O(n)||
|  75  |1141 B|[CF](https://codeforces.com/problemset/problem/1141/B) |[Java](./Codeforces/MaximalContinuousRest.java) ||O(n)||
|  76  |266 B|[CF](https://codeforces.com/problemset/problem/266/B) |[Java](./Codeforces/QueueAtSchool.java) ||O(n<sup>2</sup>)||
## Disjoint-Set

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Number Of Operations To Make Network Connected|[LC](https://leetcode.com/problems/number-of-operations-to-make-network-connected/) |[Java](./Disjoint-Set/ConnectNetwork.java) ||O(n)||
|  2  |Redundant Connection|[LC](https://leetcode.com/problems/redundant-connection/) |[Java](./Disjoint-Set/RedundantConnection.java) ||O(n)||
|  3  |Number Of Provinces|[GFG](https://practice.geeksforgeeks.org/problems/number-of-provinces/1) [LC](https://leetcode.com/problems/number-of-provinces/) |[Java](./Disjoint-Set/NumberOfProvinces.java) |Medium|O(n<sup>3</sup>)||
|  4  |Accounts Merge|[LC](https://leetcode.com/problems/accounts-merge/) |[Java](./Disjoint-Set/AccountsMerge.java) ||O(n)||
## Dynamic-Programming

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Matrix Block Sum|[LC](https://leetcode.com/problems/matrix-block-sum/) |[Java](./Dynamic-Programming/MatrixBlockSum.java) ||O(n<sup>3</sup>)||
|  2  |Rod Cutting|[BS](https://binarysearch.com/problems/Rod-Cutting) |[Java](./Dynamic-Programming/RodCutting.java) ||O(n)||
|  3  |Count Ways To Reach The Nth Stair 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1) [LC](https://leetcode.com/problems/climbing-stairs/) |[Java](./Dynamic-Programming/CountWaysToNthStair.java) |Medium|O(n)||
|  4  |Cutted Segments1642|[GFG](https://practice.geeksforgeeks.org/problems/cutted-segments1642/1/) |[Java](./Dynamic-Programming/MaximizeCuts.java) |Medium|O(n)||
|  5  |Interleaving String|[LC](https://leetcode.com/problems/interleaving-string/) |[Java](./Dynamic-Programming/InterleavingString.java) ||O(n<sup>2</sup>)||
|  6  |Min Cost Climbing Stairs|[LC](https://leetcode.com/problems/min-cost-climbing-stairs/) |[Java](./Dynamic-Programming/MinCostStairs.java) ||O(n)||
|  7  |Number Of Coins1824|[GFG](https://practice.geeksforgeeks.org/problems/number-of-coins1824/1) |[Java](./Dynamic-Programming/MinimumCoins.java) |Medium|O(n<sup>2</sup>)||
|  8  |Subset Sum Problem2014|[GFG](https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1) |[Java](./Dynamic-Programming/PartitionArray.java) |Medium|O(n)||
|  9  |Partition Equal Subset Sum|[LC](https://leetcode.com/problems/partition-equal-subset-sum/) [BS](https://binarysearch.com/problems/Equal-Partitions) |[Java](./Dynamic-Programming/PartitionEqualSubsetSum.java) ||O(n)||
|  10  |Count Number Of Teams|[LC](https://leetcode.com/problems/count-number-of-teams/) |[Java](./Dynamic-Programming/CountNumberOfTeams.java) ||O(n<sup>3</sup>)||
|  11  |Integer Replacement|[LC](https://leetcode.com/problems/integer-replacement/) |[Java](./Dynamic-Programming/IntegerReplacement.java) ||O(n)||
|  12  |Is Subsequence|[LC](https://leetcode.com/problems/is-subsequence/) |[Java](./Dynamic-Programming/IsSubsequence.java) ||O(n)||
|  13  |Lcs Of Three Strings0028|[GFG](https://practice.geeksforgeeks.org/problems/lcs-of-three-strings0028/1#) |[Java](./Dynamic-Programming/LCS3.java) [CPP](./Dynamic-Programming/GFG_LCS3.cpp) |Medium|O(1)||
|  14  |Minimum Cost For Tickets|[LC](https://leetcode.com/problems/minimum-cost-for-tickets/) |[Java](./Dynamic-Programming/MinimumCostForTickets.java) ||O(n<sup>2</sup>)||
|  15  |Different Ways To Add Parentheses|[LC](https://leetcode.com/problems/different-ways-to-add-parentheses/) |[Java](./Dynamic-Programming/DifferentWaysToAddParentheses.java) ||O(n<sup>3</sup>)||
|  16  |Minimum Falling Path Sum Ii|[LC](https://leetcode.com/problems/minimum-falling-path-sum-ii/) |[Java](./Dynamic-Programming/MinimumFallingPathSum2.java) ||O(n)||
|  17  |Longest Palindromic Subsequence 1612327878|[GFG](https://practice.geeksforgeeks.org/problems/longest-palindromic-subsequence-1612327878/1) |[Java](./Dynamic-Programming/LongestPalindromicSubsequence.java) |Medium|O(n<sup>2</sup>)||
|  18  |House Robber|[LC](https://leetcode.com/problems/house-robber/) |[Java](./Dynamic-Programming/HouseRobber.java) [CPP](./Dynamic-Programming/LC_198_HouseRobber.cpp) ||O(n)||
|  19  |Edit Distance3702|[GFG](https://practice.geeksforgeeks.org/problems/edit-distance3702/1) |[Java](./Dynamic-Programming/EditDistance.java) |Medium|O(n<sup>2</sup>)||
|  20  |Subset Sum Problem 1611555638|[GFG](https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1) |[Java](./Dynamic-Programming/SubsetSum.java) [CPP](./Dynamic-Programming/GFG_SubsetSum.cpp) |Medium|O(1)||
|  21  |Minimum Ascii Delete Sum For Two Strings|[LC](https://leetcode.com/problems/minimum-ascii-delete-sum-for-two-strings/) |[Java](./Dynamic-Programming/MinimumASCIIDeleteSumForTwoStrings.java) ||O(n<sup>2</sup>)||
|  22  |Unique Paths Ii|[LC](https://leetcode.com/problems/unique-paths-ii/) |[Java](./Dynamic-Programming/UniquePathsWithObstacles.java) ||O(n<sup>2</sup>)||
|  23  |Longest Repeating Subsequence2004|[GFG](https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1) |[Java](./Dynamic-Programming/LongestRepeatingSubsequence.java) |Easy|O(n<sup>2</sup>)||
|  24  |Count Square Submatrices With All Ones|[LC](https://leetcode.com/problems/count-square-submatrices-with-all-ones/) |[Java](./Dynamic-Programming/CountCompleteSquaresInMatrix.java) [CPP](./Dynamic-Programming/LC_1277_CountSquareSubmatricesAllOnes.cpp) ||O(n<sup>2</sup>)||
|  25  |Path In Matrix3805|[GFG](https://practice.geeksforgeeks.org/problems/path-in-matrix3805/1) |[Java](./Dynamic-Programming/MaxPathSum.java) |Medium|O(n<sup>2</sup>)||
|  26  |Shortest Common Supersequence0322|[GFG](https://practice.geeksforgeeks.org/problems/shortest-common-supersequence0322/1/) |[Java](./Dynamic-Programming/ShortestCommonSupersequence.java) |Medium|O(n<sup>2</sup>)||
|  27  |Knapsack With Duplicate Items4201|[GFG](https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1#) |[Java](./Dynamic-Programming/UnboundedKnapsack.java) [CPP](./Dynamic-Programming/GFG_01KnapsackDuplicateItems.cpp) |Easy|O(1)||
|  28  |Partition Array For Maximum Sum|[LC](https://leetcode.com/problems/partition-array-for-maximum-sum/) |[Java](./Dynamic-Programming/PartitionArrayForMaximumSum.java) ||O(n<sup>2</sup>)||
|  29  |Paint House Iii|[LC](https://leetcode.com/problems/paint-house-iii/) |[Java](./Dynamic-Programming/PaintHouse3.java) ||O(n)||
|  30  |Integer Break|[LC](https://leetcode.com/problems/integer-break/) |[Java](./Dynamic-Programming/IntegerBreak.java) ||O(n<sup>2</sup>)||
|  31  |Gold Mine Problem2608|[GFG](https://practice.geeksforgeeks.org/problems/gold-mine-problem2608/1/) |[Java](./Dynamic-Programming/GoldMine.java) |Easy|O(n<sup>2</sup>)||
|  32  |Palindromic Substrings|[LC](https://leetcode.com/problems/palindromic-substrings/) |[Java](./Dynamic-Programming/PalindromicSubstrings.java) ||O(n<sup>2</sup>)||
|  33  |Minimum Falling Path Sum|[LC](https://leetcode.com/problems/minimum-falling-path-sum/) |[Java](./Dynamic-Programming/MinimumFallingPathSum.java) [CPP](./Dynamic-Programming/LC_931_MinFallingPathSum.cpp) ||O(1)||
|  34  |Special Keyboard3018|[GFG](https://practice.geeksforgeeks.org/problems/special-keyboard3018/1) |[Java](./Dynamic-Programming/SpecialKeyboard.java) |Medium|O(n<sup>2</sup>)||
|  35  |Triangle|[LC](https://leetcode.com/problems/triangle/) |[Java](./Dynamic-Programming/Triangle.java) ||O(n)||
|  36  |Maximum Profit In Job Scheduling|[LC](https://leetcode.com/problems/maximum-profit-in-job-scheduling/) |[Java](./Dynamic-Programming/WeightedIntervalScheduling.java) ||O(n<sup>2</sup>)||
|  37  |Wildcard Pattern Matching|[GFG](https://practice.geeksforgeeks.org/problems/wildcard-pattern-matching/1) |[Java](./Dynamic-Programming/WildcardMatching.java) |Medium|O(n<sup>2</sup>)||
|  38  |Box Stacking|[GFG](https://practice.geeksforgeeks.org/problems/box-stacking/1/) |[Java](./Dynamic-Programming/BoxStacking.java) |Medium|O(n<sup>2</sup>)||
|  39  |Unique Paths|[LC](https://leetcode.com/problems/unique-paths/) |[Java](./Dynamic-Programming/UniquePaths.java) ||O(n)||
|  40  |Maximum Length Of Repeated Subarray|[LC](https://leetcode.com/problems/maximum-length-of-repeated-subarray/) |[Java](./Dynamic-Programming/MaxLengthRepeatedSubarray.java) ||O(n<sup>2</sup>)||
|  41  |Counting Bits|[LC](https://leetcode.com/problems/counting-bits/) |[Java](./Dynamic-Programming/CountBitsInEachNumber.java) [CPP](./Dynamic-Programming/LC_338_CountingBits.cpp) ||O(n<sup>2</sup>)||
|  42  |Ncr1019|[GFG](https://practice.geeksforgeeks.org/problems/ncr1019/1) |[Java](./Dynamic-Programming/BinomialCoefficients.java) |Medium|O(n<sup>2</sup>)||
|  43  |Word Wrap1646|[GFG](https://practice.geeksforgeeks.org/problems/word-wrap1646/1) |[Java](./Dynamic-Programming/WordWrap.java) |Hard|O(n)||
|  44  |Longest Common Substring1452|[GFG](https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1#) |[CPP](./Dynamic-Programming/GFG_LongestCommonSubstring.cpp) |Medium|O(1)||
|  45  |Longest Sign Alternating Subsequence|[BS](https://binarysearch.com/problems/Longest-Sign-Alternating-Subsequence) |[Java](./Dynamic-Programming/LongestSignAlternatingSequence.java) ||O(n<sup>2</sup>)||
|  46  |Get Maximum In Generated Array|[LC](https://leetcode.com/problems/get-maximum-in-generated-array/) |[Java](./Dynamic-Programming/GetMaximumInGeneratedArray.java) ||O(n)||
|  47  |Reach A Given Score 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/reach-a-given-score-1587115621/1) |[Java](./Dynamic-Programming/ReachAGivenScore.java) |Easy|O(n)||
|  48  |Number Of Longest Increasing Subsequence|[LC](https://leetcode.com/problems/number-of-longest-increasing-subsequence/) |[Java](./Dynamic-Programming/NumberOfLongestIncreasingSubsequences.java) ||O(n<sup>2</sup>)||
|  49  |Get Minimum Squares0538|[GFG](https://practice.geeksforgeeks.org/problems/get-minimum-squares0538/1) |[Java](./Dynamic-Programming/MinimumSquaresSum.java) |Medium|O(n<sup>2</sup>)||
|  50  |Scramble String|[LC](https://leetcode.com/problems/scramble-string/) |[Java](./Dynamic-Programming/ScrambleString.java) ||O(n)||
|  51  |Collecting Coins|[BS](https://binarysearch.com/problems/Collecting-Coins) |[Java](./Dynamic-Programming/CollectingCoins.java) ||O(n)||
|  52  |Rotate Function|[LC](https://leetcode.com/problems/rotate-function/) |[Java](./Dynamic-Programming/RotateFunction.java) ||O(n)||
|  53  |Partition To K Equal Sum Subsets|[LC](https://leetcode.com/problems/partition-to-k-equal-sum-subsets/) |[Java](./Dynamic-Programming/PartitionToKEqualSumSubsets.java) ||O(n)||
|  54  |Maximum Sum Increasing Subsequence4749|[GFG](https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1) |[Java](./Dynamic-Programming/MaximumSumIncreasingSubsequence.java) |Medium|O(n<sup>2</sup>)||
|  55  |Longest Common Subsequence|[LC](https://leetcode.com/problems/longest-common-subsequence/) [GFG](https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1) |[Java](./Dynamic-Programming/LCS.java) |Medium|O(n<sup>3</sup>)||
|  56  |Decode Ways|[LC](https://leetcode.com/problems/decode-ways/) |[Java](./Dynamic-Programming/DecodeWays.java) ||O(n)||
|  57  |Perfect Squares|[LC](https://leetcode.com/problems/perfect-squares/) |[Java](./Dynamic-Programming/PerfectSquare.java) ||O(n<sup>2</sup>)||
|  58  |Longest Palindromic Substring|[LC](https://leetcode.com/problems/longest-palindromic-substring/) |[Java](./Dynamic-Programming/LongestPalindromicSubstring.java) ||O(n)||
|  59  |Regular Expression Matching|[LC](https://leetcode.com/problems/regular-expression-matching/) |[Java](./Dynamic-Programming/RegularExpressionMatching.java) ||O(1)||
|  60  |Palindrome Splitting|[BS](https://binarysearch.com/problems/Palindrome-Splitting) |[Java](./Dynamic-Programming/PalindromeSplitting.java) ||O(n)||
|  61  |Wildcard String Matching1126|[GFG](https://practice.geeksforgeeks.org/problems/wildcard-string-matching1126/1) |[Java](./Dynamic-Programming/WildCardStringMatching.java) |Hard|O(n)||
|  62  |Arithmetic Slices|[LC](https://leetcode.com/problems/arithmetic-slices/) |[Java](./Dynamic-Programming/ArithmeticSlices.java) [CPP](./Dynamic-Programming/LC_413_ArithmeticSlices.cpp) ||O(n<sup>2</sup>)||
|  63  |Maximum Sum Of Elements Not Part Of Lis|[GFG](https://practice.geeksforgeeks.org/problems/maximum-sum-of-elements-not-part-of-lis/1) |[Java](./Dynamic-Programming/MaxSumNotPartOfLIS.java) |Medium|O(n<sup>2</sup>)||
|  64  |Longest Common Subsequence 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1) |[CPP](./Dynamic-Programming/GFG_LCS.cpp) |Medium|O(1)||
|  65  |Minimum Sum Partition3317|[GFG](https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1/) |[Java](./Dynamic-Programming/MinimumSumPartition.java) |Hard|O(n<sup>2</sup>)||
|  66  |Bbt Counter4914|[GFG](https://practice.geeksforgeeks.org/problems/bbt-counter4914/1) |[Java](./Dynamic-Programming/BBTCounter.java) [CPP](./Dynamic-Programming/GFG_bbtCounter.cpp) |Easy|O(n)||
|  67  |Longest Continuous Increasing Subsequence|[LC](https://leetcode.com/problems/longest-continuous-increasing-subsequence/) |[Java](./Dynamic-Programming/LongestContinuousIncreasingSubsequence.java) ||O(n)||
|  68  |Coin Change2448|[GFG](https://practice.geeksforgeeks.org/problems/coin-change2448/1/) [LC](https://leetcode.com/problems/coin-change/) |[Java](./Dynamic-Programming/CoinChange.java) |Medium|O(n<sup>2</sup>)||
|  69  |Count Sorted Vowel Strings|[LC](https://leetcode.com/problems/count-sorted-vowel-strings/) |[Java](./Dynamic-Programming/CountSortedVowelStrings.java) ||O(n<sup>2</sup>)||
|  70  |Minimum Cost Tree From Leaf Values|[LC](https://leetcode.com/problems/minimum-cost-tree-from-leaf-values/) |[Java](./Dynamic-Programming/MinimumCostTreeFromLeafValues.java) ||O(n<sup>2</sup>)||
|  71  |Longest Arithmetic Subsequence Of Given Difference|[LC](https://leetcode.com/problems/longest-arithmetic-subsequence-of-given-difference/) |[Java](./Dynamic-Programming/LongestArithmeticSubsequenceOfGivenDifference.java) ||O(n)||
|  72  |Maximum Score Words Formed By Letters|[LC](https://leetcode.com/problems/maximum-score-words-formed-by-letters/) |[Java](./Dynamic-Programming/MaximumScoreWordFormedByLetters.java) ||O(n<sup>2</sup>)||
|  73  |Beautiful Arrangement|[LC](https://leetcode.com/problems/beautiful-arrangement/solution/) |[Java](./Dynamic-Programming/BeautifulArrangement.java) ||O(n)||
|  74  |Friends Pairing Problem5425|[GFG](https://practice.geeksforgeeks.org/problems/friends-pairing-problem5425/1/) |[Java](./Dynamic-Programming/FriendsPairing.java) |Easy|O(n)||
|  75  |Minimum Path Sum|[LC](https://leetcode.com/problems/minimum-path-sum/submissions/) |[Java](./Dynamic-Programming/MinimumPathSum.java) [CPP](./Dynamic-Programming/LC_64_MinPathSum.cpp) ||O(1)||
|  76  |Minimum Path Cost In A Grid|[LC](https://leetcode.com/problems/minimum-path-cost-in-a-grid/) |[Java](./Dynamic-Programming/MinimumPathCostInAGrid.java) ||O(n<sup>2</sup>)||
|  77  |Painting The Fence3727|[GFG](https://practice.geeksforgeeks.org/problems/painting-the-fence3727/1/) |[Java](./Dynamic-Programming/PaintTheFence.java) |Medium|O(n)||
|  78  |Word Break1352|[GFG](https://practice.geeksforgeeks.org/problems/word-break1352/1) |[Java](./Dynamic-Programming/WordBreak.java) |Medium|O(n<sup>2</sup>)||
|  79  |N Th Tribonacci Number|[LC](https://leetcode.com/problems/n-th-tribonacci-number/) |[Java](./Dynamic-Programming/NthTribonacci.java) ||O(n)||
|  80  |Ones And Zeroes|[LC](https://leetcode.com/problems/ones-and-zeroes/) |[Java](./Dynamic-Programming/OnesAndZeros.java) ||O(n<sup>2</sup>)||
|  81  |Count Square Submatrices|[BS](https://binarysearch.com/problems/Count-Square-Submatrices) |[Java](./Dynamic-Programming/CountSquareSubmatrices.java) ||O(n<sup>2</sup>)||
|  82  |Largest Square Formed In A Matrix0806|[GFG](https://practice.geeksforgeeks.org/problems/largest-square-formed-in-a-matrix0806/1) |[Java](./Dynamic-Programming/MaxSquareOfOnes.java) |Medium|O(n)||
|  83  |Count Numbers With Unique Digits|[LC](https://leetcode.com/problems/count-numbers-with-unique-digits/) |[Java](./Dynamic-Programming/CountNumbersWithUniqueDigits.java) ||O(n<sup>2</sup>)||
|  84  |Target Sum 1626326450|[GFG](https://practice.geeksforgeeks.org/problems/target-sum-1626326450/1) |[Java](./Dynamic-Programming/TargetSum.java) |Medium|O(n<sup>2</sup>)||
|  85  |Minimize The Difference Between Target And Chosen Elements|[LC](https://leetcode.com/problems/minimize-the-difference-between-target-and-chosen-elements/) |[Java](./Dynamic-Programming/MinimizeTheDifferenceBetweenTargetAndChosenElements.java) ||O(n<sup>3</sup>)||
|  86  |Count Primes|[LC](https://leetcode.com/problems/count-primes/) |[Java](./Dynamic-Programming/CountPrimes.java) ||O(n<sup>2</sup>)||
|  87  |Wiggle Subsequence|[LC](https://leetcode.com/problems/wiggle-subsequence/) |[Java](./Dynamic-Programming/WiggleSubsequence.java) [CPP](./Dynamic-Programming/LC_376_WiggleSubsequence.cpp) ||O(1)||
|  88  |Sum Of Floored Pairs|[LC](https://leetcode.com/problems/sum-of-floored-pairs/) |[Java](./Dynamic-Programming/SumOfFlooredPairs.java) ||O(n<sup>3</sup>)||
|  89  |Stickler Theif 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1/) |[Java](./Dynamic-Programming/SticklerThief.java) |Easy|O(n<sup>2</sup>)||
|  90  |K Palindrome|[GFG](https://practice.geeksforgeeks.org/problems/k-palindrome/1) |[Java](./Dynamic-Programming/KPalindrome.java) |Easy|O(n<sup>2</sup>)||
|  91  |Minimum Cost To Fill Given Weight In A Bag1956|[GFG](https://practice.geeksforgeeks.org/problems/minimum-cost-to-fill-given-weight-in-a-bag1956/1) |[Java](./Dynamic-Programming/BuyOranges.java) [CPP](./Dynamic-Programming/GFG_MinCostToFillGivenWeightInABag.cpp) |Medium|O(n<sup>2</sup>)||
|  92  |Nth Catalan Number0817|[GFG](https://practice.geeksforgeeks.org/problems/nth-catalan-number0817/1/) |[Java](./Dynamic-Programming/CatalanNumbers.java) |Easy|O(n<sup>2</sup>)||
|  93  |Matrix Chain Multiplication0303|[GFG](https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1) |[Java](./Dynamic-Programming/MatrixChainMultiplication.java) |Hard|O(n<sup>3</sup>)||
|  94  |Number Of Distinct Roll Sequences|[LC](https://leetcode.com/problems/number-of-distinct-roll-sequences/) |[Java](./Dynamic-Programming/NumberOfDistinctRollSequences.java) ||O(n)||
|  95  |Cherry Pickup Ii|[LC](https://leetcode.com/problems/cherry-pickup-ii/) |[Java](./Dynamic-Programming/CherryPickup2.java) ||O(n<sup>5</sup>)||
|  96  |Sort Integers By The Power Value|[LC](https://leetcode.com/problems/sort-integers-by-the-power-value/) |[Java](./Dynamic-Programming/SortIntegersByThePowerValue.java) ||O(n)||
|  97  |Longest Common Substring|[BS](https://binarysearch.com/problems/Longest-Common-Substring) [GFG](https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1) |[Java](./Dynamic-Programming/LongestCommonSubstring.java) |Medium|O(n)||
|  98  |Longest Bitonic Subsequence|[BS](https://binarysearch.com/problems/Longest-Bitonic-Subsequence) |[Java](./Dynamic-Programming/LongestBitonicSubsequence.java) ||O(n)||
|  99  |Super Ugly Number|[LC](https://leetcode.com/problems/super-ugly-number/) |[Java](./Dynamic-Programming/SuperUglyNumber.java) ||O(n<sup>2</sup>)||
|  100  |Egg Dropping Puzzle 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/egg-dropping-puzzle-1587115620/1) |[Java](./Dynamic-Programming/EggDrop.java) |Medium|O(n<sup>3</sup>)||
|  101  |Largest Divisible Subset|[LC](https://leetcode.com/problems/largest-divisible-subset/) |[Java](./Dynamic-Programming/LargestDivisibleSubset.java) ||O(n<sup>2</sup>)||
|  102  |House Robber Ii|[LC](https://leetcode.com/problems/house-robber-ii/) |[Java](./Dynamic-Programming/HouseRobber2.java) ||O(n)||
|  103  |0 1 Knapsack Problem0945|[GFG](https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1) |[Java](./Dynamic-Programming/BinaryKnapsack.java) [CPP](./Dynamic-Programming/GFG_01Knapsack.cpp) |Medium|O(n<sup>2</sup>)||
|  104  |Delete Characters To Equalize Strings|[BS](https://binarysearch.com/problems/Delete-Characters-to-Equalize-Strings) |[Java](./Dynamic-Programming/DeleteCharactersToEqualizeStrings.java) ||O(n<sup>2</sup>)||
|  105  |Best Time To Buy And Sell Stock Iv|[LC](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/) [GFG](https://practice.geeksforgeeks.org/problems/maximum-profit4657/1) |[Java](./Dynamic-Programming/BestTimeToBuyAndSellStock4.java) |Hard|O(n<sup>2</sup>)||
|  106  |Predict The Winner|[LC](https://leetcode.com/problems/predict-the-winner/) |[Java](./Dynamic-Programming/PredictTheWinner.java) ||O(1)||
|  107  |All Possible Full Binary Trees|[LC](https://leetcode.com/problems/all-possible-full-binary-trees/) |[Java](./Dynamic-Programming/AllPossibleFullBinaryTrees.java) ||O(n<sup>2</sup>)||
|  108  |Count Number Of Ways To Place Houses|[LC](https://leetcode.com/problems/count-number-of-ways-to-place-houses/) |[Java](./Dynamic-Programming/CountNumberOfWaysToPlaceHouses.java) ||O(n)||
|  109  |Number Of Ways2552|[GFG](https://practice.geeksforgeeks.org/problems/number-of-ways2552/1) |[Java](./Dynamic-Programming/NumberOfWays.java) |Medium|O(n)||
|  110  |Skip Tasks To Minimize Work|[BS](https://binarysearch.com/problems/Skip-Tasks-to-Minimize-Work) |[Java](./Dynamic-Programming/SkipTasksToMinimizeWork.java) ||O(n)||
|  111  |Longest Increasing Subsequence|[BS](https://binarysearch.com/problems/Longest-Increasing-Subsequence) [GFG](https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1) |[Java](./Dynamic-Programming/LongestIncreasingSubsequence.java) |Medium|O(n<sup>2</sup>)||
|  112  |Count Palindromic Subsequences|[GFG](https://practice.geeksforgeeks.org/problems/count-palindromic-subsequences/1) |[Java](./Dynamic-Programming/CountLongestPalindromicSubsequences.java) |Medium|O(n<sup>2</sup>)||
## Graph

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Network Delay Time|[LC](https://leetcode.com/problems/network-delay-time/) |[Java](./Graph/NetworkDelayTime.java) ||O(n<sup>2</sup>)||
|  2  |Clone Graph|[LC](https://leetcode.com/problems/clone-graph/) |[Java](./Graph/CloneGraph.java) [CPP](./Graph/LC_133_Graph_CloneGraph.cpp) ||O(n<sup>2</sup>)||
|  3  |Topological Sort|[GFG](https://practice.geeksforgeeks.org/problems/topological-sort/1#) |[Java](./Graph/TopologicalSort.java) [CPP](./Graph/GFG_Graph_TopologicalSort.cpp) |Medium|O(1)||
|  4  |Number Of Provinces|[GFG](https://practice.geeksforgeeks.org/problems/number-of-provinces/1) [LC](https://leetcode.com/problems/number-of-provinces/) |[Java](./Graph/NumberOfProvinces.java) |Medium|O(n<sup>3</sup>)||
|  5  |Course Schedule Iv|[LC](https://leetcode.com/problems/course-schedule-iv/) |[Java](./Graph/CourseSchedule4.java) ||O(n<sup>3</sup>)||
|  6  |Keys And Rooms|[LC](https://leetcode.com/problems/keys-and-rooms/) |[Java](./Graph/KeysAndRooms.java) ||O(n)||
|  7  |Depth First Traversal For A Graph|[GFG](https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1) |[Java](./Graph/DFS.java) [CPP](./Graph/GFG_Graph_DFSTraversal.cpp) |Easy|O(n)||
|  8  |Journey To The Moon|[HR](https://www.hackerrank.com/challenges/journey-to-the-moon/problem) |[Java](./Graph/JourneyToMoon.java) ||O(n)||
|  9  |Euler Circuit And Path|[GFG](https://practice.geeksforgeeks.org/problems/euler-circuit-and-path/1) |[Java](./Graph/EulerCircuitAndPath.java) |Medium|O(n<sup>2</sup>)||
|  10  |Find Eventual Safe States|[LC](https://leetcode.com/problems/find-eventual-safe-states/) |[Java](./Graph/FindEventualSafeStates.java) ||O(n)||
|  11  |Find The City With The Smallest Number Of Neighbors At A Threshold Distance|[LC](https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/) |[Java](./Graph/FindTheCityWithTheSmallestNumberOfNeighboursAtAThresholdDistance.java) ||O(n<sup>2</sup>)||
|  12  |Word Boggle4143|[GFG](https://practice.geeksforgeeks.org/problems/word-boggle4143/1/) |[Java](./Graph/WordBoggle.java) |Medium|O(n)||
|  13  |Unlock Rooms|[BS](https://binarysearch.com/problems/Unlock-Rooms) |[Java](./Graph/UnlockRooms.java) [CPP](./Graph/BS_UnlockRooms.cpp) ||O(1)||
|  14  |Coloring A Border|[LC](https://leetcode.com/problems/coloring-a-border/) |[Java](./Graph/ColoringABorder.java) ||O(n)||
|  15  |Cheapest Flights Within K Stops|[LC](https://leetcode.com/problems/cheapest-flights-within-k-stops/) |[Java](./Graph/CheapestFlightWithinKStops.java) ||O(n<sup>2</sup>)||
|  16  |Course Schedule Ii|[LC](https://leetcode.com/problems/course-schedule-ii/) |[Java](./Graph/CourseSchedule2.java) ||O(n<sup>3</sup>)||
|  17  |Strongly Connected Components Kosarajus Algo|[GFG](https://practice.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1#) |[Java](./Graph/Kosaraju.java) [CPP](./Graph/GFG_Graph_StronglyConnectedComp(Kosaraju).cpp) |Medium|O(1)||
|  18  |269f61832b146dd5e6d89b4ca18cbd2a2654ebbe|[GFG](https://practice.geeksforgeeks.org/problems/269f61832b146dd5e6d89b4ca18cbd2a2654ebbe/1/) |[Java](./Graph/CovidSpread.java) |Medium|O(n<sup>2</sup>)||
|  19  |Word Ladder|[LC](https://leetcode.com/problems/word-ladder/) |[Java](./Graph/WordLadder.java) ||O(n<sup>4</sup>)||
|  20  |Surrounded Regions|[LC](https://leetcode.com/problems/surrounded-regions/) |[Java](./Graph/SurroundedRegions.java) ||O(n)||
|  21  |Possible Bipartition|[LC](https://leetcode.com/problems/possible-bipartition/) |[Java](./Graph/PossibleBipartition.java) ||O(n<sup>3</sup>)||
|  22  |Minimum Cost Path3833|[GFG](https://practice.geeksforgeeks.org/problems/minimum-cost-path3833/1) |[Java](./Graph/MinimumCostPath.java) |Hard|O(n)||
|  23  |Water And Jug Problem|[LC](https://leetcode.com/problems/water-and-jug-problem/) |[Java](./Graph/WaterAndJugProblem.java) ||O(n<sup>3</sup>)||
|  24  |Bridge Edge In Graph|[GFG](https://practice.geeksforgeeks.org/problems/bridge-edge-in-graph/1#) |[Java](./Graph/CheckIfBridge.java) |Medium|O(n)||
|  25  |Number Of Operations To Make Network Connected|[LC](https://leetcode.com/problems/number-of-operations-to-make-network-connected/) |[Java](./Graph/ConnectNetwork.java) ||O(n)||
|  26  |All Paths From Source To Target|[LC](https://leetcode.com/problems/all-paths-from-source-to-target/) |[Java](./Graph/AllPathsFromSourceToTarget.java) ||O(n)||
|  27  |Employee Importance|[LC](https://leetcode.com/problems/employee-importance/) |[Java](./Graph/EmployeeImportance.java) [CPP](./Graph/LC_690_EmployeeImportance.cpp) ||O(n<sup>2</sup>)||
|  28  |Find The Town Judge|[LC](https://leetcode.com/problems/find-the-town-judge/) |[Java](./Graph/FindTownJudge.java) [CPP](./Graph/LC_997_TownJudge.cpp) ||O(n<sup>2</sup>)||
|  29  |Redundant Connection|[LC](https://leetcode.com/problems/redundant-connection/) |[Java](./Graph/RedundantConnection.java) ||O(n)||
|  30  |Shortest Path In Binary Matrix|[LC](https://leetcode.com/problems/shortest-path-in-binary-matrix/) |[Java](./Graph/ShortestPathInBinaryMatrix.java) ||O(n)||
|  31  |Possible Paths Between 2 Vertices 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/possible-paths-between-2-vertices-1587115620/1) |[Java](./Graph/PossiblePathsBetweenTwoVertices.java) |Medium|O(n)||
|  32  |Bfs Traversal Of Graph|[GFG](https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1) |[Java](./Graph/BFS.java) [CPP](./Graph/GFG_Graph_BFSTraversal.cpp) |Easy|O(n<sup>2</sup>)||
|  33  |Course Schedule|[LC](https://leetcode.com/problems/course-schedule/) |[Java](./Graph/CourseSchedule.java) [CPP](./Graph/LC_207_CourseSchedule.cpp) ||O(n<sup>3</sup>)||
|  34  |Reverse Graph|[BS](https://binarysearch.com/problems/Reverse-Graph) |[Java](./Graph/ReverseGraph.java) ||O(n<sup>2</sup>)||
|  35  |Minimum Swaps|[GFG](https://practice.geeksforgeeks.org/problems/minimum-swaps/1) |[Java](./Graph/MinimumSwapsToSort.java) |Medium|O(n<sup>2</sup>)||
|  36  |Implementing Floyd Warshall2042|[GFG](https://practice.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1) |[Java](./Graph/FloydWarshall.java) [CPP](./Graph/GFG_FloydWarshall.cpp) |Medium|O(n)||
|  37  |Number Of Islands|[BS](https://binarysearch.com/problems/Number-of-Islands) [GFG](https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1) |[Java](./Graph/NumberOfIslands.java) |Medium|O(n)||
|  38  |As Far From Land As Possible|[LC](https://leetcode.com/problems/as-far-from-land-as-possible/) |[Java](./Graph/AsFarFromLandAsPossible.java) ||O(n<sup>2</sup>)||
|  39  |Count Unreachable Pairs Of Nodes In An Undirected Graph|[LC](https://leetcode.com/problems/count-unreachable-pairs-of-nodes-in-an-undirected-graph/) |[Java](./Graph/CountUnreachablePairsOfNodesInAnUndirectedGraph.java) ||O(n)||
|  40  |Parallel Courses Iii|[LC](https://leetcode.com/problems/parallel-courses-iii/) |[Java](./Graph/ParallelCourses3.java) ||O(n)||
|  41  |Implementing Dijkstra Set 1 Adjacency Matrix|[GFG](https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1#) |[Java](./Graph/ShortestPath.java) [CPP](./Graph/GFG_Graph_ShortestDistance_Dijkstra.cpp) |Medium|O(1)||
|  42  |Find The Number Of Islands|[GFG](https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1#) |[CPP](./Graph/GFG_Graph_Numof_Islands.cpp) |Medium|O(1)||
|  43  |Print Adjacency List 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1#) |[Java](./Graph/PrintAdjList.java) [CPP](./Graph/GFG_Graph_AdjListPrint.cpp) |Easy|O(1)||
|  44  |Min Cost To Connect All Points|[LC](https://leetcode.com/problems/min-cost-to-connect-all-points/) |[Java](./Graph/MinCostToConnectAllThePoints.java) ||O(n)||
|  45  |Euler Circuit In A Directed Graph|[GFG](https://practice.geeksforgeeks.org/problems/euler-circuit-in-a-directed-graph/1) |[Java](./Graph/EulerCircuit.java) |Medium|O(n<sup>2</sup>)||
|  46  |Find Number Of Closed Islands|[GFG](https://practice.geeksforgeeks.org/problems/find-number-of-closed-islands/1/) [LC](https://leetcode.com/problems/number-of-closed-islands/) |[Java](./Graph/NumberOfClosedIslands.java) |Hard|O(n)||
|  47  |Strongly Connected Component Tarjanss Algo 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/strongly-connected-component-tarjanss-algo-1587115621/1/) |[Java](./Graph/Tarjan.java) |Hard|O(n)||
|  48  |Detect Cycle In A Directed Graph|[GFG](https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1) |[Java](./Graph/DetectCycleInDirectedGraph.java) [CPP](./Graph/GFG_Graph_CycleDetectionDirected.cpp) |Medium|O(n)||
|  49  |Geekss Garden|[GFG](https://practice.geeksforgeeks.org/problems/geekss-garden/0) |[Java](./Graph/GeeksGarden.java) |Easy|O(n<sup>4</sup>)||
|  50  |Detect Cycle In An Undirected Graph|[GFG](https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1) |[Java](./Graph/DetectCycleInUndirectedGraph.java) [CPP](./Graph/GFG_Graph_CycleDetectionUnDirected.cpp) |Medium|O(n)||
|  51  |Rotting Oranges|[LC](https://leetcode.com/problems/rotting-oranges/) |[Java](./Graph/RottenOranges.java) [CPP](./Graph/LC_994_RottigOranges.cpp) ||O(1)||
|  52  |Length Of Largest Region Of 1s 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/length-of-largest-region-of-1s-1587115620/1) |[Java](./Graph/MaxAreaOfOnes.java) |Medium|O(n)||
|  53  |Prerequisite Tasks|[GFG](https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1/) |[Java](./Graph/PrerequisiteTasks.java) |Medium|O(n<sup>2</sup>)||
|  54  |Steps By Knight5927|[GFG](https://practice.geeksforgeeks.org/problems/steps-by-knight5927/1/) |[Java](./Graph/MinimumStepsByKnight.java) |Medium|O(n)||
|  55  |Evaluate Division|[LC](https://leetcode.com/problems/evaluate-division/) |[Java](./Graph/EvaluateDivision.java) ||O(n)||
|  56  |Accounts Merge|[LC](https://leetcode.com/problems/accounts-merge/) |[Java](./Graph/AccountsMerge.java) ||O(n)||
|  57  |Shortest Source To Destination Path3544|[GFG](https://practice.geeksforgeeks.org/problems/shortest-source-to-destination-path3544/1/) |[Java](./Graph/ShortestSourceToDestinationPath.java) |Medium|O(n<sup>2</sup>)||
|  58  |Minimum Spanning Tree|[GFG](https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1) |[Java](./Graph/MinimumSpanningTree.java) [CPP](./Graph/GFG_MST.cpp) |Medium|O(1)||
|  59  |Circle Of Strings4530|[GFG](https://practice.geeksforgeeks.org/problems/circle-of-strings4530/1) |[Java](./Graph/CircleOfStrings.java) |Medium|O(n)||
|  60  |Is Graph Bipartite|[LC](https://leetcode.com/problems/is-graph-bipartite/) [GFG](https://practice.geeksforgeeks.org/problems/bipartite-graph/1) |[Java](./Graph/CheckIfBipartite.java) |Medium|O(n<sup>3</sup>)||
|  61  |Distance From The Source Bellman Ford Algorithm|[GFG](https://practice.geeksforgeeks.org/problems/distance-from-the-source-bellman-ford-algorithm/1/) [GFG](https://practice.geeksforgeeks.org/problems/negative-weight-cycle3504/1) |[Java](./Graph/BellmanFord.java) [CPP](./Graph/GFG_BellmanFord_NegativeCycle.cpp) |Medium|O(n)||
|  62  |X Total Shapes3617|[GFG](https://practice.geeksforgeeks.org/problems/x-total-shapes3617/1/) |[Java](./Graph/XTotalShapes.java) |Medium|O(n<sup>3</sup>)||
|  63  |Time Needed To Inform All Employees|[LC](https://leetcode.com/problems/time-needed-to-inform-all-employees/) |[Java](./Graph/TimeNeededToInformAllEmployees.java) ||O(n<sup>2</sup>)||
|  64  |Where Will The Ball Fall|[LC](https://leetcode.com/problems/where-will-the-ball-fall/) |[Java](./Graph/WhereWillTheBallFall.java) ||O(n<sup>2</sup>)||
## Greedy

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Largest Number With Given Sum 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/largest-number-with-given-sum-1587115620/1) |[Java](./Greedy/LargestNumberPossible.java) |Easy|O(n)||
|  2  |Fractional Knapsack 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1) |[Java](./Greedy/FractionalKnapsack.java) [CPP](./Greedy/GFG_FractionalKnapsack.cpp) |Medium|O(n)||
|  3  |Merge Intervals|[LC](https://leetcode.com/problems/merge-intervals/) |[CPP](./Greedy/LC_56_MergeIntervals.cpp) ||O(n)||
|  4  |Maximize Toys0331|[GFG](https://practice.geeksforgeeks.org/problems/maximize-toys0331/1) |[Java](./Greedy/MaximizeToys.java) [CPP](./Greedy/GFG_MaximizeToys.cpp) |Easy|O(1)||
|  5  |Most Profit Assigning Work|[LC](https://leetcode.com/problems/most-profit-assigning-work/) |[Java](./Greedy/MostProfitAssigningWork.java) ||O(n<sup>2</sup>)||
|  6  |Maximize Sum After K Negations1149|[GFG](https://practice.geeksforgeeks.org/problems/maximize-sum-after-k-negations1149/1) |[Java](./Greedy/MaximumSumAfterKOps.java) |Easy|O(n)||
|  7  |Minimum Cost Of Ropes 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1) |[Java](./Greedy/MinimumCostRope.java) |Easy|O(n)||
|  8  |Shop In Candy Store1145|[GFG](https://practice.geeksforgeeks.org/problems/shop-in-candy-store1145/1) |[Java](./Greedy/BuyCandies.java) |Easy|O(n)||
|  9  |Coin Piles5152|[GFG](https://practice.geeksforgeeks.org/problems/coin-piles5152/1/) |[Java](./Greedy/CoinPiles.java) |Medium|O(n<sup>2</sup>)||
|  10  |Job Sequencing Problem 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1) |[Java](./Greedy/JobScheduling.java) [CPP](./Greedy/GFG_JobSequencing.cpp) |Medium|O(1)||
|  11  |Task Scheduler|[LC](https://leetcode.com/problems/task-scheduler/) |[Java](./Greedy/TaskScheduler.java) ||O(n)||
|  12  |Minimum Time To Make Rope Colorful|[LC](https://leetcode.com/problems/minimum-time-to-make-rope-colorful/) |[Java](./Greedy/MinimumTimeToMakeRopeColorful.java) ||O(n<sup>2</sup>)||
|  13  |Water Connection Problem5822|[GFG](https://practice.geeksforgeeks.org/problems/water-connection-problem5822/1) |[Java](./Greedy/WaterConnection.java) |Medium|O(n)||
|  14  |Hand Of Straights|[LC](https://leetcode.com/problems/hand-of-straights/) |[Java](./Greedy/HandOfStraights.java) ||O(n<sup>2</sup>)||
|  15  |Reducing Dishes|[LC](https://leetcode.com/problems/reducing-dishes/) |[Java](./Greedy/ReducingDishes.java) ||O(n)||
|  16  |Chocolate Distribution Problem3825|[GFG](https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1) |[Java](./Greedy/ChocolateDistribution.java) |Easy|O(n)||
|  17  |N Meetings In One Room 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1/) |[Java](./Greedy/ActivitySelectionProblem.java) [CPP](./Greedy/GFG_ActivitySelection_NMeetingsInOneRoom.cpp) |Easy|O(n)||
|  18  |Pairs With Specific Difference1533|[GFG](https://practice.geeksforgeeks.org/problems/pairs-with-specific-difference1533/1) |[Java](./Greedy/SumOfPairsWithSpecificDifference.java) |Easy|O(n)||
|  19  |Max Length Chain|[GFG](https://practice.geeksforgeeks.org/problems/max-length-chain/1) |[Java](./Greedy/MaxLengthChain.java) [CPP](./Greedy/GFG_MaxLengthChain.cpp) |Medium|O(1)||
|  20  |Huffman Encoding3345|[GFG](https://practice.geeksforgeeks.org/problems/huffman-encoding3345/1) |[Java](./Greedy/HuffmanCoding.java) [CPP](./Greedy/GFG_HuffmanEncoding.cpp) |Medium|O(1)||
## Hashing

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Maximum Repeating Number4858|[GFG](https://practice.geeksforgeeks.org/problems/maximum-repeating-number4858/1) |[CPP](./Hashing/GFG_MostFreq.cpp) |Basic|O(1)||
|  2  |Uncommon Words From Two Sentences|[LC](https://leetcode.com/problems/uncommon-words-from-two-sentences/) |[Java](./Hashing/UncommonWords.java) [CPP](./Hashing/LC_884_UncommonWordsFromTwoSentences.cpp) ||O(1)||
|  3  |Unique Number Of Occurrences|[LC](https://leetcode.com/problems/unique-number-of-occurrences/) |[CPP](./Hashing/LC_1207_HT_UniqueNumOfOccurrences.cpp) ||O(1)||
|  4  |Group Anagrams|[LC](https://leetcode.com/problems/group-anagrams/) |[Java](./Hashing/GroupAnagrams.java) ||O(n<sup>3</sup>)||
|  5  |Count Pairs In Array Divisible By K|[GFG](https://practice.geeksforgeeks.org/problems/count-pairs-in-array-divisible-by-k/1) |[Java](./Hashing/CountPairsInArrayDivisibleByK.java) |Medium|O(n)||
|  6  |Determine If String Halves Are Alike|[LC](https://leetcode.com/problems/determine-if-string-halves-are-alike/) |[Java](./Hashing/DetermineIfStringHalvesAreAlike.java) ||O(n)||
|  7  |Longest Subarray With Sum Divisible By K1259|[GFG](https://practice.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k1259/1) |[Java](./Hashing/LongestSubarrayWithSumDivisibleByK.java) |Medium|O(n)||
|  8  |First Missing Positive|[LC](https://leetcode.com/problems/first-missing-positive/) |[Java](./Hashing/FirstMissingPositive.java) ||O(n)||
|  9  |Underground Tunnel|[BS](https://binarysearch.com/problems/Underground-Tunnel) |[CPP](./Hashing/BS_UndergroundTunnel.cpp) ||O(1)||
|  10  |Design Hashset|[LC](https://leetcode.com/problems/design-hashset/) |[Java](./Hashing/HashSetDesign.java) [CPP](./Hashing/LC_705_DesignHashSet.cpp) ||O(n)||
|  11  |Rank Transform Of An Array|[LC](https://leetcode.com/problems/rank-transform-of-an-array/) |[Java](./Hashing/RankTransformOfAnArray.java) ||O(n<sup>2</sup>)||
|  12  |Longest Palindrome By Concatenating Two Letter Words|[LC](https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/) |[Java](./Hashing/LongestPalindromeByConcatenatingTwoLetterWords.java) ||O(n)||
|  13  |Count Good Meals|[LC](https://leetcode.com/problems/count-good-meals/) |[Java](./Hashing/CountGoodMeals.java) ||O(n<sup>2</sup>)||
|  14  |Repeated Dna Sequences|[LC](https://leetcode.com/problems/repeated-dna-sequences/) |[Java](./Hashing/RepeatedDNASequences.java) ||O(n)||
|  15  |Check If A String Contains All Binary Codes Of Size K|[LC](https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k/) |[Java](./Hashing/CheckAllBinaryCodesPresence.java) ||O(n)||
|  16  |Array Subset Of Another Array2317|[GFG](https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1/) |[Java](./Hashing/ArraySubsetOfAnotherArray.java) |Easy|O(n)||
|  17  |Max Distance Between Same Elements|[GFG](https://practice.geeksforgeeks.org/problems/max-distance-between-same-elements/1#) |[CPP](./Hashing/GFG_MaxDistanceBwTwoElements.cpp) |Easy|O(1)||
|  18  |Points In Straight Line|[GFG](https://practice.geeksforgeeks.org/problems/points-in-straight-line/1#) |[Java](./Hashing/PointsInStraightLine.java) |Hard|O(n<sup>2</sup>)||
|  19  |Continuous Subarray Sum|[LC](https://leetcode.com/problems/continuous-subarray-sum/) |[Java](./Hashing/ContinuousSubarraySum.java) ||O(n<sup>2</sup>)||
|  20  |Count Element Occurences|[GFG](https://practice.geeksforgeeks.org/problems/count-element-occurences/1/) |[Java](./Hashing/CountMoreThanNByKOccurences.java) |Medium|O(n)||
|  21  |Find Common Characters|[LC](https://leetcode.com/problems/find-common-characters/) |[Java](./Hashing/FindCommonCharacters.java) ||O(n<sup>2</sup>)||
|  22  |Ctci Ransom Note|[HR](https://www.hackerrank.com/challenges/ctci-ransom-note/) |[Java](./Hashing/RansomNote.java) ||O(n)||
|  23  |Top K Frequent Words|[LC](https://leetcode.com/problems/top-k-frequent-words/) |[Java](./Hashing/TopKFrequentWords.java) ||O(n)||
|  24  |Find All Duplicates In An Array|[LC](https://leetcode.com/problems/find-all-duplicates-in-an-array/) |[Java](./Hashing/FindDuplicates.java) ||O(n)||
|  25  |Most Common Word|[LC](https://leetcode.com/problems/most-common-word/) |[Java](./Hashing/MostFrequentStringIgnoringBannedOnes.java) ||O(n)||
|  26  |Bulls And Cows|[LC](https://leetcode.com/problems/bulls-and-cows/) |[Java](./Hashing/BullsAndCows.java) ||O(n)||
|  27  |Find All Numbers Disappeared In An Array|[LC](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/) |[Java](./Hashing/FindDisappearedNumbers.java) ||O(n)||
|  28  |Swapping Pairs Make Sum Equal4142|[GFG](https://practice.geeksforgeeks.org/problems/swapping-pairs-make-sum-equal4142/1/) |[Java](./Hashing/SwappingPairsMakeSumEqual.java) |Easy|O(n)||
|  29  |Most Frequent Word In An Array Of Strings3528|[GFG](https://practice.geeksforgeeks.org/problems/most-frequent-word-in-an-array-of-strings3528/1#) |[Java](./Hashing/MostFrequentString.java) [CPP](./Hashing/GFG_MostFreqWordInArrayOfStrings.cpp) |Medium|O(1)||
|  30  |In First But Second5423|[GFG](https://practice.geeksforgeeks.org/problems/in-first-but-second5423/1) |[Java](./Hashing/FindMissingInSecondArray.java) |Medium|O(n)||
|  31  |Palindromic Anagram|[BS](https://binarysearch.com/problems/Palindromic-Anagram) |[Java](./Hashing/PalindromicAnagram.java) ||O(n)||
|  32  |Find Unique Binary String|[LC](https://leetcode.com/problems/find-unique-binary-string/) |[Java](./Hashing/FindMissingBinaryString.java) ||O(n<sup>2</sup>)||
|  33  |Relative Sorting4323|[GFG](https://practice.geeksforgeeks.org/problems/relative-sorting4323/1) |[Java](./Hashing/RelativeSorting.java) |Medium|O(n<sup>2</sup>)||
|  34  |Smallest Intersecting Element|[BS](https://binarysearch.com/problems/Smallest-Intersecting-Element) |[Java](./Hashing/SmallestIntersectingElement.java) ||O(n<sup>2</sup>)||
|  35  |Count Triplets 1|[HR](https://www.hackerrank.com/challenges/count-triplets-1/) |[Java](./Hashing/CountTriplets.java) ||O(n)||
|  36  |Degree Of An Array|[LC](https://leetcode.com/problems/degree-of-an-array/) |[Java](./Hashing/DegreeOfAnArray.java) ||O(n)||
|  37  |Top K Frequent Elements In Array|[GFG](https://practice.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1) |[Java](./Hashing/TopK.java) |Easy|O(n)||
|  38  |Array Pair Sum Divisibility Problem3257|[GFG](https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1/) |[Java](./Hashing/ArrayPairSumDivisibilityProblem.java) |Easy|O(n)||
|  39  |Design Hashmap|[LC](https://leetcode.com/problems/design-hashmap/) |[Java](./Hashing/HashMapDesign.java) [CPP](./Hashing/LC_706_DesignHashMap.cpp) ||O(n)||
|  40  |All Oone Data Structure|[LC](https://leetcode.com/problems/all-oone-data-structure/) |[Java](./Hashing/AllOneDataStructure.java) ||O(1)||
|  41  |First Non Repeating Character In A Stream1216|[GFG](https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1) |[Java](./Hashing/FindFirstNonRepeatingCharacter.java) |Medium|O(n<sup>2</sup>)||
|  42  |Longest Substring Without Repeating Characters|[LC](https://leetcode.com/problems/longest-substring-without-repeating-characters/) |[Java](./Hashing/LongestUniqueSubstring.java) [CPP](./Hashing/GFG_LC3_LongestUniqueSubstring.cpp) ||O(1)||
|  43  |Unique Email Addresses|[LC](https://leetcode.com/problems/unique-email-addresses/) |[Java](./Hashing/UniqueEmailAddresses.java) ||O(n<sup>2</sup>)||
## Heap

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |The K Weakest Rows In A Matrix|[LC](https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/) |[Java](./Heap/KWeakestRowsInMatrix.java) ||O(n)||
|  2  |Find Smallest Range Containing Elements From K Lists|[GFG](https://practice.geeksforgeeks.org/problems/find-smallest-range-containing-elements-from-k-lists/1) |[Java](./Heap/SmallestRangeFromKArrays.java) |Hard|O(n)||
|  3  |Merge K Sorted Arrays|[GFG](https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1#) |[Java](./Heap/MergeKSortedArrays.java) [CPP](./Heap/GFG_MergeKSortedArrays.cpp) |Medium|O(1)||
|  4  |Find Subsequence Of Length K With The Largest Sum|[LC](https://leetcode.com/problems/find-subsequence-of-length-k-with-the-largest-sum/) |[Java](./Heap/FindSubsequenceOfLengthKWithLargestSum.java) ||O(n)||
|  5  |Kth Smallest Element5635|[GFG](https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1/) |[CPP](./Heap/GFG_KthSmallest.cpp) |Medium|O(1)||
|  6  |Minimum Sum4058|[GFG](https://practice.geeksforgeeks.org/problems/minimum-sum4058/1/) |[Java](./Heap/MinimumSum.java) |Medium|O(n)||
|  7  |Kth Largest Element In A Stream|[LC](https://leetcode.com/problems/kth-largest-element-in-a-stream/) |[Java](./Heap/KthLargestFromStream.java) ||O(n)||
|  8  |Minimum Cost Of Ropes 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1) |[Java](./Heap/MinCostOfRopes.java) |Easy|O(n)||
|  9  |Course Schedule Iii|[LC](https://leetcode.com/problems/course-schedule-iii/) |[Java](./Heap/CourseSchedule3.java) ||O(n)||
|  10  |K Largest Elements4206|[GFG](https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1/) |[Java](./Heap/KLargestElements.java) |Medium|O(n)||
|  11  |Merge Two Binary Max Heap0144|[GFG](https://practice.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1/) |[Java](./Heap/MergeTwoBinaryMaxHeaps.java) |Easy|O(n<sup>2</sup>)||
|  12  |Kth Largest Element In An Array|[LC](https://leetcode.com/problems/kth-largest-element-in-an-array/) |[Java](./Heap/KthLargest.java) [CPP](./Heap/LC_215_KthLargestEleInArray.cpp) ||O(n)||
|  13  |Find Median From Data Stream|[LC](https://leetcode.com/problems/find-median-from-data-stream/) [GFG](https://practice.geeksforgeeks.org/problems/find-median-in-a-stream-1587115620/1#.) |[Java](./Heap/MedianOfAStream.java) [CPP](./Heap/LC_295_FindMediaDataStream.cpp) |Hard|O(1)||
|  14  |Top K Frequent Words|[LC](https://leetcode.com/problems/top-k-frequent-words/) |[CPP](./Heap/LC_692_TopKFrequentWords.cpp) ||O(1)||
|  15  |Kth Largest Element In A Stream703.|[LC](https://leetcode.com/problems/kth-largest-element-in-a-stream703.) |[CPP](./Heap/LC_703_KthLargestEleInStream.cpp) ||O(1)||
|  16  |Single Threaded Cpu|[LC](https://leetcode.com/problems/single-threaded-cpu/) |[Java](./Heap/SingleThreadedCPU.java) ||O(n)||
|  17  |K Closest Points To Origin|[LC](https://leetcode.com/problems/k-closest-points-to-origin/) |[Java](./Heap/KClosestPointsToOrigin.java) [CPP](./Heap/LC_973_KClosestPointsToOrigin.cpp) ||O(n)||
|  18  |K Unique String|[BS](https://binarysearch.com/problems/K-Unique-String) |[Java](./Heap/KUniqueString.java) ||O(n)||
|  19  |Sliding Window Median|[LC](https://leetcode.com/problems/sliding-window-median/) |[Java](./Heap/SlidingWindowMedian.java) ||O(n)||
|  20  |Merge K Sorted Lists|[LC](https://leetcode.com/problems/merge-k-sorted-lists/) |[Java](./Heap/MergeKSortedLists.java) [CPP](./Heap/LC_23_MergerKSortedLists.cpp) ||O(1)||
|  21  |Chinky And Diamonds3340|[GFG](https://practice.geeksforgeeks.org/problems/chinky-and-diamonds3340/1) |[Java](./Heap/MaximumDiamonds.java) |Easy|O(n)||
|  22  |K Th Largest Sum Contiguous Subarray|[GFG](https://practice.geeksforgeeks.org/problems/k-th-largest-sum-contiguous-subarray/1/) |[Java](./Heap/KthLargestSumContiguousSubArray.java) |Medium|O(n<sup>2</sup>)||
|  23  |Find Nearest Point That Has The Same X Or Y Coordinate|[LC](https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/) |[Java](./Heap/NearestPoint.java) [CPP](./Heap/LC_1779_FindNearestPointThatHaxSameCoordinate.cpp) ||O(1)||
|  24  |Optimal Decrement|[BS](https://binarysearch.com/problems/Optimal-Decrement) |[Java](./Heap/OptimalDecrement.java) ||O(n)||
|  25  |Is Binary Tree Heap|[GFG](https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1/) |[Java](./Heap/IsHeap.java) |Easy|O(1)||
## Linked-List

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Swap Nodes In Pairs|[LC](https://leetcode.com/problems/swap-nodes-in-pairs/) |[Java](./Linked-List/SwapNodesInPairs.java) [CPP](./Linked-List/LC_24_SwapNodesInPairs.cpp) ||O(1)||
|  2  |Rotate List|[LC](https://leetcode.com/problems/rotate-list/) |[CPP](./Linked-List/LC_61_RotateList.cpp) ||O(n<sup>2</sup>)||
|  3  |Remove All Occurences Of Duplicates In A Linked List|[GFG](https://practice.geeksforgeeks.org/problems/remove-all-occurences-of-duplicates-in-a-linked-list/1) |[Java](./Linked-List/RemoveAllOccurrencesOfDuplicatesInALinkedList.java) |Medium|O(n)||
|  4  |Remove Duplicates From Sorted List Ii|[LC](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/) |[Java](./Linked-List/RemoveDuplicates2.java) ||O(n)||
|  5  |Segregate Even And Odd Nodes In A Linked List5035|[GFG](https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1) |[Java](./Linked-List/SegregateOddEvenNumbers.java) [CPP](./Linked-List/GFG_SegregateEvenOddNodes.cpp) |Easy|O(1)||
|  6  |Linked List Cycle|[LC](https://leetcode.com/problems/linked-list-cycle/) |[Java](./Linked-List/DetectCycle.java) [CPP](./Linked-List/LC_141_DetectCycle.cpp) ||O(n)||
|  7  |Quick Sort On Linked List|[GFG](https://practice.geeksforgeeks.org/problems/quick-sort-on-linked-list/1) |[Java](./Linked-List/QuickSort.java) |Medium|O(n)||
|  8  |Circular Linked List|[GFG](https://practice.geeksforgeeks.org/problems/circular-linked-list/1) |[Java](./Linked-List/CheckIfCircularLinkedList.java) [CPP](./Linked-List/GFG_LinkedL_CheckCircularLinkedList.cpp) |Basic|O(n)||
|  9  |Deletion And Reverse In Linked List|[GFG](https://practice.geeksforgeeks.org/problems/deletion-and-reverse-in-linked-list/1) |[Java](./Linked-List/DeleteAndReverseCircular.java) |Easy|O(n)||
|  10  |Swap Kth Node Values|[BS](https://binarysearch.com/problems/Swap-Kth-Node-Values) |[Java](./Linked-List/SwapKthNodeValues.java) ||O(n)||
|  11  |Reverse A Doubly Linked List|[GFG](https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1) |[Java](./Linked-List/ReverseDoublyLinkedList.java) |Easy|O(n<sup>2</sup>)||
|  12  |Remove Every Kth Node|[GFG](https://practice.geeksforgeeks.org/problems/remove-every-kth-node/1) |[Java](./Linked-List/RemoveEveryKthNode.java) |Easy|O(n)||
|  13  |Merge Sort On Doubly Linked List|[GFG](https://practice.geeksforgeeks.org/problems/merge-sort-on-doubly-linked-list/1) |[Java](./Linked-List/MergeSortDoubly.java) |Medium|O(n)||
|  14  |Check If Linked List Is Pallindrome|[GFG](https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1) |[Java](./Linked-List/CheckPalindrome.java) |Easy|O(n)||
|  15  |Merge Two Sorted Lists|[LC](https://leetcode.com/problems/merge-two-sorted-lists/submissions/) |[Java](./Linked-List/MergeTwoSortedLists.java) ||O(n)||
|  16  |Multiply Two Linked Lists|[GFG](https://practice.geeksforgeeks.org/problems/multiply-two-linked-lists/1) |[Java](./Linked-List/MultiplyLists.java) |Easy|O(n)||
|  17  |Next Greater Node In Linked List|[LC](https://leetcode.com/problems/next-greater-node-in-linked-list/) |[Java](./Linked-List/NextGreaterNodeInLinkedList.java) ||O(n)||
|  18  |Delete Middle Of Linked List|[GFG](https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1) |[Java](./Linked-List/DeleteMiddleNode.java) [CPP](./Linked-List/GFG_DeleteMiddleLinkedList.cpp) |Easy|O(n)||
|  19  |Add Two Numbers Ii|[LC](https://leetcode.com/problems/add-two-numbers-ii/) [GFG](https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1) |[Java](./Linked-List/AddLists2.java) |Easy|O(n)||
|  20  |Delete Nodes Having Greater Value On Right|[GFG](https://practice.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1) |[Java](./Linked-List/FindLeaders.java) |Medium|O(1)||
|  21  |Flattening A Linked List|[GFG](https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1) [LC](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/) |[Java](./Linked-List/FlattenLinkedList.java) |Medium|O(n)||
|  22  |Split A Circular Linked List Into Two Halves|[GFG](https://practice.geeksforgeeks.org/problems/split-a-circular-linked-list-into-two-halves/1) |[Java](./Linked-List/DivideCircularList.java) |Easy|O(n)||
|  23  |Modify Linked List 1|[GFG](https://practice.geeksforgeeks.org/problems/modify-linked-list-1/1) |[Java](./Linked-List/ModifyLinkedList-1.java) |Easy|O(n)||
|  24  |Reverse Linked List Ii|[LC](https://leetcode.com/problems/reverse-linked-list-ii/) |[Java](./Linked-List/ReverseLinkedList2.java) ||O(n)||
|  25  |Remove Duplicates From Sorted List|[LC](https://leetcode.com/problems/remove-duplicates-from-sorted-list/) |[Java](./Linked-List/RemoveDuplicates.java) ||O(n)||
|  26  |Reverse Linked List|[LC](https://leetcode.com/problems/reverse-linked-list/) [BS](https://binarysearch.com/problems/Reverse-a-Linked-List) |[Java](./Linked-List/ReverseList.java) [CPP](./Linked-List/LC_206_LinkedL_ReverseLinkedList.cpp) ||O(1)||
|  27  |Linked List Of Strings Forms A Palindrome|[GFG](https://practice.geeksforgeeks.org/problems/linked-list-of-strings-forms-a-palindrome/1) |[Java](./Linked-List/CombinedStringPalindrome.java) |Easy|O(n)||
|  28  |Linked List Cycle Ii|[LC](https://leetcode.com/problems/linked-list-cycle-ii/) |[Java](./Linked-List/LocateCycle.java) [CPP](./Linked-List/LC_142_LLCyle2.cpp) ||O(1)||
|  29  |Partition List|[LC](https://leetcode.com/problems/partition-list/) |[Java](./Linked-List/PartitionList.java) ||O(n)||
|  30  |Rotate A Linked List|[GFG](https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1) |[Java](./Linked-List/RotateList.java) [CPP](./Linked-List/GFG_RotateLinkedList.cpp) |Medium|O(1)||
|  31  |Intersection Of Two Sorted Linked Lists|[GFG](https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1) |[Java](./Linked-List/IntersectionOfSortedLists.java) |Easy|O(n)||
|  32  |Partition A Linked List Around A Given Value|[GFG](https://practice.geeksforgeeks.org/problems/partition-a-linked-list-around-a-given-value/1/#) |[Java](./Linked-List/Partition.java) [CPP](./Linked-List/GFG_PartitionLL.cpp) |Medium|O(1)||
|  33  |Sorted Insert For Circular Linked List|[GFG](https://practice.geeksforgeeks.org/problems/sorted-insert-for-circular-linked-list/1) |[Java](./Linked-List/SortedInsertForCircularLinkedList.java) |Easy|O(n)||
|  34  |Sort A Linked List|[GFG](https://practice.geeksforgeeks.org/problems/sort-a-linked-list/1) |[Java](./Linked-List/MergeSort.java) |Medium|O(n)||
|  35  |Remove Loop In Linked List|[GFG](https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1) |[Java](./Linked-List/RemoveCycle.java) [CPP](./Linked-List/GFG_RemoveLoopLL.cpp) |Medium|O(1)||
|  36  |Middle Of The Linked List|[LC](https://leetcode.com/problems/middle-of-the-linked-list/) |[Java](./Linked-List/FindMiddleNode.java) [CPP](./Linked-List/LC_876_MiddleOfTheLinkedList.cpp) ||O(n)||
|  37  |Delete N Nodes After M Nodes Of A Linked List|[GFG](https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1) |[Java](./Linked-List/LinkDelete.java) [CPP](./Linked-List/GFG_DeleteNnodesAfterMnodes.cpp) |Easy|O(1)||
|  38  |Add 1 To A Number Represented As Linked List|[GFG](https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1/) |[Java](./Linked-List/AddOne.java) |Easy|O(1)||
|  39  |Given A Linked List Of 0s 1s And 2s Sort It|[GFG](https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1) |[Java](./Linked-List/ZeroOneTwo.java) |Easy|O(n)||
|  40  |Intersection Of Two Linked List|[GFG](https://practice.geeksforgeeks.org/problems/intersection-of-two-linked-list/1) |[Java](./Linked-List/IntersectionOfLists.java) |Easy|O(n)||
|  41  |Polynomial Addition|[GFG](https://practice.geeksforgeeks.org/problems/polynomial-addition/1) |[Java](./Linked-List/PolynomialAddition.java) |Medium|O(n)||
|  42  |Nth Node From End Of Linked List|[GFG](https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1/#) [LC](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) |[Java](./Linked-List/NthNodeFromEnd.java) [CPP](./Linked-List/LC_19_RemoveNthNodeFromEndOfList.cpp) |Easy|O(1)||
|  43  |Length Of Longest Palindrome In Linked List|[GFG](https://practice.geeksforgeeks.org/problems/length-of-longest-palindrome-in-linked-list/1/) |[Java](./Linked-List/LongestPalindromeInLinkedList.java) |Medium|O(n)||
|  44  |Given A Linked List Reverse Alternate Nodes And Append At The End|[GFG](https://practice.geeksforgeeks.org/problems/given-a-linked-list-reverse-alternate-nodes-and-append-at-the-end/) |[Java](./Linked-List/ReverseAlternateNodes.java) |null|O(n)||
|  45  |Decimal Equivalent Of Binary Linked List|[GFG](https://practice.geeksforgeeks.org/problems/decimal-equivalent-of-binary-linked-list/1) |[Java](./Linked-List/DecimalEquivalentOfBinaryLinkedList.java) [CPP](./Linked-List/GFG_DecimalOfBinaryLL.cpp) |Easy|O(n)||
|  46  |Remove Linked List Elements|[LC](https://leetcode.com/problems/remove-linked-list-elements/) |[Java](./Linked-List/RemoveLinkedListElements.java) [CPP](./Linked-List/LC_203_LinkedL_RemoveLinedListElements.cpp) ||O(1)||
|  47  |Interleaved Linked List|[BS](https://binarysearch.com/problems/Interleaved-Linked-List) |[Java](./Linked-List/InterleavedLinkedList.java) ||O(n)||
|  48  |Add Two Numbers|[LC](https://leetcode.com/problems/add-two-numbers/) |[Java](./Linked-List/AddLists.java) ||O(n)||
|  49  |Odd Even Linked List|[LC](https://leetcode.com/problems/odd-even-linked-list/) |[Java](./Linked-List/OddEven.java) [CPP](./Linked-List/LC_328_OddEvenLL.cpp) ||O(1)||
|  50  |Convert Binary Number In A Linked List To Integer|[LC](https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/) |[Java](./Linked-List/ConvertToDecimal.java) ||O(1)||
|  51  |Implement Stack Using Queues|[LC](https://leetcode.com/problems/implement-stack-using-queues/) |[CPP](./Linked-List/LC_225_StackUsingQueue.cpp) ||O(1)||
|  52  |Reverse Nodes In K Group|[LC](https://leetcode.com/problems/reverse-nodes-in-k-group/) |[Java](./Linked-List/ReverseInGroups.java) [CPP](./Linked-List/LC_25_ReverseNodesInKGroup.cpp) ||O(1)||
|  53  |Reverse A Linked List In Groups Of Given Size|[GFG](https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1) |[CPP](./Linked-List/GFG_ReverseLLinGroupsOfGivenSize.cpp) |Medium|O(1)||
|  54  |Merge 2 Sorted Linked List In Reverse Order|[GFG](https://practice.geeksforgeeks.org/problems/merge-2-sorted-linked-list-in-reverse-order/1) |[Java](./Linked-List/ReverseMerging.java) |Easy|O(n)||
|  55  |Clone A Linked List With Next And Random Pointer|[GFG](https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1) |[Java](./Linked-List/CloneList.java) |Hard|O(n)||
|  56  |Linked List That Is Sorted Alternatingly|[GFG](https://practice.geeksforgeeks.org/problems/linked-list-that-is-sorted-alternatingly/1) |[Java](./Linked-List/LinkedListThatIsSortedAlternatingly.java) |Easy|O(n)||
|  57  |Linked List Union|[BS](https://binarysearch.com/problems/Linked-List-Union) |[Java](./Linked-List/LinkedListUnion.java) ||O(n)||
## Matrix

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Search A 2d Matrix|[LC](https://leetcode.com/problems/search-a-2d-matrix/) |[Java](./Matrix/SearchMatrix.java) [CPP](./Matrix/LC_74_Search2DMatrix.cpp) ||O(1)||
|  2  |Prettyprint|[IB](https://www.interviewbit.com/problems/prettyprint/) |[Java](./Matrix/PrettyPrint.java) ||O(n<sup>2</sup>)||
|  3  |Spiral Matrix Ii|[LC](https://leetcode.com/problems/spiral-matrix-ii/) |[Java](./Matrix/SpiralStorage.java) [CPP](./Matrix/LC_59_SpiralMatrixII.cpp) ||O(1)||
|  4  |Set Matrix Zeroes|[LC](https://leetcode.com/problems/set-matrix-zeroes/) |[Java](./Matrix/FillMatrixWithZero.java) [CPP](./Matrix/LC_73_SetMatrixZeroes.cpp) ||O(n<sup>2</sup>)||
|  5  |Find The String In Grid0111|[GFG](https://practice.geeksforgeeks.org/problems/find-the-string-in-grid0111/1) |[Java](./Matrix/MedianInARowWiseSortedMatrix.java) |Medium|O(n)||
|  6  |Find Nth Element Of Spiral Matrix|[GFG](https://practice.geeksforgeeks.org/problems/find-nth-element-of-spiral-matrix/1#) |[Java](./Matrix/NthSpiralElement.java) [CPP](./Matrix/GFG_NthEleOfSpiralMat.cpp) |Medium|O(1)||
|  7  |Reverse Spiral Form Of Matrix4033|[GFG](https://practice.geeksforgeeks.org/problems/reverse-spiral-form-of-matrix4033/1) |[Java](./Matrix/ReverseSpiralTraversal.java) |Medium|O(n<sup>2</sup>)||
|  8  |Conway's Game Of Life|[BS](https://binarysearch.com/problems/Conway's-Game-of-Life) |[Java](./Matrix/ConwaysGameOfLife.java) ||O(n<sup>2</sup>)||
|  9  |Max Rectangle|[GFG](https://practice.geeksforgeeks.org/problems/max-rectangle/1/) |[Java](./Matrix/LargestRectangle.java) |Medium|O(n<sup>2</sup>)||
|  10  |Row With Minimum Number Of 1s5430|[GFG](https://practice.geeksforgeeks.org/problems/row-with-minimum-number-of-1s5430/1) |[Java](./Matrix/RowWithMinimumOnes.java) |Easy|O(n<sup>2</sup>)||
|  11  |Bomber Man|[BS](https://binarysearch.com/problems/Bomber-Man) |[Java](./Matrix/BomberMan.java) [CPP](./Matrix/BS_BomberMan.cpp) ||O(n<sup>2</sup>)||
|  12  |Row With Max 1s0023|[GFG](https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1#) |[Java](./Matrix/MaximumOnes.java) [CPP](./Matrix/GFG_RowWithMax1s.cpp) |Medium|O(1)||
|  13  |Largest Zigzag Sequence5416|[GFG](https://practice.geeksforgeeks.org/problems/largest-zigzag-sequence5416/1) |[Java](./Matrix/LargestZigzagSum.java) |Easy|O(n<sup>3</sup>)||
|  14  |Boundary Elements Of Matrix1102|[GFG](https://practice.geeksforgeeks.org/problems/boundary-elements-of-matrix1102/1) |[Java](./Matrix/BoundaryElements.java) [CPP](./Matrix/GFG_BoundaryTraversal.cpp) |Easy|O(n)||
|  15  |Spiral Matrix|[BS](https://binarysearch.com/problems/Spiral-Matrix) [GFG](https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1) [LC](https://leetcode.com/problems/spiral-matrix/) |[Java](./Matrix/SpiralTraversal.java) |Medium|O(n)||
|  16  |Flood Fill|[LC](https://leetcode.com/problems/flood-fill/) |[CPP](./Matrix/LC_733_Mat_FloodFill.cpp) ||O(1)||
|  17  |Print Diagonally1623|[GFG](https://practice.geeksforgeeks.org/problems/print-diagonally1623/1) |[Java](./Matrix/AntiDiagonalTraversal.java) |Medium|O(n<sup>2</sup>)||
|  18  |Search In A Matrix 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1#) [LC](https://leetcode.com/problems/search-a-2d-matrix-ii/) |[Java](./Matrix/SearchMatrix2.java) [CPP](./Matrix/LC_74_Search2DMatrix-2.cpp) |Medium|O(1)||
|  19  |Spiral Matrix|[LC](https://leetcode.com/problems/spiral-matrix/) |[CPP](./Matrix/LC_54_Spiral.cpp) ||O(1)||
|  20  |Spiral Matrix Iii|[LC](https://leetcode.com/problems/spiral-matrix-iii/) |[Java](./Matrix/SpiralMatrix3.java) ||O(n<sup>2</sup>)||
|  21  |Count Servers That Communicate|[LC](https://leetcode.com/problems/count-servers-that-communicate/) |[Java](./Matrix/CountServers.java) [CPP](./Matrix/LC_1267_CountServersThatCommunicate.cpp) ||O(n<sup>2</sup>)||
|  22  |Boolean Matrix Problem 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/boolean-matrix-problem-1587115620/1) |[Java](./Matrix/BooleanMatrixFlooding.java) [CPP](./Matrix/GFG_BooleanMatrix.cpp) |Medium|O(n<sup>2</sup>)||
|  23  |Minesweeper|[LC](https://leetcode.com/problems/minesweeper/) |[Java](./Matrix/Minesweeper.java) ||O(n<sup>2</sup>)||
|  24  |Game Of Life|[LC](https://leetcode.com/problems/game-of-life/) [BS](https://binarysearch.com/problems/Conway's-Game-of-Life/solutions) |[Java](./Matrix/LifeGame.java) [CPP](./Matrix/LC_289_ConwayGameOfLife.cpp) ||O(1)||
|  25  |Number Of Enclaves|[LC](https://leetcode.com/problems/number-of-enclaves/) [BS](https://binarysearch.com/problems/Enclosed-Islands) |[Java](./Matrix/NumberOfEnclaves.java) ||O(n<sup>2</sup>)||
|  26  |Zero Matrix|[BS](https://binarysearch.com/problems/Zero-Matrix) |[Java](./Matrix/ZeroMatrix.java) ||O(n<sup>2</sup>)||
|  27  |Print Matrix In Diagonal Pattern|[GFG](https://practice.geeksforgeeks.org/problems/print-matrix-in-diagonal-pattern/1) |[Java](./Matrix/DiagonalTraversal.java) |Easy|O(n<sup>2</sup>)||
|  28  |N Lexicographic Integers|[BS](https://binarysearch.com/problems/N-Lexicographic-Integers) |[CPP](./Matrix/BS_NLexicographicIntegers.cpp) ||O(1)||
|  29  |Check If Matrix Is X Matrix|[LC](https://leetcode.com/problems/check-if-matrix-is-x-matrix/) |[Java](./Matrix/CheckIfMatrixIsXMatrix.java) ||O(n)||
|  30  |Transpose Matrix|[LC](https://leetcode.com/problems/transpose-matrix/) |[Java](./Matrix/Transpose.java) [CPP](./Matrix/LC_867_TransposeMatrix.cpp) ||O(n<sup>2</sup>)||
|  31  |Valid Sudoku|[LC](https://leetcode.com/problems/valid-sudoku/) |[Java](./Matrix/IsValidSudoku.java) [CPP](./Matrix/LC_36_ValidSudoko.cpp) ||O(n<sup>3</sup>)||
|  32  |Rotate Matrix Elements Clockwise2336|[GFG](https://practice.geeksforgeeks.org/problems/rotate-matrix-elements-clockwise2336/1) |[Java](./Matrix/RotateMatrixElementsClockwise.java) |Easy|O(n<sup>2</sup>)||
|  33  |Diagonal Morning Assembly0028|[GFG](https://practice.geeksforgeeks.org/problems/diagonal-morning-assembly0028/1/#) [LC](https://leetcode.com/problems/sort-the-matrix-diagonally/) |[Java](./Matrix/SortDiagonally.java) [CPP](./Matrix/LC_1329_SortMatrixDiagonally.cpp) |Medium|O(1)||
|  34  |Rank Of Matrix|[GFG](https://practice.geeksforgeeks.org/problems/rank-of-matrix/0) |[Java](./Matrix/RankOfAMatrix.java) |Medium|O(n<sup>3</sup>)||
|  35  |Rotate Image|[LC](https://leetcode.com/problems/rotate-image/) |[Java](./Matrix/RotateImage.java) [CPP](./Matrix/LC_48_RotateImage.cpp) ||O(1)||
|  36  |Island Perimeter|[LC](https://leetcode.com/problems/island-perimeter/) |[Java](./Matrix/IslandPerimeter.java) ||O(n<sup>2</sup>)||
|  37  |Kth Element In Matrix|[GFG](https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1#) [LC](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/) |[Java](./Matrix/kthSmallestElement.java) [CPP](./Matrix/GFG_KthElementInMatrix.cpp) |Medium|O(1)||
|  38  |Maximum Area Of Triangle|[IB](https://www.interviewbit.com/problems/maximum-area-of-triangle/) |[Java](./Matrix/MaximumAreaOfATriangle.java) ||O(n<sup>2</sup>)||
|  39  |Number Of Palindromic Paths In A Matrix0819|[GFG](https://practice.geeksforgeeks.org/problems/number-of-palindromic-paths-in-a-matrix0819/1#) |[Java](./Matrix/NumberOfPalindromicPathsInMatrix.java) |Medium|O(n)||
## Miscellaneous

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Two Furthest Houses With Different Colors|[LC](https://leetcode.com/problems/two-furthest-houses-with-different-colors/) |[Java](./Miscellaneous/TwoFurthestHousesWithDifferentColors.java) ||O(n<sup>2</sup>)||
|  2  |Excel Sheet Column Title|[LC](https://leetcode.com/problems/excel-sheet-column-title/) |[Java](./Miscellaneous/ExcelSheetColumnTitle.java) ||O(n)||
|  3  |Count Items Matching A Rule|[LC](https://leetcode.com/problems/count-items-matching-a-rule/) |[Java](./Miscellaneous/CountItemsMatchingARule.java) ||O(n)||
|  4  |Smallest Factorial Number5929|[GFG](https://practice.geeksforgeeks.org/problems/smallest-factorial-number5929/1) |[Java](./Miscellaneous/SmallestFactorialNumber.java) [CPP](./Miscellaneous/GFG_Misc_SmallestFactorialNum.cpp) |Easy|O(1)||
|  5  |Binary Search|[GFG](https://practice.geeksforgeeks.org/problems/binary-search/1) |[Java](./Miscellaneous/EatBananasInKHours.java) |Basic|O(n)||
|  6  |Contiguously Increasing Numbers|[BS](https://binarysearch.com/problems/Contiguously-Increasing-Numbers) |[Java](./Miscellaneous/ContiguouslyIncreasingNumbers.java) ||O(n)||
|  7  |Convert A Sentence Into Its Equivalent Mobile Numeric Keypad Sequence0547|[GFG](https://practice.geeksforgeeks.org/problems/convert-a-sentence-into-its-equivalent-mobile-numeric-keypad-sequence0547/1) |[Java](./Miscellaneous/ConvertASentenceIntoItsEquivalentNumericKeypadSequence.java) |Easy|O(n<sup>2</sup>)||
|  8  |Longest Binary Subsequence Less Than Or Equal To K|[LC](https://leetcode.com/problems/longest-binary-subsequence-less-than-or-equal-to-k/) |[Java](./Miscellaneous/LongestBinarySubsequenceLessThanOrEqualToK.java) ||O(n)||
|  9  |K Subarray Sum|[GFG](https://practice.geeksforgeeks.org/problems/k-subarray-sum/0) |[Java](./Miscellaneous/KSubArraySum.java) |Easy|O(n<sup>2</sup>)||
|  10  |Sum Of Two Numbers Without Using Arithmetic Operators|[GFG](https://practice.geeksforgeeks.org/problems/sum-of-two-numbers-without-using-arithmetic-operators/1/#) |[CPP](./Miscellaneous/GFG_Misc_SumWithoutArithmeticOperators.cpp) |Easy|O(1)||
|  11  |Maximum Consecutive Floors Without Special Floors|[LC](https://leetcode.com/problems/maximum-consecutive-floors-without-special-floors/) |[Java](./Miscellaneous/MaximumConsecutiveFloorsWithoutSpeicalFloors.java) ||O(n)||
|  12  |Zigzag Conversion|[LC](https://leetcode.com/problems/zigzag-conversion/) |[Java](./Miscellaneous/ZigzagConversion.java) ||O(1)||
|  13  |Sorting Elements Of An Array By Frequency 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency-1587115621/1) |[Java](./Miscellaneous/SortByFrequency.java) |Medium|O(n<sup>2</sup>)||
|  14  |Geek And Bridges|[GFG](https://practice.geeksforgeeks.org/problems/geek-and-bridges/0) |[Java](./Miscellaneous/GeekAndBridges.java) |Easy|O(n<sup>3</sup>)||
|  15  |Geek Onacci Number|[GFG](https://practice.geeksforgeeks.org/problems/geek-onacci-number/0) |[Java](./Miscellaneous/GeekONacciNumber.java) |Easy|O(n<sup>2</sup>)||
|  16  |Maximum Difference Between Increasing Elements|[LC](https://leetcode.com/problems/maximum-difference-between-increasing-elements/) |[Java](./Miscellaneous/MaximumDifferenceBetweenIncreasingElements.java) ||O(n)||
|  17  |Compressed Vector Product|[BS](https://binarysearch.com/problems/Compressed-Vector-Product) |[Java](./Miscellaneous/CompressedVectorProduct.java) ||O(n)||
|  18  |Min Number Of Flips3210|[GFG](https://practice.geeksforgeeks.org/problems/min-number-of-flips3210/1) |[Java](./Miscellaneous/MinimumNumberOfFlips.java) |Easy|O(n)||
|  19  |Invalid Transactions|[LC](https://leetcode.com/problems/invalid-transactions/) |[Java](./Miscellaneous/InvalidTransactions.java) ||O(n<sup>2</sup>)||
|  20  |Letter Combinations Of A Phone Number|[LC](https://leetcode.com/problems/letter-combinations-of-a-phone-number/) |[Java](./Miscellaneous/LetterCombinations.java) ||O(n)||
|  21  |Sum Of Numbers With Units Digit K|[LC](https://leetcode.com/problems/sum-of-numbers-with-units-digit-k/) |[Java](./Miscellaneous/SumOfNumbersWithUnitsDigitK.java) ||O(n)||
|  22  |Unique Morse Code Words|[LC](https://leetcode.com/problems/unique-morse-code-words/) |[Java](./Miscellaneous/MorseCodeParsing.java) ||O(n<sup>2</sup>)||
|  23  |Best Time To Buy And Sell Stock|[LC](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) |[Java](./Miscellaneous/BestTimeToBuyAndSellStock1.java) ||O(n)||
|  24  |Contiguous Intervals|[BS](https://binarysearch.com/problems/Contiguous-Intervals) |[Java](./Miscellaneous/ContiguousIntervals.java) ||O(n)||
|  25  |Array Of Doubled Pairs|[LC](https://leetcode.com/problems/array-of-doubled-pairs/) |[Java](./Miscellaneous/ArrayOfDoubledPairs.java) ||O(n)||
|  26  |Roman Numeral To Integer|[BS](https://binarysearch.com/problems/Roman-Numeral-to-Integer) |[Java](./Miscellaneous/RomanToInteger.java) ||O(n)||
|  27  |Insert Delete Getrandom O1|[LC](https://leetcode.com/problems/insert-delete-getrandom-o1/) |[Java](./Miscellaneous/InsertDeleteRandom.java) ||O(n)||
|  28  |Minimum Depth Of Binary Tree|[LC](https://leetcode.com/problems/minimum-depth-of-binary-tree/) |[Java](./Miscellaneous/MinDepth.java) ||O(1)||
|  29  |Replace By X|[GFG](https://practice.geeksforgeeks.org/problems/replace-by-x/0) |[Java](./Miscellaneous/ReplaceByX.java) |Easy|O(n)||
|  30  |Print Pattern3549|[GFG](https://practice.geeksforgeeks.org/problems/print-pattern3549/1) |[Java](./Miscellaneous/PrintPattern.java) |Easy|O(1)||
|  31  |Underground Tunnel|[BS](https://binarysearch.com/problems/Underground-Tunnel) |[Java](./Miscellaneous/UndergroundTunnel.java) ||O(n)||
|  32  |You And Your Books|[GFG](https://practice.geeksforgeeks.org/problems/you-and-your-books/1) |[Java](./Miscellaneous/YourBooks.java) |Easy|O(n)||
|  33  |Longest Subarray With Atmost K Even Elements|[GFG](https://practice.geeksforgeeks.org/problems/longest-subarray-with-atmost-k-even-elements/0) |[Java](./Miscellaneous/LongestSubarrayWithAtMostKEvenElements.java) |Easy|O(n<sup>2</sup>)||
|  34  |Design Underground System|[LC](https://leetcode.com/problems/design-underground-system/) |[Java](./Miscellaneous/UnderGroundSystemDesign.java) ||O(n)||
|  35  |Binary Searchable Elements|[GFG](https://practice.geeksforgeeks.org/problems/binary-searchable-elements/1) |[Java](./Miscellaneous/BinarySearchableElements.java) |Medium|O(n)||
|  36  |Replace Every Element With The Least Greater Element On Its Right|[GFG](https://practice.geeksforgeeks.org/problems/replace-every-element-with-the-least-greater-element-on-its-right/1/) |[Java](./Miscellaneous/ReplaceEveryElementWithTheLeastGreaterElementOnItsRight.java) |Hard|O(n)||
|  37  |Check If Number Has Equal Digit Count And Digit Value|[LC](https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value/) |[Java](./Miscellaneous/CheckIfNumberHasEqualDigitCountAndDigitValue.java) ||O(n)||
|  38  |Minimum Operations To Reduce X To Zero|[LC](https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/) |[Java](./Miscellaneous/MinOpsToReduceXToZero.java) ||O(n<sup>2</sup>)||
|  39  |Substring With Concatenation Of All Words|[LC](https://leetcode.com/problems/substring-with-concatenation-of-all-words/) |[Java](./Miscellaneous/SubstringWithConcatenationOfAllWords.java) ||O(n<sup>2</sup>)||
|  40  |Get Watched Videos By Your Friends|[LC](https://leetcode.com/problems/get-watched-videos-by-your-friends/) |[Java](./Miscellaneous/GetWatchedVideosByYourFriends.java) ||O(n<sup>3</sup>)||
|  41  |Sum Of Square Numbers|[LC](https://leetcode.com/problems/sum-of-square-numbers/) |[Java](./Miscellaneous/SumOfSquareNumbers.java) ||O(n<sup>2</sup>)||
|  42  |Elimination Game|[LC](https://leetcode.com/problems/elimination-game/) |[Java](./Miscellaneous/EliminationGame.java) ||O(n<sup>2</sup>)||
|  43  |Shortest Subarray To Be Removed To Make Array Sorted|[LC](https://leetcode.com/problems/shortest-subarray-to-be-removed-to-make-array-sorted/submissions/) |[Java](./Miscellaneous/RemoveShortesSubarray.java) ||O(n)||
|  44  |Basic Calculator|[LC](https://leetcode.com/problems/basic-calculator/) |[Java](./Miscellaneous/BasicCalculator.java) ||O(n<sup>2</sup>)||
|  45  |Zipped Iterator|[BS](https://binarysearch.com/problems/Zipped-Iterator) |[Java](./Miscellaneous/ZippedIterator.java) [CPP](./Miscellaneous/BS_ZippedIterator.cpp) ||O(1)||
|  46  |Dropped Sensor Metric|[BS](https://binarysearch.com/problems/Dropped-Sensor-Metric) |[Java](./Miscellaneous/DroppedSensorMetric.java) ||O(n)||
|  47  |Excel Sheet Column Number|[LC](https://leetcode.com/problems/excel-sheet-column-number/) [BS](https://binarysearch.com/problems/The-Auditor) |[Java](./Miscellaneous/ExcelSheetColumnNumber.java) ||O(n)||
|  48  |Slowest Key|[LC](https://leetcode.com/problems/slowest-key/) |[Java](./Miscellaneous/SlowestKey.java) ||O(n)||
|  49  |Happy Number|[LC](https://leetcode.com/problems/happy-number/) |[Java](./Miscellaneous/HappyNumber.java) ||O(n<sup>2</sup>)||
|  50  |Quadratic Application|[BS](https://binarysearch.com/problems/Quadratic-Application) |[Java](./Miscellaneous/QuadraticApplication.java) ||O(n)||
|  51  |Basic Calculator Ii|[LC](https://leetcode.com/problems/basic-calculator-ii/) |[Java](./Miscellaneous/BasicCalculator2.java) ||O(n<sup>2</sup>)||
|  52  |Best Time To Buy And Sell Stock Iii|[LC](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/) [GFG](https://practice.geeksforgeeks.org/problems/buy-and-sell-a-share-at-most-twice/1/) |[Java](./Miscellaneous/BestTimeToBuyAndSellStock3.java) |Medium|O(n)||
|  53  |Cosmic Number|[GFG](https://practice.geeksforgeeks.org/problems/cosmic-number/0) |[Java](./Miscellaneous/CosmicNumber.java) |Easy|O(n<sup>2</sup>)||
|  54  |Reach The Target|[GFG](https://practice.geeksforgeeks.org/problems/reach-the-target/0) |[Java](./Miscellaneous/ReachTheTarget.java) |Easy|O(n)||
|  55  |Count Asterisks|[LC](https://leetcode.com/problems/count-asterisks/) |[Java](./Miscellaneous/CountAsterisks.java) ||O(n)||
|  56  |Integer To English Words|[LC](https://leetcode.com/problems/integer-to-english-words/) |[Java](./Miscellaneous/IntegerToEnglishWords.java) ||O(n)||
|  57  |Minimum Number Of Increments On Subarrays To Form A Target Array|[LC](https://leetcode.com/problems/minimum-number-of-increments-on-subarrays-to-form-a-target-array/) |[Java](./Miscellaneous/MinimumNumberOfIncrementsOnSubarraysToFormATargetArray.java) ||O(n)||
|  58  |New Year Chaos|[HR](https://www.hackerrank.com/challenges/new-year-chaos/) |[Java](./Miscellaneous/NewYearChaos.java) ||O(n)||
## Queue

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Validate Binary Search Tree|[LC](https://leetcode.com/problems/validate-binary-search-tree/) |[CPP](./Queue/LC_98_ValidateBST.cpp) ||O(1)||
|  2  |Level Order Traversal|[GFG](https://practice.geeksforgeeks.org/problems/level-order-traversal/1/#) [LC](https://leetcode.com/problems/binary-tree-level-order-traversal/) |[CPP](./Queue/LC_102_BinaryTreeLevelOrderTraversal.cpp) |Easy|O(1)||
|  3  |First Negative Integer In Every Window Of Size K3345|[GFG](https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1/) |[Java](./Queue/FirstNegativeIntegerInEveryWindowOfSizeK.java) |Easy|O(n)||
|  4  |N Ary Tree Level Order Traversal|[LC](https://leetcode.com/problems/n-ary-tree-level-order-traversal/) |[CPP](./Queue/LC_429_NaryTreeLevelOrderTraversal.cpp) ||O(1)||
|  5  |Maximum Of All Subarrays Of Size K3101|[GFG](https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1) |[Java](./Queue/MaximumOfAllSubarrays.java) |Medium|O(n)||
|  6  |Sliding Window Maximum|[LC](https://leetcode.com/problems/sliding-window-maximum/) |[Java](./Queue/SlidingWindowMaximum.java) ||O(n<sup>2</sup>)||
|  7  |Page Faults In Lru5603|[GFG](https://practice.geeksforgeeks.org/problems/page-faults-in-lru5603/1) [LC](https://leetcode.com/problems/lru-cache/) |[Java](./Queue/LRUCache.java) |Medium|O(n)||
|  8  |Implement Queue Using Stacks|[LC](https://leetcode.com/problems/implement-queue-using-stacks/) |[Java](./Queue/QueueUsingStack.java) [CPP](./Queue/GFG_ImplQueueUsingStack.cpp) ||O(1)||
|  9  |Height Of Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1/#) [LC](https://leetcode.com/problems/maximum-depth-of-binary-tree/) |[CPP](./Queue/LC_104_MaxDepthBinTree.cpp) |Medium|O(1)||
|  10  |Circular Tour 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/circular-tour-1587115620/1) |[Java](./Queue/CircularTour.java) |Medium|O(n)||
|  11  |Binary Tree Zigzag Level Order Traversal|[LC](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/) |[CPP](./Queue/LC_103_BinaryTreeZigZagLevelOrderTraversal.cpp) ||O(1)||
## Recursion

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Pascals Triangle Ii|[LC](https://leetcode.com/problems/pascals-triangle-ii/) |[Java](./Recursion/PascalsTriangle2.java) [CPP](./Recursion/LC_119_PascalsTriangleII.cpp) ||O(1)||
|  2  |Count Complete Tree Nodes|[LC](https://leetcode.com/problems/count-complete-tree-nodes/) [BS](https://binarysearch.com/problems/Count-Nodes-in-Complete-Binary-Tree) |[CPP](./Recursion/LC_222_CountCompleteTreeNodes.cpp) ||O(1)||
|  3  |Letter Case Permutation|[LC](https://leetcode.com/problems/letter-case-permutation/) |[Java](./Recursion/LetterCasePermutations.java) [CPP](./Recursion/LC_784_LetterCasePermutation.cpp) ||O(1)||
|  4  |Generate Grey Code Sequences|[GFG](https://practice.geeksforgeeks.org/problems/generate-grey-code-sequences/1) [LC](https://leetcode.com/problems/gray-code/) |[Java](./Recursion/generateGrayCode.java) [CPP](./Recursion/LC_89_GrayCode.cpp) |Easy|O(n)||
|  5  |Restore Ip Addresses|[LC](https://leetcode.com/problems/restore-ip-addresses/) [GFG](https://practice.geeksforgeeks.org/problems/generate-ip-addresses/1) |[Java](./Recursion/RestoreIPAddresses.java) |Medium|O(n)||
|  6  |Tower Of Hanoi 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1#) |[Java](./Recursion/TOH.java) [CPP](./Recursion/GFG_TowerOfHanoi.cpp) |Medium|O(1)||
|  7  |Power Set4302|[GFG](https://practice.geeksforgeeks.org/problems/power-set4302/1) |[Java](./Recursion/PowerSet.java) |Easy|O(1)||
|  8  |Flood Fill Algorithm1856|[GFG](https://practice.geeksforgeeks.org/problems/flood-fill-algorithm1856/1) |[Java](./Recursion/FloodFill.java) |Medium|O(1)||
|  9  |Josephus Problem|[GFG](https://practice.geeksforgeeks.org/problems/josephus-problem/1) |[Java](./Recursion/Josephus.java) [CPP](./Recursion/GFG_JosephusProblem.cpp) |Easy|O(1)||
|  10  |Combinations|[LC](https://leetcode.com/problems/combinations/) |[Java](./Recursion/Combinations.java) [CPP](./Recursion/LC_77_Combinations.cpp) ||O(n)||
|  11  |Flood Fill|[LC](https://leetcode.com/problems/flood-fill/) |[CPP](./Recursion/LC_733_FloodFill.cpp) ||O(1)||
|  12  |Subsets 1613027340|[GFG](https://practice.geeksforgeeks.org/problems/subsets-1613027340/1) [LC](https://leetcode.com/problems/subsets/) |[Java](./Recursion/Subsets.java) |Medium|O(1)||
|  13  |Palindrome String0817|[GFG](https://practice.geeksforgeeks.org/problems/palindrome-string0817/1) |[Java](./Recursion/PalindromeString.java) [CPP](./Recursion/GFG_STR_PalindromeString.cpp) |Easy|O(1)||
|  14  |Number Of Paths0926|[GFG](https://practice.geeksforgeeks.org/problems/number-of-paths0926/1) |[Java](./Recursion/NumberOfPaths.java) |Easy|O(n)||
|  15  |Permutations Of A Given String2041|[GFG](https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1/#) |[CPP](./Recursion/GFG_PermutationsOfGivenString.cpp) |Medium|O(1)||
|  16  |Pascals Triangle|[LC](https://leetcode.com/problems/pascals-triangle/) |[Java](./Recursion/PascalsTriangle.java) [CPP](./Recursion/LC_118_PascalTriangle.cpp) ||O(1)||
|  17  |Subsets|[LC](https://leetcode.com/problems/subsets/) |[CPP](./Recursion/LC_78_Subsets.cpp) ||O(1)||
## Searching

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Allocate Minimum Number Of Pages0937|[GFG](https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1/) |[Java](./Searching/AllocateMinimumNumberOfPages.java) |Hard|O(n)||
|  2  |Find Missing And Repeating2512|[GFG](https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1) |[Java](./Searching/FindRepeatingMissing.java) [CPP](./Searching/GFG_FindRepeatingAndMissing.cpp) |Medium|O(n)||
|  3  |Find Pair Given Difference1559|[GFG](https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1) |[Java](./Searching/FindPairWithGivenDifference.java) [CPP](./Searching/GFG_FindPairGivenDifference.cpp) |Easy|O(n)||
|  4  |Convert Sorted List To Binary Search Tree|[LC](https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/) |[Java](./Searching/ConvertSortedListToBinarySearchTree.java) ||O(n)||
|  5  |K Diff Pairs In An Array|[LC](https://leetcode.com/problems/k-diff-pairs-in-an-array/) |[Java](./Searching/CountKDiffUniquePairs.java) [CPP](./Searching/LC_532_KdiffPairsinArray.cpp) ||O(n)||
|  6  |Maximum Value In A Bitonic Array3001|[GFG](https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1/) |[Java](./Searching/BitonicPoint.java) |Easy|O(n)||
|  7  |Triplet Sum In Array 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1) |[Java](./Searching/TripletWithGivenSum.java) [CPP](./Searching/GFG_TripletSum.cpp) |Medium|O(1)||
|  8  |Arithmetic Subarrays|[LC](https://leetcode.com/problems/arithmetic-subarrays/) |[CPP](./Searching/LC_1630_ArithmeticSubarrays.cpp) ||O(1)||
|  9  |Capacity To Ship Packages Within D Days|[GFG](https://practice.geeksforgeeks.org/problems/capacity-to-ship-packages-within-d-days/1) |[Java](./Searching/CapacityToShipPackagesWithinDDays.java) |Medium|O(n)||
|  10  |3sum Closest|[LC](https://leetcode.com/problems/3sum-closest/) |[Java](./Searching/TripletWithSumClosestToGivenSum.java) [CPP](./Searching/LC_16_3SumClosest.cpp) ||O(1)||
|  11  |Minimum Element In A Sorted And Rotated Array3611|[GFG](https://practice.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/1/) |[Java](./Searching/MinimumElementInASortedAndRotatedArray.java) |Easy|O(n)||
|  12  |Binary Search|[GFG](https://practice.geeksforgeeks.org/problems/binary-search/1#) |[CPP](./Searching/GFG_BinarySearch.cpp) |Basic|O(1)||
|  13  |4sum|[LC](https://leetcode.com/problems/4sum/) |[Java](./Searching/CountQuadrupletsWithGivenSum.java) [CPP](./Searching/LC_18_4Sum.cpp) ||O(n<sup>4</sup>)||
|  14  |Find First And Last Position Of Element In Sorted Array|[LC](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) |[Java](./Searching/FirstAndLastPositions.java) [CPP](./Searching/LC_34_FindFirstLastPositionElement.cpp) ||O(1)||
|  15  |Triplets With Sum With Given Range|[GFG](https://practice.geeksforgeeks.org/problems/triplets-with-sum-with-given-range/1/) |[Java](./Searching/CountTripletsWithSumInRange.java) [CPP](./Searching/GFG_TripletSumWithGivenRange.cpp) |Medium|O(n<sup>2</sup>)||
|  16  |Four Elements2452|[GFG](https://practice.geeksforgeeks.org/problems/four-elements2452/1#) |[Java](./Searching/QuadrupletsWithGivenSum.java) [CPP](./Searching/GFG_FourElementsSum.cpp) |Easy|O(1)||
|  17  |Arithmetic Number2815|[GFG](https://practice.geeksforgeeks.org/problems/arithmetic-number2815/1) |[Java](./Searching/FindPresenceInAP.java) [CPP](./Searching/GFG_FindPresenceInAP_ArithmeticNumber.cpp) |Easy|O(1)||
|  18  |Count The Zeros2550|[GFG](https://practice.geeksforgeeks.org/problems/count-the-zeros2550/1) |[CPP](./Searching/GFG_Count_NumOfOnes.cpp) |Easy|O(1)||
|  19  |Minimum Limit Of Balls In A Bag|[LC](https://leetcode.com/problems/minimum-limit-of-balls-in-a-bag/) |[Java](./Searching/MinimumLimitOfBallsInABag.java) ||O(n)||
|  20  |Convert Sorted Array To Binary Search Tree|[LC](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/) |[Java](./Searching/ConvertSortedArrayToBinarySearchTree.java) ||O(n)||
|  21  |Pair With Given Sum In A Sorted Array4940|[GFG](https://practice.geeksforgeeks.org/problems/pair-with-given-sum-in-a-sorted-array4940/1) |[Java](./Searching/CountPairSumInSortedArray.java) [CPP](./Searching/GFG_PairWithGivenSumInSortedArray.cpp) |Easy|O(n)||
|  22  |Find K Closest Elements|[LC](https://leetcode.com/problems/find-k-closest-elements/) |[Java](./Searching/FindKClosestElements.java) [CPP](./Searching/LC_658_FindKClosestElements.cpp) ||O(n)||
|  23  |K Th Element Of Two Sorted Array1317|[GFG](https://practice.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1#) |[CPP](./Searching/GFG_KthEleOfTwoSortedArrays.cpp) |Medium|O(1)||
|  24  |3d27d4683c121c1f152ee8f41279255dc4430cf6|[GFG](https://practice.geeksforgeeks.org/problems/3d27d4683c121c1f152ee8f41279255dc4430cf6/1/#) |[Java](./Searching/TernarySearch.java) [CPP](./Searching/GFG_TernarySearch.cpp) |Medium|O(1)||
|  25  |Square Root|[GFG](https://practice.geeksforgeeks.org/problems/square-root/1/) [LC](https://leetcode.com/problems/sqrtx/) |[Java](./Searching/FindSquareRoot.java) [CPP](./Searching/LC_64_Sqrt_GFG_Sqrt.cpp) |Medium|O(1)||
|  26  |Count Triplets With Sum Smaller Than X5549|[GFG](https://practice.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1) |[Java](./Searching/CountTripletsWithSumSmallerThanX.java) [CPP](./Searching/GFG_TripletsSumSmallerThanX.cpp) |Medium|O(n<sup>2</sup>)||
|  27  |Two Sum|[LC](https://leetcode.com/problems/two-sum/) |[Java](./Searching/PairWithSum.java) [CPP](./Searching/LC_1_TwoSum.cpp) ||O(1)||
|  28  |3sum|[LC](https://leetcode.com/problems/3sum/) |[Java](./Searching/FindTripletsWithGivenSum.java) [CPP](./Searching/LC_15_3Sum.cpp) ||O(n<sup>3</sup>)||
|  29  |Guess Number Higher Or Lower|[LC](https://leetcode.com/problems/guess-number-higher-or-lower/) |[Java](./Searching/GuessHigherLower.java) [CPP](./Searching/LC_374_GuessNumHigherOrLower.cpp) ||O(n)||
|  30  |Two Sum Ii Input Array Is Sorted|[LC](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) |[Java](./Searching/PairWithSumInSortedArray.java) [CPP](./Searching/LC_167_TwoSumII.cpp) ||O(1)||
|  31  |Maximum Distance Between A Pair Of Values|[LC](https://leetcode.com/problems/maximum-distance-between-a-pair-of-values/) |[Java](./Searching/MaximumDistanceBetweenAPairOfValues.java) ||O(n)||
|  32  |Number Of Pairs 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/number-of-pairs-1587115620/1/) |[Java](./Searching/NumberOfPairs.java) |Medium|O(n<sup>2</sup>)||
|  33  |Count Pairs With Given Sum5022|[GFG](https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1#) |[CPP](./Searching/GFG_CountPairsWithGivenSum.cpp) |Easy|O(1)||
|  34  |First Bad Version|[LC](https://leetcode.com/problems/first-bad-version/) |[Java](./Searching/FirstBadVersion.java) [CPP](./Searching/LC_278_FirstBadVersion.cpp) ||O(n)||
|  35  |Search Insert Position Of K In A Sorted Array|[GFG](https://practice.geeksforgeeks.org/problems/search-insert-position-of-k-in-a-sorted-array/1/#) |[Java](./Searching/SearchInsertPosition.java) [CPP](./Searching/GFG_SearchInsertPosInSortedArray.cpp) |Easy|O(1)||
|  36  |Searching In An Array Where Adjacent Differ By At Most K0456|[GFG](https://practice.geeksforgeeks.org/problems/searching-in-an-array-where-adjacent-differ-by-at-most-k0456/1/#) |[CPP](./Searching/GFG_SearchWhereAdjDifferAtmostK.cpp) |Easy|O(1)||
|  37  |Kth Smallest Number In Multiplication Table|[LC](https://leetcode.com/problems/kth-smallest-number-in-multiplication-table/) |[Java](./Searching/KthSmallestInMultiplicationTable.java) [CPP](./Searching/LC_668_KthSmallestNumberInMultiplication.cpp) ||O(n)||
|  38  |Count Possible Triangles 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/count-possible-triangles-1587115620/1/) |[Java](./Searching/CountTriangles.java) [CPP](./Searching/GFG_CountNumOfPossibleTriangles.cpp) |Medium|O(n<sup>3</sup>)||
|  39  |Search In Rotated Sorted Array|[LC](https://leetcode.com/problems/search-in-rotated-sorted-array/) |[Java](./Searching/SortedRotatedArraySearch.java) [CPP](./Searching/LC_33_SearchRotatedSortedArray.cpp) ||O(1)||
## Segment-Tree

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Range Sum Query Mutable|[LC](https://leetcode.com/problems/range-sum-query-mutable/) |[Java](./Segment-Tree/RangeSumQueryMutable.java) ||O(n)||
|  2  |Range Sum Query Immutable|[LC](https://leetcode.com/problems/range-sum-query-immutable/) |[Java](./Segment-Tree/RangeSumQueryImmutable.java) ||O(n)||
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
|  10  |Find All Pairs Whose Sum Is X5808|[GFG](https://practice.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x5808/1/) |[Java](./Sorting/FindAllPairsWithAGivenSum.java) |Easy|O(n)||
|  11  |Activity Selection 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/activity-selection-1587115620/1/) |[Java](./Sorting/ActivitySelection.java) |Easy|O(n)||
## Stack

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Longest Valid Parentheses|[LC](https://leetcode.com/problems/longest-valid-parentheses/) |[Java](./Stack/ValidParenthesesSubstring.java) ||O(n)||
|  2  |Decode The String2444|[GFG](https://practice.geeksforgeeks.org/problems/decode-the-string2444/1) |[Java](./Stack/DecodeString.java) |Easy|O(n)||
|  3  |Implement Two Stacks In An Array|[GFG](https://practice.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1) |[Java](./Stack/TwoStacksInOneArray.java) |Easy|O(n)||
|  4  |Implement Stack Using Array|[GFG](https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1) |[CPP](./Stack/StackUsingArrayImplementation.cpp) |Basic|O(1)||
|  5  |Min Stack|[LC](https://leetcode.com/problems/min-stack/) [GFG](https://practice.geeksforgeeks.org/problems/special-stack/1) |[Java](./Stack/StackWithFindMin.java) |Easy|O(n)||
|  6  |Minimum Swaps For Bracket Balancing2704|[GFG](https://practice.geeksforgeeks.org/problems/minimum-swaps-for-bracket-balancing2704/1) |[Java](./Stack/MinimumSwapsForBracketBalancing.java) |Easy|O(n<sup>2</sup>)||
|  7  |Design A Stack With Increment Operation|[LC](https://leetcode.com/problems/design-a-stack-with-increment-operation/) |[Java](./Stack/StackWithIncrementOperation.java) ||O(n<sup>2</sup>)||
|  8  |Next Greater Element I|[LC](https://leetcode.com/problems/next-greater-element-i/) |[Java](./Stack/NextGreaterElement.java) [CPP](./Stack/LC_469_NextGreaterEle1.cpp) ||O(1)||
|  9  |The Celebrity Problem|[GFG](https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1) |[Java](./Stack/CelebrityProblem.java) |Medium|O(n<sup>2</sup>)||
|  10  |Maximum Of Minimum For Every Window Size3453|[GFG](https://practice.geeksforgeeks.org/problems/maximum-of-minimum-for-every-window-size3453/1#) |[Java](./Stack/MaxOfMins.java) |Hard|O(n<sup>2</sup>)||
|  11  |Stock Span Problem 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1#) |[Java](./Stack/StockSpanProblem.java) [CPP](./Stack/GFG_StockSpanP.cpp) |Medium|O(1)||
|  12  |Fab3dbbdce746976ba35c7b9b24afde40eae5a04|[GFG](https://practice.geeksforgeeks.org/problems/fab3dbbdce746976ba35c7b9b24afde40eae5a04/1) |[Java](./Stack/HelpClassmates.java) |Medium|O(n<sup>2</sup>)||
|  13  |Evaluate Reverse Polish Notation|[LC](https://leetcode.com/problems/evaluate-reverse-polish-notation/) |[CPP](./Stack/GFG_LC_EvaluationOfPostFix.cpp) ||O(1)||
|  14  |Infix To Postfix 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1#) |[Java](./Stack/InfixToPostfix.java) [CPP](./Stack/GFG_InfxToPostFix.cpp) |Easy|O(1)||
|  15  |Largest Rectangle In Histogram|[LC](https://leetcode.com/problems/largest-rectangle-in-histogram/) [GFG](https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1) |[Java](./Stack/LargestRectangleInHistogram.java) |Medium|O(n)||
|  16  |Number Of Visible People In A Queue|[LC](https://leetcode.com/problems/number-of-visible-people-in-a-queue/) |[Java](./Stack/NumberOfVisiblePeopleInAQueue.java) ||O(n<sup>2</sup>)||
|  17  |Implement Stack Using Linked List|[GFG](https://practice.geeksforgeeks.org/problems/implement-stack-using-linked-list/1) |[CPP](./Stack/StackUsingLinkListImplementation.cpp) |Basic|O(1)||
|  18  |Stack Permutations|[GFG](https://practice.geeksforgeeks.org/problems/stack-permutations/1/) |[Java](./Stack/StackPermutations.java) |Medium|O(n<sup>2</sup>)||
|  19  |Simplify Path|[LC](https://leetcode.com/problems/simplify-path/) |[Java](./Stack/ParsePath.java) ||O(n)||
|  20  |Implement Stack Using Queues|[LC](https://leetcode.com/problems/implement-stack-using-queues/) |[Java](./Stack/StackUsingQueue.java) ||O(n)||
|  21  |Circular Greater Element To The Right|[BS](https://binarysearch.com/problems/Circular-Greater-Element-to-the-Right) [LC](https://leetcode.com/problems/next-greater-element-ii/) |[Java](./Stack/NextGreaterElementCircular.java) ||O(n<sup>2</sup>)||
|  22  |Evaluation Of Postfix Expression1735|[GFG](https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1) [LC](https://leetcode.com/problems/evaluate-reverse-polish-notation/) |[Java](./Stack/PostfixEvaluation.java) |Easy|O(n)||
|  23  |Count The Reversals0401|[GFG](https://practice.geeksforgeeks.org/problems/count-the-reversals0401/1) |[Java](./Stack/CountTheReversals.java) |Medium|O(n)||
|  24  |Valid Parentheses|[LC](https://leetcode.com/problems/valid-parentheses/) |[Java](./Stack/ValidParentheses.java) [CPP](./Stack/LC_20_ValidParentheses.cpp) ||O(1)||
|  25  |Daily Temperatures|[LC](https://leetcode.com/problems/daily-temperatures/) |[Java](./Stack/DailyTemperatures.java) ||O(n<sup>2</sup>)||
|  26  |Online Stock Span|[LC](https://leetcode.com/problems/online-stock-span/) |[Java](./Stack/OnlineStockSpanProblem.java) ||O(n)||
|  27  |Sort A Stack|[GFG](https://practice.geeksforgeeks.org/problems/sort-a-stack/1) |[Java](./Stack/SortStack.java) |Easy|O(n<sup>2</sup>)||
## Strings

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Isomorphic Strings 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1) |[Java](./Strings/IsomorphicStrings.java) |Easy|O(n)||
|  2  |Lexicographically Smallest String Of Distance K|[BS](https://binarysearch.com/problems/Lexicographically-Smallest-String-of-Distance-K) |[Java](./Strings/LexicographicallySmallestStringOfDistanceK.java) ||O(n)||
|  3  |Longest Palindrome|[LC](https://leetcode.com/problems/longest-palindrome/) |[Java](./Strings/LongestPalindrome.java) ||O(n)||
|  4  |Largest Anagram Group|[BS](https://binarysearch.com/problems/Largest-Anagram-Group) |[Java](./Strings/LargestAnagramGroup.java) ||O(n)||
|  5  |Get Equal Substrings Within Budget|[LC](https://leetcode.com/problems/get-equal-substrings-within-budget/) |[Java](./Strings/GetEqualSubstringsWithinBudget.java) ||O(n)||
|  6  |Truncate Sentence|[LC](https://leetcode.com/problems/truncate-sentence/) |[Java](./Strings/TruncateSentence.java) ||O(n)||
|  7  |Rearrange Spaces Between Words|[LC](https://leetcode.com/problems/rearrange-spaces-between-words/) |[Java](./Strings/RearrangeSpaces.java) [CPP](./Strings/LC_1592_STR_RearrangeSpaceBwWords.cpp) ||O(1)||
|  8  |Count Number Of Homogenous Substrings|[LC](https://leetcode.com/problems/count-number-of-homogenous-substrings/) |[Java](./Strings/CountHomogeneousSubstrings.java) [CPP](./Strings/LC_1759_STR_CountNumOfHomogenousSubstring.cpp) ||O(n)||
|  9  |Sentence Reversal|[BS](https://binarysearch.com/problems/Sentence-Reversal) |[CPP](./Strings/BS_SentenceReversal.cpp) ||O(1)||
|  10  |Minimum Changes To Make Alternating Binary String|[LC](https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/) |[Java](./Strings/MinimumChangesToMakeAlternatingBinaryString.java) ||O(n)||
|  11  |Validate Ip Address|[LC](https://leetcode.com/problems/validate-ip-address/) |[Java](./Strings/ValidateIPAddressLeetcode.java) ||O(n)||
|  12  |Goat Latin|[LC](https://leetcode.com/problems/goat-latin/) |[Java](./Strings/GoatLatin.java) ||O(n)||
|  13  |Minimum Indexed Character 1587115620|[GFG](https://practice.geeksforgeeks.org/problems/minimum-indexed-character-1587115620/1/) |[Java](./Strings/MinimumIndexedCharacter.java) |Easy|O(n)||
|  14  |Palindrome String0817|[GFG](https://practice.geeksforgeeks.org/problems/palindrome-string0817/1) |[CPP](./Strings/GFG_STR_PalindromeString.cpp) |Easy|O(1)||
|  15  |Run Length Encoding|[GFG](https://practice.geeksforgeeks.org/problems/run-length-encoding/1) |[Java](./Strings/RunLengthEncoding.java) |Easy|O(n)||
|  16  |Maximize Number Of Subsequences In A String|[LC](https://leetcode.com/problems/maximize-number-of-subsequences-in-a-string/) |[Java](./Strings/MaximizeNumberOfSubsequencesInAString.java) ||O(n)||
|  17  |Find All Anagrams In A String|[LC](https://leetcode.com/problems/find-all-anagrams-in-a-string/) |[Java](./Strings/AnagramSearch.java) [CPP](./Strings/LC_438_FindAllAnagramsString.cpp) ||O(n<sup>2</sup>)||
|  18  |Count Words Obtained After Adding A Letter|[LC](https://leetcode.com/problems/count-words-obtained-after-adding-a-letter/) |[Java](./Strings/CountWordsObtainedAfterAddingALetter.java) ||O(n<sup>2</sup>)||
|  19  |Longest Prefix Suffix2527|[GFG](https://practice.geeksforgeeks.org/problems/longest-prefix-suffix2527/1) |[Java](./Strings/LongestPrefixSuffix.java) |Medium|O(n)||
|  20  |Multiply Strings|[LC](https://leetcode.com/problems/multiply-strings) |[Java](./Strings/MultiplyStrings.java) ||O(n<sup>2</sup>)||
|  21  |Maximum Number Of Vowels In A Substring Of Given Length|[LC](https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/) |[Java](./Strings/MaximumNumberOfVowelsInASubstringOfGivenLength.java) [CPP](./Strings/LC_1456_MaxVowelsInSubString.cpp) ||O(1)||
|  22  |Sherlock And Anagrams|[HR](https://www.hackerrank.com/challenges/sherlock-and-anagrams/) |[Java](./Strings/SherlockAndAnagrams.java) ||O(n<sup>2</sup>)||
|  23  |Strong Password Checker Ii|[LC](https://leetcode.com/problems/strong-password-checker-ii/) |[Java](./Strings/StrongPasswordChecker2.java) ||O(n)||
|  24  |Reorganize String|[LC](https://leetcode.com/problems/reorganize-string/) |[Java](./Strings/ReorganizeString.java) ||O(n)||
|  25  |Count Substrings That Differ By One Character|[LC](https://leetcode.com/problems/count-substrings-that-differ-by-one-character/) |[Java](./Strings/CountSubstringsThatDifferByOneCharacter.java) ||O(n<sup>3</sup>)||
|  26  |Delete Operation For Two Strings|[LC](https://leetcode.com/problems/delete-operation-for-two-strings/) |[Java](./Strings/DeleteOperationForTwoStrings.java) ||O(n<sup>2</sup>)||
|  27  |Rearrange Characters4649|[GFG](https://practice.geeksforgeeks.org/problems/rearrange-characters4649/1) |[Java](./Strings/RearrangeCharacters.java) |Medium|O(n<sup>2</sup>)||
|  28  |Bulk Shift Letters|[BS](https://binarysearch.com/problems/Bulk-Shift-Letters) |[Java](./Strings/BulkShiftLetters.java) ||O(n)||
|  29  |Remove All Duplicates From A Given String4321|[GFG](https://practice.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1/) |[Java](./Strings/RemoveAllDuplicatesFromAGivenString.java) |Easy|O(n)||
|  30  |Validate An Ip Address 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/validate-an-ip-address-1587115621/1) |[Java](./Strings/ValidateIPAddress.java) |Medium|O(n)||
|  31  |Unique Morse Code Words|[LC](https://leetcode.com/problems/unique-morse-code-words/) |||O(1)||
|  32  |Consecutive Characters|[LC](https://leetcode.com/problems/consecutive-characters/) |[Java](./Strings/ConsecutiveCharacters.java) [CPP](./Strings/LC_1446_STR_Consecutive_Characters.cpp) ||O(n)||
|  33  |Rotate String|[LC](https://leetcode.com/problems/rotate-string/) |[Java](./Strings/StringRotationCheck.java) [CPP](./Strings/LC_796_RotateString.cpp) ||O(1)||
|  34  |Longest K Unique Characters Substring0853|[GFG](https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1/) |[Java](./Strings/LongestKUniqueCharacters.java) |Easy|O(n<sup>2</sup>)||
|  35  |Add Binary Numbers|[BS](https://binarysearch.com/problems/Add-Binary-Numbers) |[Java](./Strings/AddBinaryNumbers.java) ||O(n)||
|  36  |Number Of Substrings With Only 1s|[LC](https://leetcode.com/problems/number-of-substrings-with-only-1s/) |[Java](./Strings/CountConsecutiveOnes.java) ||O(n)||
|  37  |Uncommon Words From Two Sentences|[LC](https://leetcode.com/problems/uncommon-words-from-two-sentences/) |[CPP](./Strings/LC_884_STR_UncommonWordsFromTwoSentences.cpp) ||O(1)||
|  38  |Permutation In String|[LC](https://leetcode.com/problems/permutation-in-string/) |[Java](./Strings/PermutationInStrings.java) ||O(n)||
|  39  |Subsequence Strings|[BS](https://binarysearch.com/problems/Subsequence-Strings) |[Java](./Strings/SubsequenceStrings.java) ||O(n)||
|  40  |Smallest Window In A String Containing All The Characters Of Another String 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/smallest-window-in-a-string-containing-all-the-characters-of-another-string-1587115621/1) [LC](https://leetcode.com/problems/minimum-window-substring/) |[Java](./Strings/MinimumWindowSubstring.java) |Medium|O(n<sup>2</sup>)||
|  41  |Valid Anagram|[LC](https://leetcode.com/problems/valid-anagram/) |[Java](./Strings/AnagramCheck.java) [CPP](./Strings/LC_242_ValidAnagram.cpp) ||O(n)||
|  42  |Text Justification|[LC](https://leetcode.com/problems/text-justification/) |[Java](./Strings/TextJustification.java) ||O(n<sup>3</sup>)||
|  43  |Valid Palindrome|[LC](https://leetcode.com/problems/valid-palindrome/) |[Java](./Strings/CheckPalindrome.java) ||O(n)||
|  44  |Replace The Substring For Balanced String|[LC](https://leetcode.com/problems/replace-the-substring-for-balanced-string/) |[Java](./Strings/ReplaceTheSubstringForBalancedString.java) ||O(n)||
|  45  |Implement Atoi|[GFG](https://practice.geeksforgeeks.org/problems/implement-atoi/1) |[Java](./Strings/Atoi.java) [CPP](./Strings/GFG_ImplementAtoi.cpp) |Medium|O(n)||
|  46  |Smallest Distant Window3132|[GFG](https://practice.geeksforgeeks.org/problems/smallest-distant-window3132/1) |[Java](./Strings/SmallestDistinctWindow.java) |Medium|O(n)||
|  47  |Greatest English Letter In Upper And Lower Case|[LC](https://leetcode.com/problems/greatest-english-letter-in-upper-and-lower-case/) |[Java](./Strings/GreatestEnglishLetterInUpperAndLowerCase.java) ||O(n)||
|  48  |First Unique Character In A String|[LC](https://leetcode.com/problems/first-unique-character-in-a-string/) |[Java](./Strings/FirstUniqueCharacter.java) [CPP](./Strings/GFG_NonRepeatingChar.cpp) ||O(n)||
|  49  |Count And Say|[LC](https://leetcode.com/problems/count-and-say/) |[Java](./Strings/CountAndSay.java) ||O(n<sup>2</sup>)||
|  50  |Reorder Data In Log Files|[LC](https://leetcode.com/problems/reorder-data-in-log-files/) |[Java](./Strings/ReorderDataInLogFiles.java) ||O(1)||
|  51  |Valid Palindrome Ii|[LC](https://leetcode.com/problems/valid-palindrome-ii/) |[Java](./Strings/CheckPalindrome2.java) ||O(n)||
|  52  |Number Of Substrings Containing All Three Characters|[LC](https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/) |[Java](./Strings/NumberOfSubstringsContainingAllThreeCharacters.java) ||O(n<sup>2</sup>)||
|  53  |Repetition Of K Length Substring|[GFG](https://practice.geeksforgeeks.org/problems/repetition-of-k-length-substring/1) |[Java](./Strings/RepititionOfKLengthSubstring.java) |Easy|O(n)||
|  54  |Reverse A String|[GFG](https://practice.geeksforgeeks.org/problems/reverse-a-string/1#) |[CPP](./Strings/GFG_STR_ReverseString.cpp) |Basic|O(1)||
|  55  |Valid Number|[LC](https://leetcode.com/problems/valid-number/) |[Java](./Strings/ValidNumber.java) ||O(n)||
|  56  |Longest Even Length Substring|[GFG](https://practice.geeksforgeeks.org/problems/longest-even-length-substring/0) |[Java](./Strings/LongestEvenLengthSubstring.java) |Medium|O(n<sup>3</sup>)||
|  57  |Verifying An Alien Dictionary|[LC](https://leetcode.com/problems/verifying-an-alien-dictionary/) |[Java](./Strings/VerifyAlienDictionary.java) ||O(n<sup>2</sup>)||
|  58  |Find First Repeated Character4108|[GFG](https://practice.geeksforgeeks.org/problems/find-first-repeated-character4108/1/) |[CPP](./Strings/GFG_FirstRepeatedChar.cpp) |Basic|O(1)||
|  59  |Find The Missing No In String|[GFG](https://practice.geeksforgeeks.org/problems/find-the-missing-no-in-string/1) |[Java](./Strings/FindTheMissingNoInString.java) |null|O(n<sup>2</sup>)||
|  60  |First Non Repeating Character In A Stream1216|[GFG](https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1) |[Java](./Strings/FirstUniqueCharacterInAStream.java) |Medium|O(n<sup>2</sup>)||
|  61  |Substrings Of Length K With K 1 Distinct Elements|[GFG](https://practice.geeksforgeeks.org/problems/substrings-of-length-k-with-k-1-distinct-elements/1#) |[Java](./Strings/SubstringsWithK-1DistinctElements.java) |Medium|O(n)||
## Tree

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Count Number Of Subtrees Having Given Sum|[GFG](https://practice.geeksforgeeks.org/problems/count-number-of-subtrees-having-given-sum/1) |[Java](./Tree/CountNumberOfSubtreesHavingGivenSum.java) |Medium|O(1)||
|  2  |Maximum Width Of Tree|[GFG](https://practice.geeksforgeeks.org/problems/maximum-width-of-tree/1) |[Java](./Tree/MaximumWidthOfTree.java) |Easy|O(n<sup>2</sup>)||
|  3  |Binary Tree To Linked List|[BS](https://binarysearch.com/problems/Binary-Tree-to-Linked-List) |[Java](./Tree/BinaryTreeToLinkedList.java) ||O(1)||
|  4  |Flatten Binary Tree To Linked List|[LC](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/) |[Java](./Tree/BinaryTreeToSLL.java) ||O(n<sup>2</sup>)||
|  5  |Diagonal Traversal Of Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1) |[Java](./Tree/DiagonalTraversal.java) |Medium|O(n<sup>2</sup>)||
|  6  |Odd Even Level Difference|[GFG](https://practice.geeksforgeeks.org/problems/odd-even-level-difference/1) |[Java](./Tree/OddEvenLevelDifference.java) |Easy|O(n<sup>2</sup>)||
|  7  |Paths From Root With A Specified Sum|[GFG](https://practice.geeksforgeeks.org/problems/paths-from-root-with-a-specified-sum/1) |[Java](./Tree/PathsFromRootWithASpecifiedSum.java) |Medium|O(n)||
|  8  |Validate Binary Tree Nodes|[LC](https://leetcode.com/problems/validate-binary-tree-nodes/) |[Java](./Tree/ValidateBinaryTreeNodes.java) ||O(n)||
|  9  |Boundary Traversal Of Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1) |[Java](./Tree/BoundaryTraversal.java) [CPP](./Tree/GFG_BoundaryTraversal.cpp) |Medium|O(1)||
|  10  |Convert Sorted Array To Binary Search Tree|[LC](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/) |[CPP](./Tree/GFG_LC_108_SortedArrayToBST.cpp) ||O(1)||
|  11  |Unique Bsts 1587115621|[GFG](https://practice.geeksforgeeks.org/problems/unique-bsts-1587115621/1#) |[Java](./Tree/UniqueBSTs.java) |Medium|O(n<sup>2</sup>)||
|  12  |Most Frequent Subtree Sum|[BS](https://binarysearch.com/problems/Most-Frequent-Subtree-Sum) |[Java](./Tree/MostFrequentSubtreeSum.java) ||O(n)||
|  13  |Find Duplicate Subtrees|[LC](https://leetcode.com/problems/find-duplicate-subtrees/) |[Java](./Tree/FindDuplicateSubTrees.java) ||O(n)||
|  14  |Path Sum|[LC](https://leetcode.com/problems/path-sum/) |[Java](./Tree/IsPathSumPresent.java) [CPP](./Tree/LC_112_PathSum.cpp) ||O(1)||
|  15  |Print Nodes Having K Leaves|[GFG](https://practice.geeksforgeeks.org/problems/print-nodes-having-k-leaves/1) |[Java](./Tree/PrintNodesHavingKLeaves.java) |Medium|O(1)||
|  16  |Burning Tree|[GFG](https://practice.geeksforgeeks.org/problems/burning-tree/1) |[Java](./Tree/BurnTree.java) |Hard|O(1)||
|  17  |Delete Node In A Bst|[LC](https://leetcode.com/problems/delete-node-in-a-bst/) |[Java](./Tree/DeleteFromBST.java) [CPP](./Tree/LC_450_DeleteFromBST.cpp) ||O(n)||
|  18  |Bottom View Of Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1) |[Java](./Tree/BottomView.java) |Medium|O(n)||
|  19  |Lowest Common Ancestor In A Bst|[GFG](https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1) [GFG](https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1) [BS](https://binarysearch.com/problems/Lowest-Common-Ancestor) |[Java](./Tree/FindLowestCommonAncestor.java) |Medium|O(n)||
|  20  |Leaf At Same Level|[GFG](https://practice.geeksforgeeks.org/problems/leaf-at-same-level/1) |[CPP](./Tree/GFG_Tree_LeafAtSameLevel.cpp) |Easy|O(1)||
|  21  |N Ary Tree Preorder Traversal|[LC](https://leetcode.com/problems/n-ary-tree-preorder-traversal/) |[Java](./Tree/NAryPreOrder.java) ||O(n)||
|  22  |Brothers From Different Root|[GFG](https://practice.geeksforgeeks.org/problems/brothers-from-different-root/1#) |[Java](./Tree/BrothersFromDifferentRoots.java) |Easy|O(n)||
|  23  |Binary Search Tree To Greater Sum Tree|[LC](https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/) |[Java](./Tree/BinarySearchTreeToGreaterSumTree.java) ||O(1)||
|  24  |Count Nodes Equal To Average Of Subtree|[LC](https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/) |[Java](./Tree/CountNodesEqualToAverageOfSubtree.java) ||O(1)||
|  25  |Path Sum Iii|[LC](https://leetcode.com/problems/path-sum-iii/) |[Java](./Tree/PathSum3.java) ||O(1)||
|  26  |Unique Binary Search Trees Ii|[LC](https://leetcode.com/problems/unique-binary-search-trees-ii/) |[Java](./Tree/UniqueBinarySearchTrees.java) ||O(n)||
|  27  |Expression Tree|[GFG](https://practice.geeksforgeeks.org/problems/expression-tree/1) |[Java](./Tree/ExpressionTree.java) |Easy|O(1)||
|  28  |N Ary Tree Level Order Traversal|[LC](https://leetcode.com/problems/n-ary-tree-level-order-traversal/) |[Java](./Tree/NAryLevelOrderTraversal.java) ||O(n<sup>3</sup>)||
|  29  |Count Bst Nodes That Lie In A Given Range|[GFG](https://practice.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1/) |[Java](./Tree/CountNodesInRange.java) [CPP](./Tree/GFG_CountBSTnodesInRange.cpp) |Medium|O(1)||
|  30  |Maximum Difference Between Node And Ancestor|[LC](https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/) |[Java](./Tree/MaximumDifferenceBetweenAncestorAndNode.java) ||O(n)||
|  31  |Construct String From Binary Tree|[LC](https://leetcode.com/problems/construct-string-from-binary-tree/) |[Java](./Tree/BinaryTreeToString.java) ||O(1)||
|  32  |Subtree With Maximum Value|[BS](https://binarysearch.com/problems/Subtree-with-Maximum-Value) |[Java](./Tree/SubtreeWithMaximumValue.java) ||O(1)||
|  33  |Vertical Order Traversal Of A Binary Tree|[LC](https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/) [GFG](https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1) |[Java](./Tree/VerticalTraversal.java) |Medium|O(n<sup>2</sup>)||
|  34  |Inorder Successor In Bst|[GFG](https://practice.geeksforgeeks.org/problems/inorder-successor-in-bst/1) |[Java](./Tree/FindInorderSuccessor.java) [CPP](./Tree/GFG_inOrderSuccBST.cpp) |Easy|O(1)||
|  35  |Binary Tree To Bst|[GFG](https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1) |[Java](./Tree/BinaryTreeToBST.java) |Easy|O(1)||
|  36  |Path Sum Ii|[LC](https://leetcode.com/problems/path-sum-ii/) |[Java](./Tree/FindAllPathsWithGivenSum.java) ||O(n)||
|  37  |Sum Of Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/sum-of-binary-tree/1/) |[Java](./Tree/TreeSum.java) |Basic|O(1)||
|  38  |Largest Bst|[GFG](https://practice.geeksforgeeks.org/problems/largest-bst/1) |[Java](./Tree/LargestBST.java) |Medium|O(1)||
|  39  |Next Right Node|[GFG](https://practice.geeksforgeeks.org/problems/next-right-node/1) |[CPP](./Tree/NextRightNode.cpp) |Easy|O(1)||
|  40  |Populate Inorder Successor For All Nodes|[GFG](https://practice.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1#) |[Java](./Tree/PopulateInorderSuccessors.java) [CPP](./Tree/GFG_PopulateInorderSuccForAllNodes.cpp) |Medium|O(1)||
|  41  |Increasing Order Search Tree|[LC](https://leetcode.com/problems/increasing-order-search-tree/) |[Java](./Tree/IncreasingOrderSearchTree.java) ||O(1)||
|  42  |Right View Of Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1) |[Java](./Tree/RightView.java) [CPP](./Tree/GFG_Tree_RightView.cpp) |Easy|O(1)||
|  43  |Maximum Width Of Binary Tree|[LC](https://leetcode.com/problems/maximum-width-of-binary-tree/) |[Java](./Tree/MaximumWidthOfBinaryTree.java) ||O(n<sup>2</sup>)||
|  44  |Count Good Nodes In Binary Tree|[LC](https://leetcode.com/problems/count-good-nodes-in-binary-tree/) |[Java](./Tree/CountGoodNodes.java) ||O(1)||
|  45  |Preorder Traversal Iterative|[GFG](https://practice.geeksforgeeks.org/problems/preorder-traversal-iterative/0/) |[Java](./Tree/IterativePreOrder.java) |Medium|O(n)||
|  46  |Balanced Binary Tree|[LC](https://leetcode.com/problems/balanced-binary-tree/) |[Java](./Tree/CheckIfBalanced.java) ||O(1)||
|  47  |Maximum Path Sum|[GFG](https://practice.geeksforgeeks.org/problems/maximum-path-sum/1) |[Java](./Tree/MaximumPathSumBetweenTwoLeaves.java) |Hard|O(1)||
|  48  |Single Valued Subtree|[GFG](https://practice.geeksforgeeks.org/problems/single-valued-subtree/1) |[Java](./Tree/SingleValuedSubtree.java) |Medium|O(1)||
|  49  |Connect Nodes At Same Level|[GFG](https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1) |[Java](./Tree/ConnectNodesAtSameLevel.java) |Medium|O(n)||
|  50  |Check Mirror In N Ary Tree1528|[GFG](https://practice.geeksforgeeks.org/problems/check-mirror-in-n-ary-tree1528/1) |[Java](./Tree/CheckMirrorInNAryTree.java) |Medium|O(n<sup>2</sup>)||
|  51  |Binary Tree Level Order Traversal|[LC](https://leetcode.com/problems/binary-tree-level-order-traversal/) |[Java](./Tree/LevelOrderTraversal.java) [CPP](./Tree/LC_102_BinaryTreeLevelOrderTraversal.cpp) ||O(1)||
|  52  |Second Minimum Node In A Binary Tree|[LC](https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/) |[Java](./Tree/SecondMinimumNodeInABinarySearchTree.java) ||O(1)||
|  53  |Invert Binary Tree|[LC](https://leetcode.com/problems/invert-binary-tree/) |[CPP](./Tree/LC_226_Tree_InvertBinaryTree.cpp) ||O(1)||
|  54  |Leaves In Same Level|[BS](https://binarysearch.com/problems/Leaves-in-Same-Level) [GFG](https://practice.geeksforgeeks.org/problems/leaf-at-same-level/1) |[Java](./Tree/LeafAtSameLevel.java) |Easy|O(1)||
|  55  |Sum Of K Smallest Elements In Bst3029|[GFG](https://practice.geeksforgeeks.org/problems/sum-of-k-smallest-elements-in-bst3029/1) |[Java](./Tree/SumOfKSmallestElements.java) |Easy|O(n)||
|  56  |Binary Tree Paths|[LC](https://leetcode.com/problems/binary-tree-paths/) |[Java](./Tree/BinaryTreePaths.java) ||O(1)||
|  57  |Longest Univalue Path|[LC](https://leetcode.com/problems/longest-univalue-path/) |[Java](./Tree/LongestUnivaluePath.java) ||O(1)||
|  58  |Tree Pruning|[BS](https://binarysearch.com/problems/Tree-Pruning) |[Java](./Tree/TreePruning.java) ||O(1)||
|  59  |Verify Preorder Serialization Of A Binary Tree|[LC](https://leetcode.com/problems/verify-preorder-serialization-of-a-binary-tree/) |[Java](./Tree/VerifyPreorderSerializationOfATree.java) ||O(1)||
|  60  |Tree From Postorder And Inorder|[GFG](https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1/) |[Java](./Tree/BuildTreeFromInAndPost.java) |Medium|O(n)||
|  61  |Inorder Traversal Iterative|[GFG](https://practice.geeksforgeeks.org/problems/inorder-traversal-iterative/0/) |[Java](./Tree/IterativeInOrder.java) |Medium|O(n)||
|  62  |Maximum Sum Leaf To Root Path|[GFG](https://practice.geeksforgeeks.org/problems/maximum-sum-leaf-to-root-path/1) |[Java](./Tree/MaxSumPath.java) |Medium|O(1)||
|  63  |Cousins In Binary Tree|[LC](https://leetcode.com/problems/cousins-in-binary-tree/) |[Java](./Tree/AreCousins.java) ||O(n<sup>2</sup>)||
|  64  |Node At Distance|[GFG](https://practice.geeksforgeeks.org/problems/node-at-distance/1) |[Java](./Tree/NodeAtDistance.java) |Medium|O(1)||
|  65  |Construct Tree 1|[GFG](https://practice.geeksforgeeks.org/problems/construct-tree-1/1/) |[Java](./Tree/BuildTreeFromInAndPre.java) |Medium|O(n)||
|  66  |Inorder Successor|[BS](https://binarysearch.com/problems/Inorder-Successor) |[Java](./Tree/InorderSuccessor.java) ||O(n)||
|  67  |Pairs Violating Bst Property|[GFG](https://practice.geeksforgeeks.org/problems/pairs-violating-bst-property/1) |[Java](./Tree/PairsViolatingBSTProperty.java) |Medium|O(n)||
|  68  |Find A Corresponding Node Of A Binary Tree In A Clone Of That Tree|[LC](https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/) |[Java](./Tree/FindACorrespondingNodeOfABinaryTreeInACloneOfThatTree.java) ||O(1)||
|  69  |Maximum Depth Of Binary Tree|[LC](https://leetcode.com/problems/maximum-depth-of-binary-tree/) |[Java](./Tree/Height.java) [CPP](./Tree/LC_104_MaxDepthBinaryTree.cpp) ||O(1)||
|  70  |Insufficient Nodes In Root To Leaf Paths|[LC](https://leetcode.com/problems/insufficient-nodes-in-root-to-leaf-paths/) |[Java](./Tree/InsufficientNodesInRootToLeafPaths.java) ||O(1)||
|  71  |Check If Tree Is Isomorphic|[GFG](https://practice.geeksforgeeks.org/problems/check-if-tree-is-isomorphic/1) |[Java](./Tree/CheckIfTreeIsIsomorphic.java) |Easy|O(1)||
|  72  |Leaf Similar Trees|[LC](https://leetcode.com/problems/leaf-similar-trees/) |[Java](./Tree/LeafSimilarTrees.java) ||O(n<sup>2</sup>)||
|  73  |Print Binary Tree|[LC](https://leetcode.com/problems/print-binary-tree/) |[Java](./Tree/PrintBinaryTree.java) ||O(n<sup>2</sup>)||
|  74  |Binary Tree Cameras|[LC](https://leetcode.com/problems/binary-tree-cameras/) |[Java](./Tree/BinaryTreeCameras.java) ||O(1)||
|  75  |Subtree Of Another Tree|[LC](https://leetcode.com/problems/subtree-of-another-tree/) |[Java](./Tree/SubtreeOfAnotherTree.java) ||O(1)||
|  76  |Diameter Of Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1) |[Java](./Tree/Diameter.java) |Easy|O(1)||
|  77  |Sum Of The Longest Bloodline Of A Tree|[GFG](https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1#) |[Java](./Tree/SumOfLongestBloodLine.java) [CPP](./Tree/GFG_Tree_SumLongestBloodlineOfaTree.cpp) |Easy|O(1)||
|  78  |Sum Of Nodes With Even Valued Grandparent|[LC](https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/) |[Java](./Tree/SumOfNodesWithEvenValuedGrandParent.java) ||O(1)||
|  79  |Maximum Path Sum From Any Node|[GFG](https://practice.geeksforgeeks.org/problems/maximum-path-sum-from-any-node/1) |[Java](./Tree/MaximumPathSumFromAnyNode.java) |Medium|O(1)||
|  80  |Array To Bst4443|[GFG](https://practice.geeksforgeeks.org/problems/array-to-bst4443/1) [LC](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/) |[Java](./Tree/SortedArrayToBalancedBST.java) |Easy|O(n)||
|  81  |Symmetric Tree|[GFG](https://practice.geeksforgeeks.org/problems/symmetric-tree/1) |[Java](./Tree/CheckIfSymmetric.java) |Easy|O(1)||
|  82  |Transform To Sum Tree|[GFG](https://practice.geeksforgeeks.org/problems/transform-to-sum-tree/1) [BS](https://binarysearch.com/problems/Elephant-Tree) |[Java](./Tree/ConvertIntoSumTree.java) |Easy|O(1)||
|  83  |Merge Two Bst S|[GFG](https://practice.geeksforgeeks.org/problems/merge-two-bst-s/1) |[Java](./Tree/MergeTwoBSTs.java) |Hard|O(n)||
|  84  |Two Mirror Trees|[GFG](https://practice.geeksforgeeks.org/problems/two-mirror-trees/1) |[Java](./Tree/TwoMirrorTrees.java) |Easy|O(1)||
|  85  |Insert Into A Binary Search Tree|[LC](https://leetcode.com/problems/insert-into-a-binary-search-tree/) |[Java](./Tree/InsertIntoBST.java) [CPP](./Tree/LC_701_InsertIntoBST.cpp) ||O(1)||
|  86  |Children Sum Parent|[GFG](https://practice.geeksforgeeks.org/problems/children-sum-parent/1/#) |[CPP](./Tree/GFG_ChildrenSumParent.cpp) |Easy|O(1)||
|  87  |Add All Greater Values To Every Node In A Bst|[GFG](https://practice.geeksforgeeks.org/problems/add-all-greater-values-to-every-node-in-a-bst/1) |[Java](./Tree/GreaterValueAddition.java) |Medium|O(1)||
|  88  |Merging Binary Trees|[BS](https://binarysearch.com/problems/Merging-Binary-Trees) |[Java](./Tree/MergingBinaryTrees.java) ||O(1)||
|  89  |Longest Tree Sum Path From Root To Leaf|[BS](https://binarysearch.com/problems/Longest-Tree-Sum-Path-From-Root-to-Leaf) |[Java](./Tree/LongestTreeSumPathFromRootToLeaf.java) ||O(1)||
|  90  |Serialize And Deserialize A Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1) [LC](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/) |[Java](./Tree/SerializeAndDeserialize.java) |Medium|O(1)||
|  91  |Mirror Tree|[GFG](https://practice.geeksforgeeks.org/problems/mirror-tree/1) |[Java](./Tree/Mirror.java) |Easy|O(1)||
|  92  |Height Balanced Tree|[BS](https://binarysearch.com/problems/Height-Balanced-Tree) |[Java](./Tree/HeightBalancedTree.java) ||O(1)||
|  93  |N Ary Tree Postorder Traversal|[LC](https://leetcode.com/problems/n-ary-tree-postorder-traversal/) |[Java](./Tree/NAryPostOrder.java) ||O(n)||
|  94  |Binary Tree Zigzag Level Order Traversal|[LC](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/) |[Java](./Tree/ZigzagLevelOrderTraversal.java) ||O(n<sup>2</sup>)||
|  95  |Min Distance Between Two Given Nodes Of A Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1/) |[Java](./Tree/FindDistance.java) |Medium|O(1)||
|  96  |Binary Tree K Level Sum3857|[GFG](https://practice.geeksforgeeks.org/problems/binary-tree-k-level-sum3857/1) |[Java](./Tree/KLevelSum.java) |Easy|O(n<sup>2</sup>)||
|  97  |Partition Tree|[BS](https://binarysearch.com/problems/Partition-Tree) |[Java](./Tree/PartitionTree.java) ||O(n<sup>2</sup>)||
|  98  |Cousins Of A Given Node|[GFG](https://practice.geeksforgeeks.org/problems/cousins-of-a-given-node/1) |[Java](./Tree/Cousins.java) |Medium|O(n<sup>2</sup>)||
|  99  |Check Completeness Of A Binary Tree|[LC](https://leetcode.com/problems/check-completeness-of-a-binary-tree/) |[Java](./Tree/CheckCompletenessOfABinaryTree.java) ||O(n)||
|  100  |Longest Path With Different Adjacent Characters|[LC](https://leetcode.com/problems/longest-path-with-different-adjacent-characters/) |[Java](./Tree/LongestPathWithDifferentAdjacentCharacters.java) ||O(n)||
|  101  |Check If Subtree|[GFG](https://practice.geeksforgeeks.org/problems/check-if-subtree/1) |[Java](./Tree/CheckIfSubtree.java) |Medium|O(n)||
|  102  |Delete Leaves With A Given Value|[LC](https://leetcode.com/problems/delete-leaves-with-a-given-value/) |[Java](./Tree/DeleteLeavesWithGivenValue.java) ||O(1)||
|  103  |Delete Even Leaves|[BS](https://binarysearch.com/problems/Delete-Even-Leaves) |[Java](./Tree/DeleteEvenLeaves.java) ||O(1)||
|  104  |Postorder Traversal Iterative|[GFG](https://practice.geeksforgeeks.org/problems/postorder-traversal-iterative/0/) |[Java](./Tree/IterativePostOrder.java) |Medium|O(n)||
|  105  |Predecessor And Successor|[GFG](https://practice.geeksforgeeks.org/problems/predecessor-and-successor/1/) |[Java](./Tree/SuccAndPre.java) |Easy|O(1)||
|  106  |Preorder Traversal And Bst4006|[GFG](https://practice.geeksforgeeks.org/problems/preorder-traversal-and-bst4006/1/) |[Java](./Tree/CheckIfPreorderOfBST.java) |Medium|O(n)||
|  107  |Populating Next Right Pointers In Each Node|[LC](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/) |[Java](./Tree/PopulateRightPointers.java) ||O(n<sup>2</sup>)||
|  108  |Binary Tree Tilt|[LC](https://leetcode.com/problems/binary-tree-tilt/) |[Java](./Tree/BinaryTreeTilt.java) ||O(1)||
|  109  |Reverse Level Order Traversal|[GFG](https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1#) |[Java](./Tree/ReverseLevelOrder.java) [CPP](./Tree/GFG_Tree_ReverseOrderTraversal.cpp) |Easy|O(1)||
|  110  |Number Of Turns In Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/number-of-turns-in-binary-tree/1) |[Java](./Tree/NumberOfTurnsInBinaryTree.java) |Hard|O(1)||
|  111  |Remove Bst Keys Outside Given Range|[GFG](https://practice.geeksforgeeks.org/problems/remove-bst-keys-outside-given-range/1/) |[Java](./Tree/RemoveNodesOutsideRange.java) |Medium|O(n<sup>2</sup>)||
|  112  |Find A Pair With Given Target In Bst|[GFG](https://practice.geeksforgeeks.org/problems/find-a-pair-with-given-target-in-bst/1) |[Java](./Tree/FindPairInBST.java) [CPP](./Tree/GFG_FindPairWithSumBST.cpp) |Medium|O(n)||
|  113  |Validate Binary Search Tree|[LC](https://leetcode.com/problems/validate-binary-search-tree/) |[Java](./Tree/IsBST.java) [CPP](./Tree/LC_98_ValidateBST.cpp) ||O(1)||
|  114  |Count Nodes In Complete Binary Tree|[BS](https://binarysearch.com/problems/Count-Nodes-in-Complete-Binary-Tree) |[Java](./Tree/CountNodesInCompleteBinaryTree.java) ||O(n)||
|  115  |Symmetric Binary Tree|[BS](https://binarysearch.com/problems/Symmetric-Binary-Tree) [LC](https://leetcode.com/problems/symmetric-tree/) |[Java](./Tree/CheckMirror.java) [CPP](./Tree/LC_101_Tree_Symmetric.cpp) ||O(1)||
|  116  |Find The Distance Between Two Nodes4402|[GFG](https://practice.geeksforgeeks.org/problems/find-the-distance-between-two-nodes4402/1) |[Java](./Tree/ShortestDistance.java) |Easy|O(n)||
|  117  |Find The Closest Element In Bst|[GFG](https://practice.geeksforgeeks.org/problems/find-the-closest-element-in-bst/1) |[Java](./Tree/ClosestElementInBST.java) |Medium|O(n)||
|  118  |Complete Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/complete-binary-tree/1) |[Java](./Tree/CompleteBinaryTree.java) |Medium|O(n<sup>2</sup>)||
|  119  |Check Whether Bst Contains Dead End|[GFG](https://practice.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1) |[Java](./Tree/CheckDeadEnd.java) |Easy|O(1)||
|  120  |Binary Tree To Dll|[GFG](https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/1) |[Java](./Tree/BinaryTreeToDLL.java) |Hard|O(1)||
|  121  |All Elements In Two Binary Search Trees|[LC](https://leetcode.com/problems/all-elements-in-two-binary-search-trees/) |[Java](./Tree/AllElementsInTwoBinarySearchTrees.java) ||O(1)||
|  122  |Determine If Two Trees Are Identical|[GFG](https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1) |[Java](./Tree/CheckIfIdentical.java) [CPP](./Tree/GFG_DetermineIfTwoTreesIdentical.cpp) |Easy|O(1)||
|  123  |Binary Search Tree Iterator|[LC](https://leetcode.com/problems/binary-search-tree-iterator/) |[Java](./Tree/BinarySearchTreeIterator.java) ||O(n)||
|  124  |Create Binary Tree From Descriptions|[LC](https://leetcode.com/problems/create-binary-tree-from-descriptions/) |[Java](./Tree/CreateBinaryTreeFromDescriptions.java) ||O(n)||
|  125  |Foldable Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/foldable-binary-tree/1) |[Java](./Tree/FoldableBinaryTree.java) |Medium|O(1)||
|  126  |Left View Of Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1#) |[Java](./Tree/LeftView.java) [CPP](./Tree/GFG_Tree_LeftView.cpp) |Easy|O(1)||
|  127  |Top View Of Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1) |[Java](./Tree/TopView.java) |Medium|O(n)||
|  128  |Check For Balanced Tree|[GFG](https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1) |[CPP](./Tree/GFG_Tree_BalancedTree.cpp) |Easy|O(1)||
|  129  |Kth Smallest Element In A Bst|[LC](https://leetcode.com/problems/kth-smallest-element-in-a-bst/) [GFG](https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1) |[Java](./Tree/KthSmallestElement.java) |Easy|O(1)||
|  130  |Maximum Level Sum Of A Binary Tree|[LC](https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/) |[Java](./Tree/MaxLevelSum.java) ||O(n<sup>2</sup>)||
|  131  |Find Mode In Binary Search Tree|[LC](https://leetcode.com/problems/find-mode-in-binary-search-tree/) |[Java](./Tree/FindMode.java) ||O(n)||
|  132  |Deepest Leaves Sum|[LC](https://leetcode.com/problems/deepest-leaves-sum/) |[Java](./Tree/DeepestLeavesSum.java) ||O(1)||
|  133  |Duplicate Subtree In Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/duplicate-subtree-in-binary-tree/1/) |[Java](./Tree/CheckForDuplicateSubtrees.java) |Medium|O(n<sup>4</sup>)||
|  134  |Largest Value In Each Level|[GFG](https://practice.geeksforgeeks.org/problems/largest-value-in-each-level/1) |[Java](./Tree/LargestValueInEachLevel.java) |Easy|O(n<sup>2</sup>)||
|  135  |Trim A Binary Search Tree|[LC](https://leetcode.com/problems/trim-a-binary-search-tree/) |[CPP](./Tree/LC_669_TrimBST.cpp) ||O(1)||
|  136  |Bst To Greater Sum Tree|[GFG](https://practice.geeksforgeeks.org/problems/bst-to-greater-sum-tree/1) |[Java](./Tree/BstToGreaterSumTree.java) |Medium|O(1)||
|  137  |Maximum Difference Between Node And Its Ancestor|[GFG](https://practice.geeksforgeeks.org/problems/maximum-difference-between-node-and-its-ancestor/1) |[Java](./Tree/MaximumDifferenceAncestorNode.java) |Medium|O(n)||
|  138  |Sum Tree|[GFG](https://practice.geeksforgeeks.org/problems/sum-tree/1) |[Java](./Tree/CheckSumTree.java) |Medium|O(1)||
|  139  |Ffd66b6a0bf7cefb9987fa455974b6ea5695709e|[GFG](https://practice.geeksforgeeks.org/problems/ffd66b6a0bf7cefb9987fa455974b6ea5695709e/1) |[Java](./Tree/BinarySearch.java) |Easy|O(n<sup>2</sup>)||
|  140  |Minimum Height Trees|[LC](https://leetcode.com/problems/minimum-height-trees/) |[Java](./Tree/MinimumHeightTrees.java) ||O(n<sup>2</sup>)||
|  141  |Largest Tree Sum Path|[BS](https://binarysearch.com/problems/Largest-Tree-Sum-Path) |[Java](./Tree/LargestTreeSumPath.java) ||O(n)||
|  142  |Univalue Tree|[BS](https://binarysearch.com/problems/Univalue-Tree) |[Java](./Tree/UniValueTree.java) ||O(1)||
|  143  |Find Largest Value In Each Tree Row|[LC](https://leetcode.com/problems/find-largest-value-in-each-tree-row/) |[Java](./Tree/FindLargestValueInEachTreeRow.java) ||O(n<sup>2</sup>)||
|  144  |Sum Tree|[BS](https://binarysearch.com/problems/Sum-Tree) |[Java](./Tree/CheckIfSumTree.java) ||O(1)||
|  145  |Merge Two Binary Trees|[LC](https://leetcode.com/problems/merge-two-binary-trees/) |[Java](./Tree/MergeTwoBinaryTrees.java) [CPP](./Tree/LC_617_MergeTwoBST.cpp) ||O(1)||
|  146  |Nodes At Given Distance In Binary Tree|[GFG](https://practice.geeksforgeeks.org/problems/nodes-at-given-distance-in-binary-tree/1) |[Java](./Tree/FindNodesAtDistanceK.java) |Hard|O(n)||
## Trie

|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |
|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |
|  1  |Palindrome Pairs|[GFG](https://practice.geeksforgeeks.org/problems/palindrome-pairs/1) |[Java](./Trie/PalindromePairs.java) |Hard|O(n)||
|  2  |Short Encoding Of Words|[LC](https://leetcode.com/problems/short-encoding-of-words/) |[Java](./Trie/ShortestEncoding.java) ||O(n<sup>2</sup>)||
|  3  |Unique Rows In Boolean Matrix|[GFG](https://practice.geeksforgeeks.org/problems/unique-rows-in-boolean-matrix/1) |[Java](./Trie/UniqueRowsInMatrix.java) |Easy|O(n)||
|  4  |Shortest Unique Prefix For Every Word|[GFG](https://practice.geeksforgeeks.org/problems/shortest-unique-prefix-for-every-word/0/) |[Java](./Trie/ShortestUniquePrefixForEveryWord.java) |Hard|O(n)||
|  5  |Trie Delete|[GFG](https://practice.geeksforgeeks.org/problems/trie-delete/1#) |[Java](./Trie/TrieDelete.java) [CPP](./Trie/GFG_TrieDelete.cpp) |Medium|O(1)||
|  6  |Maximum Xor Of Two Numbers In An Array|[LC](https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/) |[Java](./Trie/MaximumXorPair.java) ||O(n)||
|  7  |Minimum Xor Value Pair|[GFG](https://practice.geeksforgeeks.org/problems/minimum-xor-value-pair/1/) |[Java](./Trie/MinimumXorPair.java) |Medium|O(n)||
|  8  |Stream Of Characters|[LC](https://leetcode.com/problems/stream-of-characters/) |[Java](./Trie/StreamOfCharacters.java) ||O(n)||
|  9  |Trie Insert And Search0651|[GFG](https://practice.geeksforgeeks.org/problems/trie-insert-and-search0651/1#) |[Java](./Trie/Trie.java) [CPP](./Trie/GFG_TrieInsertSearch.cpp) |Medium|O(1)||
|  10  |Implement Trie Prefix Tree|[LC](https://leetcode.com/problems/implement-trie-prefix-tree/) |[Java](./Trie/TriePrefixTree.java) ||O(n)||
|  11  |Search Suggestions System|[LC](https://leetcode.com/problems/search-suggestions-system/) |[Java](./Trie/SearchSuggestionSystem.java) ||O(n<sup>2</sup>)||
|  12  |Phone Directory4628|[GFG](https://practice.geeksforgeeks.org/problems/phone-directory4628/1) |[Java](./Trie/PhoneDirectory.java) |Hard|O(n)||
