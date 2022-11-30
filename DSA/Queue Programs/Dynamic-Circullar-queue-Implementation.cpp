// Write a program to  implement circular dynamic queue array based ..........
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
    this->capacity= capacity;
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
     capacity*=2;

  T * temp = new T [capacity] ;
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

 void halfSize(){
 int t= capacity ;
  capacity/=2;
  T * temp= new T [capacity];
  if ( rear > front){
    for( int i=front; i<= rear; i++){
        temp[i%capacity]= arr[i%t] ;
    }
  }
  else {
    for ( int i=rear;i<=front ; i++){
        temp[i%capacity]= arr[i%t];
    }
  }
  delete arr;
  arr=temp;
  front= front % capacity ;
  rear = rear % capacity ;
 }
// checking if queue has become full or not.
 bool isfull(){
 return size==capacity;
 }
// to get front data of queue.
 T frontData(){

    return arr[front];
 }
// To  get rear data from queue.
 T RearData(){

    return arr[rear] ;
 }
// Adding element into the queue.
 void Enqueue(T val ) {
      if ( isfull() )
      {
       // cout<<" Queueu has become full already " ;
       doublesize();

      }

        rear= (rear+1) % capacity ;
        arr[rear]= val;
        if (front==-1){
            front=rear;
        }
        size+=1;



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

    if ( size == capacity/2)
         halfSize();

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
     q.Enqueue(15);
     q.dequeue();

     q.dequeue();


     int s= q.getsize();

       while (s){
         cout<< q.frontData()<< endl;
         q.dequeue();
         s=q.getsize();

     }

     return 0;
}

----------------------------------------Output ----------------------------------------------------
    14 
    15


