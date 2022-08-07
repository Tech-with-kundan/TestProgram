// creation of graph
// And we will also check  that cycle is present  in the graph or not . 
#include<bits/stdc++.h>
using namespace std; 
  class Graph{
       public :
        map<int, vector<int>> adj;// this  is graph which I have created it using matrix. 
         void addEdge(int u , int v){
             adj[u].push_back(v);
             adj[v].push_back(u);
         }
          void printAdj(){
             for(auto u: adj){
                cout<< u.first<<"-> ";
                 for(auto v: u.second){
                       cout<< v<<" ,";
                 }
                 cout<< endl;
             }
          }
   bool IscycleBFS(int src){  // this function will check that cycle or not for  checking this I will use BFS methods
      map<int , bool> visited ; 
      map<int,int> parent; 
      deque<int> dq; 
         dq.push_back(src);
         visited[src]=  true; 
          parent[src]= -1; 
            while(dq.empty()== false){
                 int front= dq.front();
                 dq.pop_front();
                   for(auto neighbour: adj[front]){
                      if(visited[neighbour]== true && parent[front]!= neighbour)
                              return true; 
                              else if( visited[neighbour]== false){
                                 dq.push_back(neighbour);
                                  parent[neighbour]= front; 
                                   visited[neighbour]= true; 
                              }
                   }
            }
             return false; 
   }

   // Below I have coded one more function for checking the same as I have checked in BFS .  But This tiem
   //we will see the it through DFS methods . As we know that BFS and DFS these are standard algorithm of Graph Data structure . 
    bool IsDFSrec(map<int,vector<int>> adj, int s, int parent, map<int, bool> & visited )
    {
              // first mark 
               visited[s]= true; 
                for(auto neighbour: adj[s]){
                     if(visited[neighbour]== false) {
                         if(IsDFSrec(adj, neighbour, s, visited)== true)
                                return true;
                     } 
                     else if(parent != neighbour)
                         return true; 
                }
                 return false; 
    }
    bool IscycleDFS(int src, int v){
            int parent=-1;
              map<int,bool> visited;  
             for(int i=0; i<v; i++){
                   if(visited[i]== false){
                      if(IsDFSrec(adj,i,parent, visited)== true)
                              return true;
                   }
             }
              return false; 
    }


  } ;



    // driver code 
      int main(void){

       Graph g; 
        g.addEdge(0,1);
          g.addEdge(0,2);
          //  g.addEdge(1,3);
              g.addEdge(0,4);
                g.addEdge(0,5);
                  g.addEdge(0,3);


                  cout<< " the printing  the adjancancy list :"<< endl; 
                    g.printAdj();
 cout<<" Checking cycle is present or not using BFS method"<< endl;
          if(g.IscycleBFS(0))
          {
            cout<< " Yes cycle is present" << endl;
          }
          else

          cout<<" No cycle is not present "<< endl;





          cout<< " Chekcing cycle present or not using DFS Method"<< endl;
  
 if(g.IscycleDFS(0,5))
          {
            cout<< " Yes cycle is present" << endl;
          }
          else

          cout<<" No cycle is not present "<< endl;




         return 0; 
      }