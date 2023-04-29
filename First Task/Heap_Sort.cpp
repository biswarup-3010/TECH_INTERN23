/*
    * Level 1
    * C/C++ Programming
    * Write a C or C++ code to implement
      quick sort, heap sort, shell sort, tree
      sort.
    * Name : Biswarup Banerjee
*/

// 2. Heap sort :

#include<iostream>
#include<vector>
#define f(i,a,b) for(int i = a;i<b;i++)
using namespace std;
void heapify(vector<int> &arr, int n, int i) {
    int largest = i,l = 2 * i + 1,r = 2 * i + 2; 
    if (l < n && arr[l] > arr[largest]) largest = l;
    if (r < n && arr[r] > arr[largest]) largest = r;
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapSort(vector<int> &arr, int n){
    for (int i = n / 2 - 1; i >= 0; i--) heapify(arr, n, i);
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
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
    cout<<"Heap Sort applied and the Sorted array is : ";
    heapSort(arr,n);
    printarray(arr,n);
    return 0;
}