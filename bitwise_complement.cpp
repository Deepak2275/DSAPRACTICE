#include<iostream>
using namespace std;
int main(){
    int n,mask=0;
    cin>>n;
    if(n==0){           //special case
        cout<<"1"<<endl;
    }
    else{
    int m=n;
    while(m!=0){
        mask = (mask<<1) | 1;
        m = m>>1;     
    }
    int ans = (~n) & mask;
    cout<<ans;
    }
    return 0;
}