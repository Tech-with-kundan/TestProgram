/*
Given the adjacency list of a bidirectional graph. 
Your task is to copy/clone the adjacency list for each vertex and return a new list.
Example 1:

Input:

Output: 
0-> 1-> 4 
1-> 0-> 2-> 3-> 4 
2-> 1-> 3 
3-> 1-> 2-> 4 
4-> 0-> 1-> 3
Explanation:
As 0,1 and 3 is connected to 4 so 4th row
of the list containing 4 and its connected
nodes 0,1 and 3 and we have to add those in
sorted order and same for every row.


Example 2:

Input:


Output: 
0-> 2-> 3 
1-> 2 
2-> 0-> 1 
3-> 0
Explanation:
As 2 and 3 is connected to 0 so 0th row
of the list containing 0 and its connected 
nodes 2 and 3 and we have to add those in
sorted order and same for every row. 

*/
class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<int> adj[]) {
        // Code here
         vector<vector<int>> ans; 
           vector<bool> visited(V, false);
           deque<int> dq; 
            dq.push_back(0);
            vector<int> helper; 
            visited[0]= true; 
             while(dq.empty() == false){
                 int  v= dq.front();
                 dq.pop_front();
                  helper.push_back(v);
                   for(auto u: adj[v]){
                       if(visited[u] == false){
                           visited[u]= true; 
                           helper.push_back(u);
                           dq.push_back(u);
                       }
                       else
                       {
                          helper.push_back(u); 
                       }
                   }
                    ans.push_back(helper);
                    helper.clear();
             }
             // how sort the vector column  wise  see below , this is power of c++
             sort(ans.begin(),ans.end());
             return ans; 
    }
};
