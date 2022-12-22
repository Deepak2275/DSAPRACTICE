#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int i=0,ans=0;
    while(n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<"answer is "<<ans<<endl;
    while(ans!=0){
    int digit=ans%10;
      if(digit==1){
        count++;
      }
      ans=ans/10;
    }
    cout<<count;

    return 0;
}