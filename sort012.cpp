/*
    Time Complexity : O(N)
    Space Complexity : O(1)

    Where N is the size of the array.
*/

//codestudio problem sorting 0's,1's,2's

#include<iostream>
using namespace std;
void printArray(int *arr,int n){
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}
void sort012(int *arr, int n)
{

    int i = 0;
    int nextZero = 0;
    int nextTwo = n - 1;

    while (i <= nextTwo)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[nextZero]);
            i++;
            nextZero++;     //brings zeroes to front
        }
        else if (arr[i] == 2)
        {
            swap(arr[i], arr[nextTwo]);   //brings 2's to back
            nextTwo--;
        }
        else
        {
            i++;  //if arr[i]==1 implies gives all 1's
        }
    }
}
int main(){
     int arr[8]={2,1,0,2,1,0,0,1};
     sort012(arr,8);
     printArray(arr,8);
}