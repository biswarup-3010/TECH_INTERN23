/*
    * Level 1
    * C/C++ Programming
    * Write a C or C++ code to implement
      quick sort, heap sort, shell sort, tree
      sort.
         
    * Name : Biswarup Banerjee
*/

// 1. Quick sort :
#include<iostream>
#include<vector>
#define f(i,a,b) for(int i = a;i<b;i++)
using namespace std;
int partition(vector<int> &arr,int p,int r){
    int i = p-1;
    int x = arr[r];
    f(j,p,r){
        if(arr[j]<=x){
            i++;
            int t= arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    i++;
    int t=arr[i];
    arr[i]=arr[r];
    arr[r]=t;
    return i;
}
void Q_sort(vector<int> &arr,int p,int r){
    if(p<r){
        int q=partition(arr,p,r);
        Q_sort(arr,p,q-1);
        Q_sort(arr,q+1,r);
    }
}
void printarray(vector<int> &arr,int n){
    f(i,0,n) cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    vector<int> arr;
    int n,m;
    cout<<"Enter no of elements : ";
    cin>>n;
    cout<<"Enter the elements : ";
    f(i,0,n){
        cin>>m;
        arr.push_back(m);
    }
    cout<<"Quick Sort applied and the Sorted array is : ";
    Q_sort(arr,0,n-1);
    printarray(arr,n);
    return 0;
}