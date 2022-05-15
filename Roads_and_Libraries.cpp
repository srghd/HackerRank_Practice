void dfs(int s,bool visited[],vector<int>adj[])
{
    visited[s]=true;
    for(int i=0;i<adj[s].size();i++)
    {       
        if(visited[adj[s][i]]==false)
            dfs(adj[s][i],visited,adj);       
    }
}
void initialize(bool visited[],int n)
{
    for(int i=0;i<n+1;i++)
        visited[i]=false;
}

long roadsAndLibraries(int n, int c_lib, int c_road, vector<vector<int>> cities) {
  vector<int>adj[n+1];
    bool visited[n+1];
    long connectedcomponents=0;
    
    for(int i=0; i<cities.size();i++)
    {   
        adj[cities[i][0]].push_back(cities[i][1]);
        adj[cities[i][1]].push_back(cities[i][0]);
    }
    if (c_lib<c_road) return c_lib*n;
    else {
    {
        initialize(visited,n);
        for(int i=1;i<=n;i++)
        {
            if(visited[i]==false)
            {
             dfs(i,visited,adj);
             ++connectedcomponents;
             }
        }   
    }
    }
    return c_road*(n-connectedcomponents)+c_lib*connectedcomponents;
}
