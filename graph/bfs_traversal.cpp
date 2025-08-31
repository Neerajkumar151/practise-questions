class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        int vertex=adj.size();
        vector<bool> visited(vertex,false);
        queue<int> q;
        vector<int> ans;
        int source=0;
        q.push(source);
        visited[source]=true;
        
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            ans.push_back(temp);
            
            for(auto it: adj[temp]){
                if(visited[it]==false){
                    visited[it]=true;
                    q.push(it);
                }
            }
        }
        return ans;
        
    }
};