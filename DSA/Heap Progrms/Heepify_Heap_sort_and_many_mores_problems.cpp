/*
  In this file is contains many programs , like Heap implementation , and BT and BST ans all its functions are Implemented like inorder , level order , preorder
  postorder  etc  .
  */ 


 #include<bits/stdc++.h>
   using namespace std ; 
// this next_previous is printing the next previous element of that value .
       vector<int> next_previous(vector<int> arr){

//vector<int> nextSmaller(vector<int> arr) {
    stack<int> s;
    s.push(-1);

    int n = arr.size();
    vector<int> ans(n);

    for(int i=0; i<n; i++) {
        int item= arr[i];

        while(s.top() != -1 && arr[s.top()] >= item) {
            s.pop();
        }

        //push in ans
        if(s.top() == -1)
            ans[i] = -1;
        else 
            ans[i] = s.top();
       
        s.push(i);
    }
    return ans;
       }
// this is making the ineger by using bits . this question is on leetcode .
     int max_bits_to_makeinterger(int n){
         // this is dynamically programming .
        pair<int, int> p; 
        p.first=0; 
        p.second=1;
         for(int i=2; n/=2; i*=2){
           if(n%2)
              p.second+= i; 
              swap(p.first, p.second);
         }
          return p.first; 


     }
// trippplets function is printing the all the tripplet whose sum is zero .
      vector<vector<int>> tripplets(vector<int>nums, int tar){
           vector<vector<int>> ans;
            sort(nums.begin(), nums.end());
              for(int i=0; i<nums.size()-2; i++){
                  if(i>0 && nums[i] == nums[i-1]) 
                            continue;
                  int newtar= tar- nums[i]; 
                 int s=  i+1; 
                 int e= nums.size()-1; 
                 while(s< e){


                     if(nums[s] + nums[e]== newtar){
                        ans.push_back({nums[i], nums[s], nums[e]});
                        int low=  nums[s];
                        int  high= nums[e];
                         while(nums[s]== low)
                               s++;
                            while(nums[e] == high)e--; 

                     }
                       else if( nums[s]+ nums[e]> newtar)
                                   e--;
                                   else 
                                   s++;

                 }
              }
             


            return ans ;
      }
