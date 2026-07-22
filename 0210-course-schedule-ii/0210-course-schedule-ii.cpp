class Solution {
public:
    // void dfs(int node,vector<vector<int>>&graph,vector<bool>&vis,vector<int>&res){
    //     vis[node]=1;
    //     for(auto&i:graph[node]){
    //         if(!vis[i]){
    //             dfs(i,graph,vis,res);
    //         }
    //     }
    //     res.push_back(node);
    // }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>res;
        vector<vector<int>>graph(numCourses);
        vector<int>indegree(numCourses);
        for(auto&i:prerequisites){
            indegree[i[0]]++;
            graph[i[1]].push_back(i[0]);
        }
        // vector<bool>vis(numCourses,0);
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int src=q.front();
            q.pop();
            res.push_back(src);
            for(auto &i:graph[src]){
                if(--indegree[i]==0){
                    q.push(i);
                }
            }
        }
        if(res.size()!=numCourses)
    return {};
        return res;
    }
};