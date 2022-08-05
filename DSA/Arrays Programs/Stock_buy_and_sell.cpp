/*
The cost of stock on each day is given in an array A[] of size N.
 Find all the days on which you buy and sell the stock 
 so that in between those days your profit is maximum.

Note: Since there can be multiple solutions,
the driver code will return 1 if your answer is correct, otherwise, it will return 0. In case there's no profit
 the driver code will return the string "No Profit" for a correct solution.



 Example 1:

Input:
N = 7
A[] = {100,180,260,310,40,535,695}
Output:
1
Explanation:
One possible solution is (0 3) (4 6)
We can buy stock on day 0,
and sell it on 3rd day, which will 
give us maximum profit. Now, we buy 
stock on day 4 and sell it on day 6.



Example 2:

Input:
N = 5
A[] = {4,2,2,2,4}
Output:
1
Explanation:
There are multiple possible solutions.
one of them is (3 4)
We can buy stock on day 3,
and sell it on 4th day, which will 
give us maximum profit.
*/

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here    priority_queue<int> Maxheap; 
        
                       int data=A[0];
                       int j=0; 
                       vector<int>help; 
                       vector<vector<int>> ans; 
                         // desending order .
                          int idx=-1; 
                           for(int i=n-2; i>=0; i--){
                                 if(A[i]< A[i+1]) {
                                     idx=i;
                                     break;
                                 }
                           }
                          if(idx==-1)
                            return ans; 
                         for(int i=1; i< n; i++){
                             if(data <= A[i]){
                                 data= A[i];
                             }
                             else{
                                   if(data> A[i]){
                                       ans.push_back({j,i-1});
                                   }
                                   data= A[i];
                                   j=i; 
                                
                             }
                              if(i+1==n && j!=i){
                                  ans.push_back({j,i});
                              }
                         }
                        
                         return ans; 
    
    }
};