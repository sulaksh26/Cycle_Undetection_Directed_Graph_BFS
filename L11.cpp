/*Cycle Detection in Undirected Graph-BFS

if(detect(src,adj,vis)class Solution {
  public:
    bool detect(int src,vector<int>adj[],int vis[]){
        vis[src]=1;
        queue<pair<int,int>>q;
        
        q.push({src,-1});
        
        while(!q.empty()){
            int node=q.front().first;//first element src is child or comes from parent ie -1
            int parent=q.front().second;//second element is parent'
            
            q.pop();
            for(auto adjacentNode:adj[node]){
                if(!vis[adjacentNode]){
                    vis[adjacentNode]=1;
                    q.push({adjacentNode,node});
                }
                else if(parent!=adjacentNode){//node is visited but is not parent that means it must have been visited by the other pointer. node ko dusri side se aake alag pointer ne jakad lia bhai 
                    return true;
                }
            }
        }
    return false;
    }  
  
  
    
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        int vis[V]={0};    
        //This for loop is run for accessing various components in Graphs
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(detect(i,adj,vis)){
                    return true;
                }
            }
            
        }
        
        
        return false;
    }
};

*/