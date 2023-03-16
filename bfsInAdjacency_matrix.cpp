#include<bits/stdc++.h>
using namespace std;
const int vertex=5;
const int edge=6;
int ad_mat[vertex][vertex]= {};
bool visited[vertex];
void bfs(int source_node);
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
    int source_node;
    cout<<"enter the source_node"<<"\n";
    cin>>source_node;
    cout<<"the  dfs in adjacency matrix is"<<"\n";
    bfs(source_node);
    return 0;
}
void bfs(int source_node)
{
    queue<int>q;
    q.push(source_node);
    while(!q.empty())
    {
        int head=q.front();
        q.pop();
        visited[head]=true;
        cout<<head<<" ";
        for(int i=head; i<=head; i++)
        {

            for(int j=0; j<vertex; j++)
            {

                if(ad_mat[head][j]==1&&visited[j]==false)
                {
                    q.push(j);
                    visited[j]=true;
                }
            }
        }
    }

}
