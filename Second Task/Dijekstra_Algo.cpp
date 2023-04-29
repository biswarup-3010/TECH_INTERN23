#include<bits/stdc++.h>
using namespace std;
int cost[100][100],dist[100],pred[100];
int visited[100],count,mindist,nextNode;
void dijektra(int n,int start){
    
}
int main(){
    cout<<"Enter no of rows : ";
    int n=0,s=0;
    cin>>n;
    cout<<"Enter the starting node : ";
    cin>>s;
    cout<<"Enter the adj matrix : "<<endl;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>cost[i][j];
            if(cost[i][j] == 0) cost[i][j] = 999;
        }
    }

    return 0;
}