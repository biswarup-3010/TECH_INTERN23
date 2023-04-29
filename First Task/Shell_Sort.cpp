/*
    * Level 1
    * C/C++ Programming
    * Write a C or C++ code to implement
      quick sort, heap sort, shell sort, tree
      sort.
         
    * Name : Biswarup Banerjee
*/

// 3. Shell sort :
#include<iostream>
#include<vector>
#define f(i,a,b) for(int i = a;i<b;i++)
using namespace std;
int shellSort(vector<int> &arr, int n) {
    for (int gap = n/2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;            
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
    return 0;
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
    cout<<"Shell Sort applied and the Sorted array is : ";
    shellSort(arr,n);
    printarray(arr,n);
    return 0;
}