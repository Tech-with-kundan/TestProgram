/* 
            [Kth closest number]
in this file we will learn about  how to print kth closest
number in the array . 
in this problems you will be given  an array size of n and also the
number who  will indicate value and also one more value whose will 
indicate how many data we will print . 
Let's take an example for understanding it better .
i/p:-  arr[] ={30,40,32,33,36,37};
    x=40, k=3 ; 
o/p:-   [36,37, 40]  this should be output .   

*/ 

  #include<iostream>
  #include<queue>
  using namespace std ; 
  int  main(){
     priority_queue<pair<int,int>> pq; 
     int arr[]={30,40,32,33,36,37};
     int x=40;
     int k=3; 
     int n=6;  
      // first step 1:
      for(int i=0; i<k; i++)
        {
            int diff= abs(x- arr[i]); 
               pq.push({diff, i});

        }


         for(int i=k; i<n; i++){
               int diff= abs(x-arr[i]); 
                if(pq.top().first> diff){
                     pq.pop();
                      pq.push({diff, i});
                }
         }
           while(pq.empty()== false){
               cout<< arr[pq.top().second]<<" ";
               pq.pop();
           }
 cout<< 1/2-1 ;

     return 0; 
  }
