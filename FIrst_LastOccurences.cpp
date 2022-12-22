#include<iostream>
using namespace std;
int First_occurence(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int ans =-1;
    int mid=s+(e-s)/2;
    
    while (s<=e){
        if (key==arr[mid]){
            ans=mid;
          e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int last_occurence(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int ans =-1;
    int mid=s+(e-s)/2;
    
    while (s<=e){
        if (key==arr[mid]){
            ans=mid;
         s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[8]={1,2,3,3,3,3,3,5};
   
    int firstindex = First_occurence(arr,8,3);
    cout<<"first index "<<firstindex<<endl;
    int lastindex = last_occurence(arr,8,3);
    cout<<"last index "<<lastindex<<endl;
    cout<<"total occurence of the number is "<<lastindex-firstindex+1;
        return 0;
}