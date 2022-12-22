#include<bits/stdc++.h>
using namespace std;
//in this technique we first take a minimum element as 0th index and compare the rest of the array with that min elem
//if there exists any elem such that it is less than our current min elem swap them, now the current index is 1 
//repeat the process until the array is sorted.
void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
}
void display(vector<int>& arr){
    for(int m=0;m<arr.size();m++){
        cout<<arr[m]<<" ";
    }
}
int main(){
    int n,element;
    cin>>n;
    vector<int> arr;
    for(int k=0;k<n;k++){
        cin>>element;
        arr.push_back(element);
    }
   selectionSort(arr,n);
   display(arr);
    
}