#include<iostream>
using namespace std;

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
    while(s<e){ //if we include s=e case then it will check the conditions eventhough we arrive the peak value
    if(arr[mid]<arr[mid+1]){
        s=mid+1;
    }
    else{
        e=mid;
    }
    mid = s+(e-s)/2;
    }
   cout<<s;

    return 0;
}