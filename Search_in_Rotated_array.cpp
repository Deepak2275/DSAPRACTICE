//examples for rotated array {7,9,1,2,3} , {8,9,10,5,6,7,8,9}
#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int s,int e,int key){
    int start=s;
    int end=e;
    
    int mid=start+(end-start)/2;
    while (start<=end){
        if (key==arr[mid]){
           return mid;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    while(s<e){
    if(arr[mid]>=arr[0]){
        s=mid+1;
    }
    else{
        e=mid;
    }
    mid = s+(e-s)/2;
    }
   cout<<s<<endl;
 int pivot = s;
 int Target;
 int k;
 cout<<"enter the element you want to search "<<endl ;
 cin>>k;
 if(arr[pivot]<= Target && arr[n-1]>=Target){

   int result= binarySearch(arr,n,pivot,n-1,k);
   cout<<result;
 }
 else{
    int result= binarySearch(arr,n,0,pivot-1,k);
    cout<<result;
 }
 
    return 0;
}