// this function is  printing all the combination of letter   as we  see on the telephone keypad .
       vector<string> letter_of_combination(string digits){
           // test case : 21
           vector<string>ans ;
           ans={"", "", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
           // this is sequence of character which I want  to arrange like for digit 23 
           // 21 
           //[" ad","ae","af","bd","be","bf","cd","ce","cf"]
              vector<string> an; 
              for(auto i: digits){
                
                 string temp= ans[i-'0'];
                       vector<string> add; 

                      for(auto j: temp)
                            for(auto k: an)
                              add.push_back(k+j);
                      
                      swap(add, an);



              }
             for(auto ch: an)
               cout<< ch<<" ";
               return an; 



       }
// this function generating the parenthesis with N pair like if n is 3 so the output should be ((()))) thsi is the one example .
       void generates_N_parenthesis(string help, vector<string>& ans, int i, int j){
           // binary  recrustion
           if(i>j or i<0 or j<0 )
                  return; 
                  if(i==0 and j==0){
                          ans.push_back(help);
                          return ;      
                  }
                  // include the first open
                   help.push_back('(');
                   generates_N_parenthesis(help, ans, i-1, j);
                   // exclude  the last character 
                   help.pop_back();
                    help.push_back(')');
                    generates_N_parenthesis(help, ans, i, j-1);
         

       }

               
            
               // let's creation  the BT (Binary Tree)
                 class Tree {
                     public :
                     Tree * left; 
                      int val;
                  Tree * right;
                   Tree(int v){ // this is constructor
                     left=NULL; 
                     val= v;
                     right= NULL ;
                   }
                   ~Tree(){
                      delete left; 
                      delete right; 
                   }

                 } ;
                 // levele ordering traversal 
                  void LevelOrderalTraversing(Tree * root){
                   queue<Tree *> q; 
                   q.push(root);
                   q.push(NULL);
                    while(!q.empty()){
                      Tree * front= q.front();
                      // Tu Nikal 
                        q.pop();
                       if(front==NULL){
                         cout<< endl;
                         if(!q.empty()){
                            q.push(NULL);
                         }
                    }
                          else{
                             cout<< front->val<<" ";
                             // Bachhe  hai toh Bachhe ko aane de 
                             if(front->left != NULL){
                               q.push(front->left);
                             }
                               if(front->right!= NULL){
                                 q.push(front->right);
                               }
                          }
                       
                     
               }
                  }
                   int getmaxHeight_ofTree(Tree * root){
                      if(root==NULL)
                        return 0; 
                         int left= getmaxHeight_ofTree(root->left);
                         int right=getmaxHeight_ofTree(root->right);
                           int ans= max(left + right, 0)+1; 
                           return ans; 
                   }
                  Tree *   BuildTree(){
                     int data; 
                     cout<<" Enter the data  "<< endl;
                     cin>> data; 
                      if(data==-1)
                         return NULL; 
                      Tree * n= new Tree(data);
                       
                     cout<<"Enter the data for left node "<< data<< endl;
                      
                      
                         n->left=BuildTree();
                         cout<<"Entre the data for right node "<< data<< endl;
                         n->right=BuildTree();
                          return n ; 

                         

                          
                  }
                   Tree * Insert(Tree *  newnode, int data){
                       if(newnode==NULL){
                        Tree * n= new Tree(data);
                          return  n ;
                       }
                         // check for left; 
                         if(newnode->val>data){
                          //  cout<<" Enter the data for left child of "<< data<<endl;
                             newnode->left= Insert(newnode->left, data);
                         }
                         else{
                           // cout<<"Enter the data for right child of "<< data<< endl;
                          newnode->right= Insert(newnode->right, data);
                         }
                          

 

                   }
                  void  BuilTreeFor_BST(Tree ** root){
                    
                       int data; 
                       cout<<"Enter the data"<< endl;
                        cin>> data; 
                         
                         // Tree * newnode= new Tree(data);      
                         while(data!=-1){
                             
                            *root=Insert(*root, data);
                           
                            cin>> data; 
                         }
                  }

                           void insert2(Tree **r, int data){
                             Tree *n= new Tree(data);
                               if(*r==NULL){
                                   *r=n;
                                   return ;
                               }
                               Tree * p= *r; 
                              
                                  while(true){
                                     if(p->val>data){
                                         if((*r)->right==NULL){
                                             p->right=n;
                                             break;
                                         }
                                         else
                                            p= p->right; 
                                     }
                                     else
                                     {
                                      if(p->left==NULL)
                                         {
                                          p->left=n;
                                          break;
                                         }
                                         else
                                         p= p->left; 
                                     }
                                  }
                           }
                           

                  
                   void printTree(Tree * r){

                    if(r==NULL)
                       return ; 
                       printf("%d ", r->val);
                       printTree(r->left);
                       printTree(r->right);

                   }

                    void inorder(Tree *root){
                      // LNR
                      if(root==NULL)
                        return; 
                        inorder(root->left);
                        cout<< root->val<<" ";
                        inorder(root->right);
                        
                    }
                      void preorder(Tree *root){
                        //NLR
                        if(root==NULL)
                            return ; 
                            cout<<root->val<<" "; 
                            preorder(root->left);
                            preorder(root->right);
                      }
                       void postorder(Tree * root){
                        if(root==NULL)
                          return ; 
                          // LRN
                           postorder(root->left);
                           postorder(root->right);
                           cout<<root->val<<" ";
                       }


                        void inorederForBST(Tree * root){
                          // LNR
                            if(root==NULL)
                              return ; 
                              inorederForBST(root->left);
                               cout<< root->val<<" ";
                               inorederForBST(root->right);
                        }
                          void PreorderForBST(Tree * root){
                            // NLR
                              if(root==NULL)
                                 return; 
                                 cout<< root->val<<" ";
                                 PreorderForBST(root->left);
                                 PreorderForBST(root->right);
                          }
                            void PostorderBST(Tree * root){

                              // LRN
                                if(root==NULL)
                                  return; 
                                   PostorderBST(root->left);
                                   PostorderBST(root->right);
                                   cout<< root->val<<" ";
                            }
       
         // Lets create the max heap and min heap 
         /* 
              Let's talk about what is heap ?
Heap is the considered as complete Binary treee , but it i
implementation is done in the form of an array . 
 How many types of Heap ?
 There are two types of Max and Min Heap . 
 In the Min heap every  root's value should be  lesser than 
 its' desendect . 
 It opposite In the Max Heap  root's  node  should be
  greater than its desendents . 
   So let's implement this  Tree for Max tree and Min Tree .

         */

// It's creation of Heap data structure .

         class Heap{
          private :
         int  idx=0; 
            public :
            int * arr; 
            int size; 
            
            Heap(int s){
              size=s; 
              arr= new int [size];
              idx=0; 
              // the array has created  dynamically 
            }
            ~Heap(){
              delete arr; 
            }
           // Here we have built the Min Heap  . 
             void Build_MINHeap(int val){
               idx++;
               
                 if(idx==size){
                  // this condition for dynammically
                    size*=2; 
                  int * n= new int [size];
                   for(int i=1; i<=idx;i++ )
                      n[i]= arr[i];
                      // I have copied the whole array 
                      // into the new created array . 
                      delete arr; 
                      arr=n;
                 } 

                      
                
                 int index= idx; 
               arr[index]= val;
               // check for it parent 
               // I am consering 1 based indexes . 
                 while(index>1){
                  int parent= index/2; 
                   if(arr[parent]> arr[index]){
                     swap(arr[parent], arr[index]);
                     index= parent; 
                   }
                   else
                   break;
                 }
                  
             }
             // delete the  element form MIN Heap . 
              void deleteINTO_MIN_heap(){
                 // In the heap always the root node delete . 
                    if(idx==0)
                      {
                        cout<<" Heap has been emptied "<< endl;
                        return; 
                      }
                  swap(arr[1], arr[idx]);
                  idx--; 
                  // this is condition for   half array if
                   if(idx==size/2){
                    size/=2;
                    int *ptr= new int[size];
                    for(int i=1;i<= size; i++){
                         ptr[i]= arr[i];

                    }
                      delete arr; 
                      arr= ptr; 
                   }
                  
                  int i=1; 
                  int largest=i; 
                     while(i<idx && idx>1){

                     largest= i;
                      int left= 2*i; 
                      int right= 2*i+1; 
                       if(left<=idx  and arr[left]< arr[largest])
                           largest=left; 
                           if(right<=idx && arr[right]< arr[largest])
                               largest= right; 
                               if(largest!=i){
                                swap(arr[largest], arr[i]);
                                i= largest;
                               }
                               else
                               break; 

                     }
              }
              

//  Here we have printed the  element of MIN heap 
              void PrintMIN_Heap(){
                 if(idx==0)
                      {
                        cout<<" Heap has been emptied "<< endl;
                        return; 
                      }

                 cout<<"Printing the MIN Heap"<< endl;
                 for(int i=1; i<=idx; i++){
                     cout<< arr[i]<<" ";
                 }
              }


         };
            // this  main (_)  . 
       int main(void){


                  Tree * root= NULL ; 


                    root=BuildTree();
                     // this the levele order traversal algoritham 
                     // which is printing node level wise . 
                        LevelOrderalTraversing(root);
                        // this function for geting the max height of tree .
                        cout<< getmaxHeight_ofTree(root);
               
           // In this Also we have coded that how to get next previous element .
                // //  vector<int> ans; 
                // //   ans={4,3,2,3,4};
                // //   vector<int> A= next_previous(ans);
                // //    for(auto i: A)
                // //         cout<<i<<" ";
                // // int n=3; 
          // this function for make integer by using the bits. 
                // // cout<<max_bits_to_makeinterger(n);
                // // vector<int>nums;
                // // nums={-1,0,1,2,-1,-4};
                // // vector<vector<int>> ans= tripplets(nums,0);
                // //   for(auto row : ans){
                // //      for(auto col: row)
                // //        cout<< col<<" ";
                // //        cout<< endl ;
                // //  string a="21";
                // //  vector<string> a1= letter_of_combination(a);
                // //    for(auto i: a1)
                // //       cout<< i << " ";
                // //  vector<string> ans;
                // //  string help="";
                // this functioin for generating N pair of parenthesis .
                // //   generates_N_parenthesis(help, ans, 3,3);
                // //    for(auto ch:ans)
                // //     cout<< ch<< " ";
                /*  Here  we have seen how to create the BST . 
                // // Tree * root= NULL ; 
                // //     BuilTreeFor_BST(&root);
                // //   // insert2(&root,78);
                // //   // insert2(&root,7);
                // //   // insert2(&root,8);
                // //   // insert2(&root,98);
                // //   // insert2(&root,108);
                // //      //printTree(root);
                // this is inorder  traversal  ( ) function 
                // //      inorederForBST(root);
                // //       cout<< endl; 
                // this is the preorder traversal ( ) for BST  .
                // //       PreorderForBST(root);
                // //       cout<< endl;
                    this is the postorder traversal ( ) for BST */
                // //       PostorderBST(root);
                  /** From I have created the HEAP DATA structure . **/
                //   Heap obj(7);
                //    obj.Build_MINHeap(29); 
                //   //  obj.Build_MINHeap(20); 
                //    obj.Build_MINHeap(39); 
                //    obj.Build_MINHeap(406); 
                //    obj.Build_MINHeap(105); 
                //    obj.Build_MINHeap(1044); 
                //    obj.Build_MINHeap(104); 
                //    obj.Build_MINHeap(103); 
                //    obj.Build_MINHeap(1022); 

                //    obj.Build_MINHeap(101); 

                //    obj.Build_MINHeap(102); 


                //    obj.Build_MINHeap(30); 
                // this function is printing the all the nodes of HEAP . 
                //     obj.PrintMIN_Heap();
                //    obj.deleteINTO_MIN_heap();
                //   obj.PrintMIN_Heap();
                //   cout<< endl; 
                //    obj.deleteINTO_MIN_heap();
                //   obj.PrintMIN_Heap();
                //   cout<< endl; 
                //   obj.deleteINTO_MIN_heap();
                //   obj.PrintMIN_Heap();
                //   cout<< endl; 
                //      obj.deleteINTO_MIN_heap();
                //   obj.PrintMIN_Heap();
                //   cout<< endl; 
                //  obj.deleteINTO_MIN_heap();
                //   obj.PrintMIN_Heap();
                //   cout<< endl; 
                //    obj.deleteINTO_MIN_heap();
                //   obj.PrintMIN_Heap();
                //    cout<< endl; 
                //   cout<<"the size of dynamic array "<< endl;
                //   cout<<obj.size<< endl;
                  
                //    obj.deleteINTO_MIN_heap();
                //   obj.PrintMIN_Heap();
                //   cout<< endl; 
                //    obj.deleteINTO_MIN_heap();
                //   obj.PrintMIN_Heap();
                //   cout<< endl; 
                //    cout<< endl; 
                //   cout<<"the size of dynamic array "<< endl;
                //   cout<<obj.size<< endl;
                  



// Here Again I have created preorder, postorder, inorder for General Binary Tree .
                //  cout<< endl;
                //  cout<<" inorder traversal"<< endl;
                //  inorder(root);
                //   cout<<"Preorder traversal"<< endl;
                //   preorder(root);
                //   cout<<endl;
                //   cout<<"Post Traversal "<< endl;
                //    postorder(root);
                //    cout<< endl;
                //    cout<<"Level Wist traversal"<< endl;
 // If want to check these all this function 's working just uncommment these all the lines and run on your IDE and check it .



         return 0; 
       }