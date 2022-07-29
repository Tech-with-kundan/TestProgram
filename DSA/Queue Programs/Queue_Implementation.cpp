/* Today we 're gonna learn about how to implement the queue  . As we know that what kind of DS queue is >
  Acctually queue works on FIFO principals , Oh what does it means ? 
  It means First in First out . Let's understand it  to bring one  real life example . 
  Suppose  you are going to watch a movie near by your cinemaplex , And for taking the ticket you will
  stand a line , That line is  known as queue . What  happens with  line The person will  at first position who will get 
  the ticket first , And leave  the line likewise the other person will come and they will get  their ticket
  And they will leave the line  ans so on . 
  So Basically  we known as it FIFO method in the programming term . That  is why I have written above
  Queue works on FIFO principals . 
  * Queue is a lenear data structure . 
  *  Queue  is useful data structure in many cases. 
  * Queue has many variants like : - singly ended queue , doubly ended queue and priority queue etc .
  */
    // Let's see it code , How will we implement this , Basically we will code it using array . 
    // The queue we will implement that will be circullar . 
    #include<iostream>
    using namespace std; 
    class Queue
    {
             private :
            int *arr; 
            int t; 
            int fronty;
            int rear; 
            int Qsize; 
             public:
             Queue(int s){ // this parametrized constructor . 
                 arr= new int [s];
                  fronty= -1;
                  rear= -1; 
                  t=0; 
                  Qsize= s; 
             }
             ~Queue(){   // this is distructor . 
                delete arr; 
             }
            
              void push(int data)
              {
                // Check for Overflow

                if(( fronty==0 && rear==Qsize-1) ||  (rear==(fronty-1)%Qsize)){
                   cout<<" Overflow";
              }
                else if(fronty==-1){
                    // Check for single element 
                     fronty=0;
                     rear=0;
                     t++;
                       arr[rear]= data;  

                }
                 else  if(rear==Qsize-1 && fronty!=0){
                    // this condition for circullar 
                           rear=0; 
                             arr[rear]= data; 
                              t++;
                 }
                  else{
                    // Normal case 
                    rear++;
                    t++;
                    arr[rear]= data; 
                  }

              }

             
              int size(){
                 if(fronty==-1)
                   return 0; 
                return t ; 
              }
              int front(){
                if(fronty==-1)
                {
                    return -1;
                }
                else
                {
                    return arr[fronty];
                }
              }
              bool empty(){
                if(fronty==-1)
                  return true; 
                  else
                  return false; 
              }
              void pop(){

                // check for empty 
                  if(fronty==-1)
                  {
                     cout<<"Underflow";
                  }
                  else if(fronty==rear){
                      // this condition for single element . 
                        fronty=-1;
                        t=0;
                        rear=-1;
                  }
                   else if(fronty==Qsize-1){
                    // this condion for circullar . 
                    fronty=0; 
                    t--; 
                   }
                   else 
                   {
                    // Normal case 
                     t--; 
                     fronty++;
                   }
              }
    } ;
         // Driver code
            int main(void){
                  Queue Q(6);
                   Q.push(12); 
                   Q.push(22);
                   Q.push(78);
                   Q.push(126);
                   Q.push(112);
                   Q.push(120);
                   cout<<Q.size(); // size will come 6
                   cout<< endl;
                   cout<<Q.front(); // the front data will come 12
                   cout<< endl;
                   Q.pop(); // the front will  be deleted 
                   
                   cout<<Q.front(); // Now the new front data will come 22
                   cout<< endl;
                   cout<<Q.size(); // the new size will come 5
                   Q.pop();
                   Q.pop();
                   Q.pop();
                   Q.pop();
                    cout<< endl;
                    cout<<Q.size(); // After deleting the 4 element the size will come 1
                     Q.push(12);
                   Q.push(22);
                   Q.push(78);
                   Q.push(126);
                   Q.push(112);
                   Q.push(234); // Here It will show Overflow
                   cout<< endl;
                   cout<<Q.size(); // the  again new  size will come 6
                   cout<< endl;
                   cout<<Q.front(); // The front data will come 120 .                

                return 0; 
            }
     