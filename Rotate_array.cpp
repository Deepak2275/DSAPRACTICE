#include<bits/stdc++.h>
using namespace std;
    void rotate(vector<int>& nums, int k) {
      
    // just to practice the modulus approach
      int n = nums.size();
      vector<int> temp(n);
    
      for(int i =0;i<n;i++)
       {
        temp[(i+k)%n] = nums[i];  
      }
      
      for(int i=0;i<nums.size();i++) 
      {
        nums[i] = temp[i];
      }
      
    }
    void print(vector<int>& nums){
    for(int i=0;i<nums.size();i++){
         cout<<nums[i]<<" ";   
    }
    cout<<endl;
    }
 
 int main(){
    int k,n,element;
    cin>>k>>n;

    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>element;
        nums.push_back(element);
    }
    rotate(nums,k);
    print (nums);

    return 0;
 }
