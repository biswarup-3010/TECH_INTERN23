#include<iostream>
using namespace std;
int i,j,k,a,b,u,v,n,ne=1;
int mini,mincost=0,cost[100][100],parent[100];
int find(int);
int uni(int ,int );
int main(){
	cout<<"Enter no of rows : ";
	cin>>n;
	cout<<"Enter the adjacent matrix :\n";
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin>>cost[i][j];
			if(cost[i][j]==0) cost[i][j]=999;
		}
	}
	cout<<"The spanning tree is :\n";
	while(ne<n){
		for(i=1,mini=999;i<=n;i++){
			for(j=1;j<=n;j++){
				if(cost[i][j]<mini){
					mini = cost[i][j];
					a = u = i;
					b = v = j;
				}
			}
		}
		u = find(u);
		v = find(v);
		if(uni(u,v)){
			cout<<(ne++)<<". Edge ("<<a<<","<<b<<") = "<<mini<<endl;
			mincost += mini;
		}
		cost[a][b] = cost[b][a] = 999;
	}
	cout<<"\nMinimum cost is = "<<mincost<<endl;
	return 0;
}
int find(int i){
	while(parent[i])
	i = parent[i];
	return i;
}
int uni(int i,int j){
	if(i != j){
		parent[j] = i;
		return 1;
	}
	return 0;
}
















