/*     [Merged Kth sorted array]
  In the problems we will be given Kth sorted an array , Our job is that 
  we have to merge these arrays in one single array in sorted forms. 
  I/P:- arr1[] ={1,2,3,4,5};
        arr2[]={11,12,13,14,15};
        arr[]={23,24,35,56,67,89};
   O/P:- arr[]={1,2,3,4,5,11,12,13,14,15,23,24,35,56,67,89};     


*/
  #include<bits/stdc++.h>
  using namespace std ; 
    class Info{

      public :
      int data; 
      int row;
      int col;
      Info(int d, int r, int c){
         data= d; 
         row= r; 
         col= c; 
      }
    
    };
       class Mycmp
       {
          public :
           bool operator() (Info a, Info b ){

             return a.data > b.data ; // comparaing ...
           }
       };

         int main(){

             vector<vector<int>> nums(3,vector<int>(4,0));
              nums[0][0]=1;
               nums[0][1]=3;
                nums[0][2]=5;
                 nums[0][3]=7;
                  nums[1][0]=2;
                   nums[1][1]=4;
                    nums[1][2]=6;
                     nums[1][3]=8;
                      nums[2][0]=0;
                       nums[2][1]=9;
                        nums[2][2]=10;
                         nums[2][3]=11;
                         

             int k=3; 
             int n= nums[0].size(); // I have found the size of column of vector of vector
             vector<int> ans;  
             priority_queue<Info, vector<Info>,Mycmp> pq; 
             // this is Meah heap I have created .
             int v=k;
                 for(int i=0; i<k ;i++){
                     int element= nums[i][0];
                      Info temp(element, i, 0);
                      pq.push(temp);
                 }
                       while(pq.size()>0){
                          Info temp=pq.top();
                           pq.pop();
                        ans.push_back(temp.data);
                         
                          if(temp.col+1 < n){
                            Info Topush(nums[temp.row][temp.col+1],temp.row, temp.col+1);
                             pq.push(Topush);
                      }

                       }
                          for(int i=0; i< ans.size();  i++){
                              cout<< ans[i]<< " ";
                          }
         return 0;    

         }