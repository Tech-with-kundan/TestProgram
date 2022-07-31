/*
 this is the very simple program we  have to
   check that is given array is palindrome or not . 
 

*/
#include<bits/stdc++.h>
using namespace std;
     bool check_array_palindrome_or_not(int arr[], int n){
           int i=0; 
           int j=n-1; 
           // this code is capable for all int array and char array . 
            while(i<j){
                  if(arr[i]== arr[j]){
                     i++;
                     j--;
                  }
                  else 
                   return false; 
                   if(i>j)
                   return true; 
            }
     }
   
int main(){

 int arr[]={2,-2,-1,0,0,8};
  int n=6; 
   if(check_array_palindrome_or_not(arr,n))
     cout<<" this array is palindrome ";
     else
    cout<<" this array is not palindrome ";
       return 0; 
}