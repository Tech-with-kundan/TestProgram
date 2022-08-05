/*
Given an array of n distinct elements. Find the minimum number of swaps required to sort the array in strictly increasing order.

Example 1:
Input:
nums = {2, 8, 5, 4}
Output:
1
Explaination:
swap 8 with 4.


Example 2:

Input:
nums = {10, 19, 6, 3, 5}
Output:
2
Explaination:
swap 10 with 3 and swap 19 with 5.
*/
lass Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // first off all we will take one more vector and  copy the exist vector into the new vector 
	    // then sort these and also take hashmap why map , because it will help us know the the position and 
	    // of the element of the vector that is why we will take hashmap<int,int> . 
	    int step=0; 
	     vector<int> b(nums);  // After taking the input we will sort these  new created vector . 
	      sort(b.begin(), b.end());
	      unordered_map<int,int> m;
	       for(int i=0; i<b.size(); i++){
	           m.insert({b[i], i}); // we will keep map index to its original element . 
	       }
	       
	           for(int i=0; i<nums.size(); i++){
	                int index=m[nums[i]]; // we will find the index of element which we had added into the hahmap.
	                 while(index!=i){    // if it will not matach then we will keep swapping the  data formt 
	                                    //its element and simantansenously we will keep finding the  newly index through hashmap . 
	                      step++;
	                     swap(nums[index], nums[i]);
	                     index= m[nums[i]]; 
	                 }
	           }
	     return step; 
	}
};