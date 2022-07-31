/*
 this is the very simple program we  have to
   do the swap that too alternate it so simple . 
 

*/
#include<bits/stdc++.h>
using namespace std;
    void  swap_alternate_element(int arr[], int n){
           for(int i=0; i<n ; i+=2)
           {
              if(i+1==n || i>= n  )
                     break;
              swap(arr[i], arr[i+1]);
              
           }
    }

int main(){

 int arr[]={2,-2,-1,0,0,8};
  int n=6; 
   swap_alternate_element(arr, n); 
   cout<<" After the swapping let's print the element of array "<<  endl;
    for(int i=0; i<n; i++)
    cout<< arr[i]<< " ";
      return 0; 
}