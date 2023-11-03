class Solution {
    vector<int> kahnalgo(int num,vector<int>adj[]){
        vector<int>indegree(num,0);
        for(int i=0;i<num;i++){
            for(int adjNode:adj[i]){
                indegree[adjNode]++;
            }
            
        }
        queue<int>q;
        for(int i=0;i<num;i++){
            if(indegree[i]==0) q.push(i);
        }
        vector<int>topo;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            topo.push_back(node);
            for(int adjNode:adj[node]){
                indegree[adjNode]--;
                if(indegree[adjNode]==0){
                    q.push(adjNode);
                }
            }

            
        }
         if(topo.size()==num)return topo;
         return {};
        
    }
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];
        for(auto pr:prerequisites){
            adj[pr[1]].push_back(pr[0]);
        }
        
         return kahnalgo(numCourses,adj);
        
    }
};