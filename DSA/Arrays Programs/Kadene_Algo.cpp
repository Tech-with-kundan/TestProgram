/*
Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number),
 which has the maximum sum and return its sum.
 Hint:-  Use Kedene's algo . 


Example 1:

Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.
Example 2:

Input:
N = 4
Arr[] = {-1,-2,-3,-4}
Output:
-1
Explanation:
Max subarray sum is -1 
of element (-1)
*/
#include<bits/stdc++.h>
using namespace std;
  long long maxSubarraySum(int arr[], int n){
        
        // Your code here
             int i=0;
          long long    int sum=0; 
            long long  int maxi= INT_MIN; 
             while(i<n){
                  sum+= arr[i];
                  maxi= max(maxi, sum);
                  if(sum<0)
                   sum=0; 
                   i++;
             }
             return  maxi;
        
    }

int main(){

 int arr[]={2,-2,-1,0,0};
    long long int a=  maxSubarraySum(arr,5);
   cout<< a; 

      return 0; 
}