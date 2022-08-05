/*
Given a connected undirected graph. Perform a Depth First Traversal of the graph.
Note: Use recursive approach to find the DFS traversal of the graph starting from the 0th vertex from left to right according to the graph..

Example 1:

Input:

Output: 0 1 2 4 3
Explanation: 
0 is connected to 1, 2, 4.
1 is connected to 0.
2 is connected to 0.
3 is connected to 4.
4 is connected to 0, 3.
so starting from 0, it will go to 1 then 2
then 4, and then from 4 to 3.
Thus dfs will be 0 1 2 4 3.
Example 2:


Input:

Output: 0 1 2 3
Explanation:
0 is connected to 1 , 3.
1 is connected to 2. 
2 is connected to 1.
3 is connected to 0. 
so starting from 0, it will go to 1 then 2
then back to 0 then 0 to 3
thus dfs will be 0 1 2 3. 

*/
class Solution {
  public:
   vector<int> ans; 
   void Dfs( vector<int> adj[], int s,  bool visited[])
   {
         visited[s]=  true; 
          ans.push_back(s);
          for(int i: adj[s]){
              if(visited[i]== false){
                Dfs(adj, i, visited);   
              }
          }
          
   }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
       
         bool visited[V];
         for(int i=0; i<V; i++)
           visited[i]= false;
            for(int i=0; i<V; i++){
                if(visited[i] == false){
                    Dfs(adj, i, visited);
                }
            }
             return ans; 
    }
};
