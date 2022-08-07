/*

  the problems statements is saying that  you will be given the stack your job is to sort the stack . 
  Example 1:
Let's assume that these are the stack  data .   
  7
  2
  8
  9
  4
  Output:-
  2
  4
  5
  6
  7
  8



*/
 #include<iostream>
 using  namespace std; 
 // let's create the stack first  then we will solve the 
 template<typename T> 
 class Stack{
    public :
    T *arr; 
     T size1; 
     int tp; 
     Stack(int s1){
        size1= s1;
         arr= new int[s1]; 
        tp=-1; 
     }
     ~Stack(){
        delete arr; 
     }
       void push(int data){
           if(tp+1== size1){
            cout<<" Overflow";
           }
           else{
            tp++;
             arr[tp]= data; 
           }

       }
        void pop(){
             if(tp==-1)
              cout<< " Underflow ";
              else{
                tp--;
              }
        }
        bool empty(){
           if(tp==-1)
              return true; 
              else
              return false;
        }
         int size(){
            return tp+1; 
         }
         T top(){
           if(tp==-1)
              return -1; 
              else
              return  arr[tp];
         }
 };
 
  void Sort(Stack<int> &s, int data){
    // base case 
   
     if(s.empty())
       {
         s.push(data); 
         return ; 
       }
        if(s.top()< data){
            int Topval= s.top();
            s.pop();
            Sort(s,data);
            s.push(Topval);
        }
        else
        {
            s.push(data);
        }
  }
 void  ReverseSort(Stack <int> s){ 
       // base case
         if(s.empty())
            return ; 
            int TopElement= s.top();
             s.pop();
            ReverseSort(s);
             
            Sort(s, TopElement);
 
     
  }
    int main(){
      Stack<int> s(5);
     
      s.push(4);
      s.push(9);
      s.push(8);
      s.push(2);
      s.push(7);

       ReverseSort(s);
       cout<< endl;
        while(!s.empty())
         {
            cout<< s.top()<< endl;
            s.pop();
         }

        return 0; 
    }
 