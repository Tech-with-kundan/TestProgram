/*     [Merged Kth sorted array]
  In the problems we will be given Kth sorted an array , Our job is that 
  we have to merge these arrays in one single array in sorted forms. 
  I/P:- arr1[] ={1,3,5,7};
        arr2[]={2,4,6,8};
        arr[]={0,9,10,11};
   O/P:- arr[]={0,1,2,3,4,5,6,7,8,9,10,11};     
*/
  #include<bits/stdc++.h>
  using namespace std ; 
    class Info{

      public :
      int data; 
      int row;
      int col;
      Info(int d, int r, int c){ // default constructor .
         data= d; 
         row= r; 
         col= c; 
      }
    
    };
       class Mycmp // this comparator class . 
       {
          public :
           bool operator() (Info a, Info b ){ // () operator overloading  

             return a.data > b.data ; // comparaing ...
           }
       };

         int main(){

             vector<vector<int>> nums(3,vector<int>(4,0));
           // Here I  have creted the 3*4 matrix . 
              nums[0][0]=1;
               nums[0][1]=3;
                nums[0][2]=5;
                 nums[0][3]=7;
                  nums[1][0]=2;  /* storing the element into Matrix */ 
                   nums[1][1]=4;
                    nums[1][2]=6;
                     nums[1][3]=8;
                      nums[2][0]=0;
                       nums[2][1]=9;
                        nums[2][2]=10;
                         nums[2][3]=11;
                         

             int k=3; //  This is Kth  which determines the number of sorted array which store in the vector .  
             int n= nums[0].size(); // I have found the size of column of vector of vector as we know . 
             vector<int> ans;  
             priority_queue<Info, vector<Info>,Mycmp> pq; 
             // this is Meah heap I have created .
          //  To push the Kth element into the Min heap . 
                 for(int i=0; i<k ;i++){
                     int element= nums[i][0];
                      Info temp(element, i, 0);
                      pq.push(temp);
                 }
           //  Add the element into our answer vector and  until the MinHeap becomes empty  . 
                       while(pq.size()>0){
                          Info temp=pq.top(); // I have  fetched the top element of the Min heap . 
                           pq.pop();
                        ans.push_back(temp.data); // I have stored my answer into ans vector whcih I have  declared above . 
                         
                          if(temp.col+1 < n){ // Here I have given the this condition  for checking only upper bound of the vector column  .
                            Info Topush(nums[temp.row][temp.col+1],temp.row, temp.col+1); 
                             pq.push(Topush);
                      }

                       }
           //   Printing the answe which have stored into ans vector . 
                          for(int i=0; i< ans.size();  i++){
                              cout<< ans[i]<< " ";
                          }
         return 0;    

         }
