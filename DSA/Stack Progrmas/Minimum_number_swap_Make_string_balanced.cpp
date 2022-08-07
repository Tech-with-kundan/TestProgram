/*
You are given a 0-indexed string s of even length n.
The string consists of exactly n / 2 opening brackets '[' and n / 2 closing brackets ']'.

A string is called balanced if and only if:

It is the empty string, or
It can be written as AB, where both A and B are balanced strings, or
It can be written as [C], where C is a balanced string.
You may swap the brackets at any two indices any number of times.

Return the minimum number of swaps to make s balanced.

Example 1:

Input: s = "][]["
Output: 1
Explanation: You can make the string balanced by swapping index 0 with index 3.
The resulting string is "[[]]".


Example 2:

Input: s = "]]][[["
Output: 2
Explanation: You can do the following to make the string balanced:
- Swap index 0 with index 4. s = "[]][][".
- Swap index 1 with index 5. s = "[[][]]".
The resulting string is "[[][]]".

Example 3:

Input: s = "[]"
Output: 0
Explanation: The string is already balanced.

 
*/

// let's  see it code :- 
class Solution {
public:
    int minSwaps(string s) {
        
         int ans=0; // this is our answer varaible which will keep holding the our answer . 
        // In order to solve this question we have a better data structure called 
        // Stack , as we know that it works on LIFO manner And we will use this concept 
        // to solve our problems . 
         // let's create the stack first 
         stack<char> s1; 
        //  And now traverse the whole string . 
           for(auto ch: s){
               // whenveer we will get the closer bracket then we will check the top character  of stack if '[' open  bracket character  is keept on the top of string then we will remove it .  And the next case is that suppose we get the close   bracket and the top of stack is not open character in that case we will incease the answer varaible  one by one . 
                 if(ch==']'){
                                  if (!s1.empty() && s1.top()=='[')
                                        s1.pop();
                     else
                         ans++;
                 }
               else 
               s1.push(ch);
           }
        return (ans+1)/2; 
    }
};