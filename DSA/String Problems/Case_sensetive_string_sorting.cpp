/*
Case-specific Sorting of Strings
MediumAccuracy: 57.47%Submissions: 19979Points: 4
Given a string S consisting of uppercase and lowercase characters. The task is to sort uppercase and lowercase letters separately such that if the ith place in the original string had an Uppercase character then it should not have a lowercase character after being sorted and vice versa.

Example 1:

Input:
N = 12
S = defRTSersUXI
Output: deeIRSfrsTUX
Explanation: Sorted form of given string
with the same case of character as that
in original string is deeIRSfrsTUX
Example 2:
Input:
N = 6
S = srbDKi
Output: birDKs
Explanation: Sorted form of given string
with the same case of character will
result in output as birDKs.
*/

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        //  this question is medium level Now I am going to think the solution of this . 
          string ans; 
          int ansindex1=0, ansindex2=0; 
           string helper1, helper2; 
            for(int i=0; i< n; i++){
                if(str[i]>=65 && str[i]<= 90)  // lower case character 
                   helper1+=str[i];
                   else
                   helper2+= str[i];           // Upper case character 
            }
            
             // sort these string by calling inbuilt function sort();
             sort(helper1.begin(), helper1.end());
             sort(helper2.begin(), helper2.end()); 
             // Now the both string has been sorted 
              for(int i=0;  i< n; i++){
                  if(str[i]>=65 &&  str[i]<=90)
                      ans+= helper1[ansindex1++];
                      else 
                      ans+= helper2[ansindex2++];
              }
               return ans; 
             
            
          
    }
};