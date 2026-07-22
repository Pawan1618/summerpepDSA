class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>graph(numCourses);
        vector<int>indegree(numCourses,0);
        for(auto&i:prerequisites){
            graph[i[1]].push_back(i[0]);
            indegree[i[0]]++;
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int>res;
        while(!q.empty()){
            int src=q.front();
            q.pop();
            res.push_back(src);
            for(auto&i:graph[src]){
                if(--indegree[i]==0){
                    q.push(i);
                }
            }
        }
        return (res.size()==numCourses);



        
    }
};