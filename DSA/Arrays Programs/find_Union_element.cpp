/*
 this is the very simple program we  have to
 find the union and intersection of both array .
   *  What is the union of two array?
 The union of two arrays: is the set of all elements that are either in A or in B.
 The union of given two arrays: { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }.
  Because all these elements are present either in Array1 or in Array2.
 (*Note: Array should not contain 1 element twice.)

   * what is intersection ?
   The intersection of two arrays is a list of distinct numbers which are present in both the arrays.
    The numbers in the intersection can be in any order

*/
#include<bits/stdc++.h>
using namespace std;
     vector<int>  find_union_and_intersection(int arr1[],int arr2[], int n, int m ){
           int i=0; 
         int j=0;
         vector<int> ans; 
          while(i<n &&  j<  m){
                 if(arr1[i]> arr2[j]){  // if we find any less value in any array then we will add that element in our vector answer . And also we will increse the index of the array . 
                       ans.push_back(arr2[j]);
                       j++;
                 }
                  else if(arr1[i]== arr2[j]){  //if we find  the value in any array  is equal to   both array then we will add that element in our vector answer . And also we will increse the index of the  both array . 
                        ans.push_back(arr1[i]);
                        i++;
                        j++;
                  }
                  else{  //if we find any less value in any array then we will add that element in our vector answer . And also we will increse the index of the array . 
                       ans.push_back(arr1[i]);
                       i++;
                  }
          }
           while(i<n){  // Here whatever the element reside in the array simply we will copy  that in the our vector answer . 
                 ans.push_back(arr1[i]);
                       i++;
           }
             while(j<m){  // Here whatever the element reside in the array simply we will copy  that in the our vector answer . 
                  ans.push_back(arr2[j]);
                       j++;
             }
              for(auto i: ans)
               cout<< i<< " "; 
               cout<< endl;
       //std::unique is used to remove duplicates of any 
       //element present consecutively in a range[first, last).   
       //The unique() function returns an iterator pointing to the element that
       // follows the last element that was not removed.     
               auto final= unique(ans.begin(), ans.end());
               cout<< *final << endl; 
               ans.erase(final,ans.end());
               //erase() function is used to remove elements from a container from
               // the specified position or range
               for(auto i: ans)
               cout<< i << " ";
               cout<< endl;
               return ans; 
             
     }
   
int main(){

 int arr1[]={1,2,3,4,5,5,5,5,5,5,5,5};
 int arr2[]= {3,4,5,5,5,5,5,6,7,8};

  int n1=5;
  int n2=6;
  vector<int> ans= find_union_and_intersection(arr1, arr2, n1,n2);  
    for(int i=0; i< ans.size() ; i++){
         cout<< ans[i]<< " "; 
    }
 
       return 0; 
}
