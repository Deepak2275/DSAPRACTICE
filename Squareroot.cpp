#include<iostream>
using namespace std;
int Square_root(int k){
    int start=0;
    int end=k;
   long long int ans=-1;
    long long int mid=start+(end-start)/2;
    while (start<=end){

       long long int square = mid*mid; //since multiplication may leads to big number
        if (square==k){
          return mid;
        }
        else if(square<k){
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
//for float part of square part
double moreprecision(int k,int precision, int tempsol){

double factor=1;
double ans = tempsol;
for(int i=0;i<precision;i++){
    factor=factor/10;
    for(int j=0;j*j<k;j+factor){
        ans=j;
    }
}
return ans;
}

int main(){

    int k;
    cin>>k;
    int arr[k+1];
     for (int i = 0; i < k+1; i++)
    {
        arr[i]=i;
    }
    int sol=Square_root(k);
    
   cout<<"the square root of "<<k<<" is "<<moreprecision(k,3,sol);
   
}