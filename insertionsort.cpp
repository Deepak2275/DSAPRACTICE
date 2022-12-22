#include<bits/stdc++.h>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // stop
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
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
   insertionSort(n,arr);
   display(arr);
    
}