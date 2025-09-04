class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> um;
        for(auto it: edges){
            um[it[0]].push_back(it[1]);
            um[it[1]].push_back(it[0]);
        }
        // now our adjacency list is ready

        int vertex=n;  //gives no. of vertex
        vector<bool> visited(vertex,false);
        queue<int> q;
        q.push(source);
        visited[source]=true;
        
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            if(temp==destination) return true;
            
            for(auto it: um[temp]){
                if(visited[it]==false){
                    visited[it]=true;
                    q.push(it);
                }
            }
        }
        return false;

    }
};