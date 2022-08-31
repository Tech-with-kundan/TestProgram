First negative integer in every window of size k
EasyAccuracy: 54.27%Submissions: 46892Points: 2
Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.

 

Example 1:

Input : 
N = 5
A[] = {-8, 2, 3, -6, 10}
K = 2
Output : 
-8 0 -6 -6
Explanation :
First negative integer for each window of size k
{-8, 2} = -8
{2, 3} = 0 (does not contain a negative integer)
{3, -6} = -6
{-6, 10} = -6
 
Example 2:
Input : 
N = 8
A[] = {12, -1, -7, 8, -15, 30, 16, 28}
K = 3
Output :
-1 -1 -7 -15 -15 0 
//  Here I am  writting only function  if you want to run this  files on local machine then you can run . 
// by implementing main() function . 

 
 vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
                                             
                                                                                           
        // this is complicate question I don't know  why it is mentioned easy  here . 
         deque<long long int > q;
         vector<long long int > ans; 
          for(int i=0; i<K ; i++){
                  if(A[i]<0)
                  {
                      q.push_back(i); 
                  }
                 
          }
          
          
            if(q.size()>0)
            {
                
                  ans.push_back(A[q.front()]); 
            }
            else
            {
                ans.push_back(0); 
            }
            
            
               for(int i=K; i<N; i++)
               {
                   
                      if(!q.empty() && i-q.front() >= K)
                        q.pop_front(); 
                    if(A[i]< 0)
                      q.push_back(i); 
                      
                      if(q.size()>0)
                      {
                          ans.push_back(A[q.front()]) ;   
                      }
                      else
                      {
                           ans.push_back(0); 
                      }
                   
               }
               return ans ; 
            
            
                                                 
 }