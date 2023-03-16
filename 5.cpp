#include<bits/stdc++.h>
using namespace std;
const int vertex=12;
const int edge=12;
int ad_mat[vertex][vertex]= {};
bool visited[vertex];
bool bfs(int source_node,int source_node2 );
int main()
{
    for(int i=0; i<edge; i++)
    {
        int u,v;
        cin>>u>>v;
        ad_mat[v][u]=1;
        ad_mat[u][v]=1;
    }
    cout<<"the adjacency matrix is"<<"\n";
    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
            cout<< ad_mat[i][j]<<" " ;
        cout<<"\n";
    }
    cout<<bfs(6,7);
    return 0;
}
bool bfs(int source_node,int source_node2 )
{
    queue<int>q;
    q.push(source_node);
    while(!q.empty())
    {
        int head=q.front();
        q.pop();
        visited[head]=true;
        for(int i=head; i<=head; i++)
        {
            for(int j=0; j<vertex; j++)
            {
                if(ad_mat[head][j]==1)
                {
                    if(visited[j]==false)
                    {
                        q.push(j);
                        visited[j]=true;
                        if(j==source_node2)
                        {

                            return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}


