/*
Given a string S, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). Palindrome string: A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S. Incase of conflict, 
return the substring which occurs first ( with the least starting index).


Example 1:

Input:
S = "aaaabbaa"
Output: aabbaa
Explanation: The longest Palindromic
substring is "aabbaa".
Example 2:

Input: 
S = "abc"
Output: a
Explanation: "a", "b" and "c" are the 
longest palindromes with same length.
The result is the one with the least
starting index.
*/
class Solution {
  public:
    string longestPalin (string ans) {
        // code here
         string  Ans; 
          int start=0; 
       int end= 1; 
       int low, high; 
         for( int i=1; i< ans.size(); i++){
               low= i-1; 
               high= i;
              // this code for even part 
               while(low >=0 && high< ans.size() && ans[low] == ans[high])
               {
                   if(high - low +1 > end){
                       
                        start= low; 
                        end= high - low +1; 
                   }
                   low--;
                   high++;
               }
               // this is code for odd number 
                 low = i-1; 
                 high= i+1; 
                   while(low >=0 && high< ans.size() && ans[low] == ans[high])
               {
                   if(high - low +1 > end){
                       
                        start= low; 
                        end= high - low +1; 
                   }
                   low--; 
                   high++;
               }
                    
               
         }
         for(int i=start; i<=((start+end)-1); i++)
              Ans+=  ans[i];
              return Ans; 
         
    }
};