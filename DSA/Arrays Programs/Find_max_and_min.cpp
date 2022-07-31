/*
 this is the very simple program we  have to find the largest number and lowest number . 
 

*/
#include<bits/stdc++.h>
using namespace std;
  pair<int,int> find_max_min(int arr[], int n){
      pair<int,int> p; 
       int maxi=INT_MIN; 
       int  mini= INT_MAX;
         for(int i=0; i<n; i++){
             maxi= max(maxi, arr[i]);
             mini= min(mini, arr[i]);
         }
         p.first= maxi;
         p.second=mini;
         return p ; 

  }

int main(){

 int arr[]={2,-2,-1,0,0};
    pair<int,int>p =  find_max_min(arr,5);

   cout<< " the largest numbert is "<< p.first <<" \n the  lowest number is "<< p.second;

      return 0; 
}