/*
Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array. 
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Note: Retun the index of Equilibrium point. (1-based index)

Input: 
n = 5 
A[] = {1,3,5,2,2} 
Output: 3 
Explanation: For second test case 
equilibrium point is at position 3 
as elements before it (1+3) = 
elements after it (2+2). 
 
*/
class Solution {
public:
   
    int equilibriumPoint(long long arr[], int n) {
        
           long long sum=0; 
               for(int i=0; i<n; i++){
                   sum+= arr[i];
               }
                 if(sum-arr[0]==0)  //  this condition for single array element . 
                 return 1; 
                 // the next step we will  subtract the last elemement of the array  from our sum answer
                  sum-= arr[n-1];
                  // now we will traverse the one loop from 1 to size-1 .
                  // And each and every step we subtract the last-1 element from our sum answer and 
                  // also we will take one more variable to  keep track of right subarray sum .
                  long long rs=0;
                   for(int i=1; i<n-1; i++){
                        sum-= arr[n-1-i];
                        rs+= arr[n-i];
                        if(sum==rs)
                           return n-i;
                   }
                     if(sum==0)
                     return n; 
                     return -1;
    }
};