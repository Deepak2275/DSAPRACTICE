#include<bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v) {
    int s = 0;
    int e = v.size()-1;
    
    while(s<e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
    int i = n-1;
    int j = m-1;
    vector<int> ans;
    int carry = 0;
    
    while(i>=0 && j>=0) {
        int val1 = a[i];
        int val2 = b[j];   
        int sum = val1 + val2 + carry;   
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    // first case
    while(i>=0) {
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    
     // second case
    while(j>=0) {
        int sum = b[j] + carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        j--;
    }
    
     // second case
    while(carry != 0) {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    
     //print(ans);
    return reverse(ans);
}

void display(auto &v){
    for(int i=0;i< v.size();i++){
        cout<<v[i]<<" ";
       
    }
    cout<<endl;

}
 
 int main(){
    int n,m,ele,ment;
    cin>>n>>m;

    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>ele;
        a.push_back(ele);
    }
    vector<int> b;
    for(int i=0;i<m;i++){
        cin>>ment;
        b.push_back(ment);
    }
 
  vector<int> answer=findArraySum(a,n,b,m);
    display(answer);
    return 0;
 }