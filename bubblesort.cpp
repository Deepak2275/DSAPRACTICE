#include<iostream>
using namespace std;
int main(){
 int n,i;
 cin>>n;
 int arr[n];

 for(i=0;i<n;i++)
 {
     cout<<"enter an element ";
     cin>>arr[i];
 }

 cout<<"the elements before sorting are ";
 for(i=0;i<n;i++){
  cout<<arr[i]<<" ";
 }
 cout<<endl;


 for(int j=1;j<n;j++){
    bool swapped=false;
 for(i=0;i<n-1;i++){
     if(arr[i+1]<arr[i]){
        //  int temp=arr[i];
        //  arr[i]=arr[i+1];
        //  arr[i+1] = temp;
         swap(arr[i],arr[i+1]);
          swapped=true;
     }
    
     }
      if(swapped == false){
        //already sorted
        break;
 }

 }

  cout<<"the elements after sorting are ";
 for(i=0;i<n;i++){
     cout<<arr[i]<<" ";
 }
 cout<<endl;

    return 0;
}