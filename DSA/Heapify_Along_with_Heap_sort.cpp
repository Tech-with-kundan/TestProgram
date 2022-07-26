// Heapify  and also we will see the heap sort . 
// Let's talk about the time complexity of heap sort 
// is Big 0 ( nlogn) which is best time complexity . 
// In this track we will have  to solve the common problems
// of  Heap sort which is sometimes bacomes so complex . 
 #include<iostream>
 using namespace std; 
// this is set_root function is arranging the root larger as we know that in Max heap  root 's value greater than its desendents  .
   void set_root1(int arr[], int index , int size)
   {
           // find the parent 
            while(index< size){

                  int parent= index/2-1; 
                 if(arr[parent] < arr[index]){
                      swap(arr[parent], arr[index]);
                         index=parent; 
                 }
                 else
                 break;

            }
    
   }
 void heapify(int arr[], int index, int size){
     int lowerindex=index; 
      while(index<size){


        int left= 2*index+1;
          int right= 2*index+2; 
           if(left< size && arr[left]> arr[lowerindex])
                lowerindex=left; 
                if(right< size && arr[right]> arr[lowerindex]) 
                     lowerindex=right; 
                       if(lowerindex != index){
                        swap(arr[lowerindex], arr[index]);
                           index= lowerindex;
                          set_root1(arr,index, size); 
                       }
                       else
                       break; 
      }

 }
// void Maxheapify ( ) function    this is the  recrustion solution  of converting the an array into Max heap . 
   void Maxheapify(int arr[], int index, int size){
      int largest= index; 
      int left= 2*index+1; 
      int right= 2*index+2; 
       if(left<size && arr[left]> arr[largest])
           largest= left; 
           if(right<size && arr[right]> arr[largest])
           largest= right; 
           if(largest!=index){
            swap(arr[index], arr[largest]);
            Maxheapify(arr, largest, size);
           } 
           else
           return ;


   }
 // driver code 
 int   main(){
  // If want to sort the array like acending order use Max heap and  if you want to sort the array like decending order use Min Heap . 
   int arr[]={10,15,50,4,20,1,2,3,4,5,6,7,78,8,7};
   // change it into Max heap 
     int  size = 15;
     for(int i=0; i<=14; i++){
        cout<< arr[i]<<" ";
     }
     cout<< endl;
      for(int i=(size-2)/2; i>=0; i--)
           heapify(arr, i, size);
             cout<<" this is the max heap "<< endl;  // After converting the whole array into Maxheap I have printed the element of array . 
            for(int i=0; i<=14; i++)
              cout<< arr[i]<<" ";
                 for(int i=size-1; i>=1; i--){
                         swap(arr[i], arr[0]);
                             heapify(arr,0,i);   // 
                 }
                 cout<< endl; // This is our finally sorted an array  which I am printing here  . 
                  for(int i=0; i<=14; i++)
                      cout<< arr[i]<<" ";


      return 0; 
 }
