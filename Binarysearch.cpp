#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    
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
    int even[6]={8,9,19,23,31,37};
    int odd[5]={7,11,19,29,43};
    int evenindex = binarySearch(even,6,31);
    cout<<"even index "<<evenindex<<endl;
    int oddindex = binarySearch(odd,5,11);
    cout<<"odd index "<<oddindex<<endl;
        return 0;
}