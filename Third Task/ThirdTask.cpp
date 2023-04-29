/*
    * Level 3
    * C/C++ Programming
    * Assume that you have an array of integers and you want 
      to find the second-largest element in the array. Write
      a C++ or C program to do this in a single pass without
      sorting the array.
    * Name : Biswarup Banerjee
*/

#include<iostream>
using namespace std;
int second_max(int v[],int n){
    if(n==0 || n==1) return -1;
    else if(n == 2) {
        if(v[0] == v[1]) return -1;
        else if(v[0] < v[1]) return v[0];
        return v[1];
    }
    int max,max2;
    if(v[0]>v[1]){ max = v[0]; max2 = v[1]; }
    else { max2 = v[0]; max = v[1]; }
    for(int i = 2;i<n;i++){        
        if(max > v[i] && max2 < v[i]) max2 = v[i];
        if(max < v[i]){ max2 = max; max = v[i]; }
    }
    return max2;
}
int main(){
    int a[100],n;
    cout<<"Enter no of elements : ";
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    int ans = second_max(a,n);
    if(ans == -1) cout<<"None is second maximum";
    else cout<<"Second maximum element in the array is = "<<ans;
    return 0;
}