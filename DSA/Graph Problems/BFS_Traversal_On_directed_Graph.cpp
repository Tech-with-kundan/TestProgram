/*
Given a directed graph. The task is to do Breadth First Traversal of this graph starting from 0.
Note: One can move from node u to node v only if there's an edge from u to v and find the BFS traversal of
 the graph starting from the 0th vertex, from left to right according to the graph. Also, you should only take nodes directly or
 indirectly connected from Node 0 in consideration.

Example 1:

Input:
0->1
0->2
0->3
2->4

Output: 0 1 2 3 4
Explanation: 
0 is connected to 1 , 2 , 3.
2 is connected to 4.
so starting from 0, it will go to 1 then 2
then 3.After this 2 to 4, thus bfs will be
0 1 2 3 4.
Example 2:

Input:

Output: 0 1 2
Explanation:
0 is connected to 1 , 2.
so starting from 0, it will go to 1 then 2,
thus bfs will be 0 1 2 3 4. 


 
*/
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
         vector<int> ans;
          vector<int> Mark(V+1,0); 
            deque<int> P; 
            P.push_back(0);
            Mark[0]= true;
        
             while(P.empty()==0){
                 int u= P.front();
                 P.pop_front();
                  ans.push_back(u);
                   for(int i: adj[u])
                   {
                       if(Mark[i]==false){
                           P.push_back(i);
                           Mark[i]=true; 
                       }
                   }
             }
             return ans; 
    }
};