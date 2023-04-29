/*
    * Level 1
    * C/C++ Programming
    * Write a C or C++ code to implement
      quick sort, heap sort, shell sort, tree
      sort.
         
    * Name : Biswarup Banerjee
*/

// 4. Tree sort :
#include<iostream>
#include<vector>
#define f(i,a,b) for(int i = a;i<b;i++)
using namespace std;
class Node {
    public:
    int key;
    Node *left, *right;
    ~Node(){
        delete left;
        delete right;
    }
};
Node *newNode(int item) {
    Node *temp = new Node();
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void storeSorted(Node *root, vector<int> &arr, int &i) {
    if (root != NULL) {
        storeSorted(root->left, arr, i);
        arr[i++] = root->key;
        storeSorted(root->right, arr, i);
    }
}
Node* insert(Node* node, int key) {
    if (node == NULL) return newNode(key);
    if (key < node->key) node->left  = insert(node->left, key);
    else if (key > node->key) node->right = insert(node->right, key);
    return node;
}
void treeSort(vector<int> &arr, int n) {
    Node *root = NULL;
    root = insert(root, arr[0]);
    f(i,1,n) root = insert(root, arr[i]);
    int i = 0;
    storeSorted(root, arr, i);
    delete root;
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
    cout<<"Tree Sort applied and the Sorted array is : ";
    treeSort(arr,n);
    printarray(arr,n);
    return 0;
}