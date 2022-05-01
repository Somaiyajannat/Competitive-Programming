#include<iostream>
#include<queue>
using namespace std;
#define N 1005
int graph[N][N];

void init(int n) {
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n; j++) {
            graph[i][j] = 0;
        }
    }
}
void BFS(int graph[N][N], int n, int src) {
    int visited[N];
    int distance[N];
    for(int i = 1; i<=n ;i++) {
        visited[i] = 0;
        distance[i] = -1;
    }

    queue <int> myqueue;
    myqueue.push(src);
    visited[src] = 1;
    distance[src] = 0;

    while(!myqueue.empty()){
        int parent = myqueue.front();
        myqueue.pop();
        for(int i = 1; i<= n; i++){
            if(graph[parent][i] == 1 && visited[i] != 1){
                myqueue.push(i);
                distance[i] = distance[parent] + 6;
                visited[i] = 1;
            }
        }
    }

    for(int i = 1; i <= n ;i++) {
        if(src != i) {
            cout << distance[i] << " ";
        }
    }
    cout << endl;
}
void printGraph(int n){
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int q;
    cin >> q;
    //cout << "query: " << q << endl;
    for(int i = 0 ;i < q; i++){
        int n, e;
        cin >> n >> e;
      //  cout << "Nodes: " << n << " edges: " << e << endl;
        init(n);
        int u, v;
        for(int i = 1; i<= e; i++) {
            cin >> u >> v;
             //   cout << "Node1: "<< u << " Node2: " << v << endl;
            graph[u][v] = 1;
            graph[v][u] = 1;
            
        }
        int src;
        cin >> src;
        // cout << "src: "<< src << endl;
        // printGraph(n);
        BFS(graph,n,src);
        //cout << endl;
    }
    return 0;
}
 
 
 
