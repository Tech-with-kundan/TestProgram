#include<iostream>
using  namespace std;
template <typename  T >
class Queue {
    public :
 int front;
 int rear ;
 int capacity;
 int size;
 T *arr;
// constructor for creating variable dynamic type.
 Queue (int capacity){
    front=rear=-1;
    size=0;
   arr=new T[capacity];
 }
 // to get size of queue that how many elements  have stored in it.
 int getsize(){
 return size;
 }

// checking if queue is empty or not.
 bool empty(){
    if ( size == 0 )
    return true;
    return false;

 }
 // dynamic queue ( to create double size of queue  )
 void doublesize(){

  T * temp = new T [capacity*2] ;
  if ( rear > front ){
    for ( int i=front; i<rear+1; i++)
        temp[i]= arr[i] ;
  }
  else {
     for ( int i=rear; i<front+1; i++)
        temp[i]= arr[i] ;
  }
  delete arr;
  arr=temp ;
 }
// checking if queue has become full or not.
 bool isfull(){
 return size==capacity;
 }
// to get front data of queue.
 T frontData(){
    if ( size==0 ) {
        cout<<"Queue is empty " ;
        return 0;
    }
    return arr[front];
 }
// To  get rear data from queue.
 T RearData(){
    if ( size == 0 ){
        cout<<" Queue is empty " ;
        return ;
    }

    return arr[rear] ;
 }
// Adding element into the queue.
 void Enqueue(T val ) {
      if ( isfull() )
      {
       // cout<<" Queueu has become full already " ;
       doublesize();

      }
      else {
        rear= (rear+1) % capacity ;
        arr[rear]= val;
        if (front==-1){
            front=rear;
        }
        size+=1;

      }

 }
// Deleting element from the queue....
 void  dequeue(){
    if ( empty() )
        return ; // list is empty  .....

    if ( front == rear ){
        size=0;   // this codition for circullar linked list .
        front= rear=-1;

    }
    else {
        front=(front+1) % capacity ;
        size-=1;
    }

 }

 ~ Queue(){
     delete arr;
 }

};
// driver code
int main(){

     Queue<int> q(3);
     q.Enqueue(12);
     q.Enqueue(13);
     q.Enqueue(14);
     q.dequeue();
     q.Enqueue(20);
     q.Enqueue(21);
     q.Enqueue(22);
     q.dequeue();
     q.dequeue();
     q.dequeue();
     q.dequeue();
     q.Enqueue(25);
     q.Enqueue(26);

       while ( ! q.empty()){
         cout<< q.frontData()<< endl;
         q.dequeue();

     }

     return 0;
}



