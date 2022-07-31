/*
Today we will  the very famous problems  which is powerset , So basically what is powerset ?
Let's discuss what is powerset ? 
Power Set: Power set P(S) of a set S is the set of all subsets of S. For example S = {a, b, c} 
then P(s)= {{}, {a}, {b}, {c}, {a,b}, {a, c}, {b, c}, {a, b, c}}. 
If S has n elements in it then P(s) will have 2n elements.
Above we have known that what is power set , so let' s make the program of powerset
in the question we will be given the string and we have to find the powerset of this string . 
Test case 
I/P:- string ans="abc";
O/P:- abc
      ab
      ac
      bc
      a
      b
      c 
       Note:- the powerset can be empty but subsequence can not . 
*/






#include<bits/stdc++.h>
using namespace std; 
  void printPowerSet(string input, int index,  string output){
     // base case 
        if(index>=input.size()){
               cout<< output<< endl;
               return ; 
        }
        // we will play the game of exclude or include
        // as we have taken one empty string for storing the subset of string . 
        char ch= input[index]; 
        output.push_back(ch);
        // first will  include the character into output string . 
        printPowerSet(input, index+1, output);

        // Now this time we will exclude the character form the output string . 
        output.pop_back();
        printPowerSet(input, index+1, output);
       
  }
int main(){

 string input="abc";
 string output="";
 // Here from the main function we will pass the our original string and 
 // one more empty string and also index . 
  printPowerSet(input,0, output);
    return 0; 
}