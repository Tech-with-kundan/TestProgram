/*
  ******************************************GRAPH*****************************************
   Graph is such important data structure , why because in the real life we use variety of applications
   of graph just like , social media, Gooogle map , Computer networks etc . 
   Whata is Graph ?
   The straightforward definition of Graph is combination of nodes and edges  . 
   In the  techincal term , A node of graph of graph can be point to anyone to anyone nodes . 

   How to implement Graph ?
   We have two maqanisam to implement graph which is :-
   1. Adjancency matrix . 
   2. Adjancency List .  
         These are the standard method to  implement Graph Data structure . 

*/



#include<bits/stdc++.h>
using namespace std; 
// Here I have created the normal undirected graph usign  adjancecy matrix . 
 class Graph_Undirected_Normal_using_matrix{
    public :
    map<int, vector<int>> adj  ; 
    void addEdge(int u,int v, int direction){

        // Lets assume that 0 -> undirected graph
        // and 1 -> directed graph 
         adj[u].push_back(v);
         if(direction==0){
            // undirected graph
            adj[v].push_back(u);
         }

    
    }
     void printAdj(){
    for(auto i: adj){
        cout<< i.first<<" ->";
        for(auto j: i.second){
            cout<< "( "<< j <<" ),";
        }
        cout<< endl; 
    }


     }


 };
 // Here I have created the normal undirected graph usign list . 
class Graph_Undirected_Normal_using_List
{
    public :
     map<int, list<int>>  adj; 
     void addEdge(int u, int v, int directoin){
        // // Lets assume that 0 -> undirected graph
        // and 1 -> directed graph 
         adj[u].push_back(v);
          if(directoin==0){
            // undirected graph
            adj[v].push_back(u);
          }

     }
     void printAdj(){

        for(auto i: adj){
            cout<< i.first<<"-> ";
            for(auto j: i.second)
              cout<< "("<< j<<"),";
              cout<< endl; 
        }
     }
};
// Here I have created the  weighted the graph  using linkelist . 
class Graph_weighted_using_list
{
 public :
  map<int , list<pair<int,int>>> adjlist; 
  void addEdge(int u, int v, int weight,  int direction ){
    // Let's assume this . 
   // direction 0 means:=  undirected graph 
   //  dircecton  1 means:= directred graph  . 
   adjlist[u].push_back(make_pair(v,weight));
    if(direction==0){
        // that means it is undirected graph  
         adjlist[v].push_back(make_pair(u,weight));
    }



  }


   void printAdj(){

     for(auto i: adjlist){
        // Actually Here adjlist is iteself is map and we know that  map stros
         // data  as key and value form . 
         cout<<i.first<<"->";
         // this will print  value and every key has   linked list in which we double data 
         // as above we have mentioned as pair <int,int>;
         for(auto  adj: i.second )
             cout<<"( "<<adj.first <<" ,"<< adj.second<<" )," ; 
             cout<< endl;
          
     }
   }
};



//Here I have implemented the weighted graph using adjancency_matrix

 class Graph_Weighted_Using_Matrix
 {
  public :
  map<int, vector<pair<int,int>>> adj;
   void addEdge(int u, int v, int weight, int directed){
       adj[u].push_back(make_pair(v,weight));
       if(directed==0)
       adj[v].push_back(make_pair(u, weight));

   } 

    void printAdj(){
         for(auto i: adj){
             cout<< i.first<<" -> ";
              for(auto i: i.second)
              cout<< "( " <<i.first <<","<<  i.second<<"),"; 
              cout<< endl;

         }
    }

 };

 int main(){

  Graph_Weighted_Using_Matrix g;
    g.addEdge(0, 1,3, 0);
    g.addEdge(1, 2,4, 0);
    g.addEdge(1, 3,9, 0);
    g.addEdge(2, 3,8, 0);
    g.addEdge(3, 4,11, 0);
    g.addEdge(2, 4,10, 0);

    cout << "Printing the Adjacency List " << endl;
    g.printAdj();
    
    return 0; 
 }