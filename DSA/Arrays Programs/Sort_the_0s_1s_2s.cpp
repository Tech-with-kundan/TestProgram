#include<bits/stdc++.h>
using namespace std;
/*
Given an array of size N containing only 0s, 1s, and 2s; 
sort the array in ascending order.
under time complexity 0(N)
     space complexity 0(1) .


Example 1:

Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.
*/ 
 int *   sortArray_0s_1s_2s(int a[], int n){
      int zero=0; 
          int one=0; 
          int two=0; 
           for(int i=0; i<n; i++){
               if(a[i]==0)
                 zero++;
                  else if(a[i]==1)
                  one++;
                  else
                  two++;
           }
               int index=0;
                 while(zero--)
                    a[index++]=0;
                    while(one--)
                    a[index++]=1;
                    while(two--)
                      a[index++]= 2;
                      
               return a; 

 }
int main(){

 int arr[]={2,2,1,0,0};
   int *a= sortArray_0s_1s_2s(arr,5);
   for(int i=0; i<5 ; i++){
     cout<< arr[i] <<" ";
   }


      return 0; 
}