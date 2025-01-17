#include <vector>
#include <queue>
#define INF 100000

int findSmallNode(int dist[], bool visit[], int n)
{
    int min_dist = INF;
    int minpos = -1;
    for (int i=0; i < n; i++) 
    {
        if (dist[i] < min_dist && !visit[i])
        {
            min_dist = dist[i];
            minpos = i;
        }
    }
    return minpos;
}

void dijkstra(int dist[], bool visit[],int start,int n)
{
    int min_node;
    visit[start];
    for (int i = 0; i<n-1; i++) {
        min_node = findSmallNode(dist, visit, n);
        visit[min_node] = true;
        for (int i = 0; i < n; i++) {
            if (!visit[i]) {
                if (dist[min_node] + )
            }
        }
    }

}