/*
    * Level 2
    * C/C++ Programming
    * Write C or C++ code to implement dijkstraalgorithm,
      kruskal algorithm and prim's algorithm in graph.
    * Name : Biswarup Banerjee
*/

// 3. Prim's algorithm
#include<iostream>
#include<vector>
#define mv 999
#define f(i,a,b) for(i=a;i<=b;i++)
using namespace std;
int cost[100][100],visited[100],mini,miCost = 0,n,i,j,ne = 1,u,v,t;
int main(){
    cout<<"Enter no of nodes :";
    cin>>n;
    cout<<"Enter the adj matrix :"<<endl;
    f(i,1,n) f(j,1,n) cin>>cost[i][j];
    visited[1]=1;
    while(ne < n){
        for(i= 1,mini = mv;i<=n;i++) f(j,1,n) {
            if(cost[i][j] < mini && visited[i] != 0){ 
                mini = cost[i][j]; u = i; v = j; 
            } 
        }
        if(visited[u] == 0 || visited[v] == 0){ visited[v] = 1; ne++; miCost += mini; }
        cost[u][v] = cost[v][u] = mv;
    }
    cout<<"Minimum cost = "<<miCost<<endl;
    return 0;
}




/*
0 2 0 6 0
2 0 3 8 5
0 3 0 0 7
6 8 0 0 9
0 5 7 9 0
*/